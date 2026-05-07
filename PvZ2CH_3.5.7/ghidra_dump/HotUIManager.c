// Class: HotUIManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::IsUIFileLoaded(std::string const&) */

void __thiscall HotUIManager::IsUIFileLoaded(HotUIManager *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x20) == 0) {
    bVar1 = false;
  }
  else {
    Sexy::Upper((Sexy *)param_1,param_1);
    iVar2 = FUN_05474374(asStack_18,".JSON",0);
    if (iVar2 != -1) {
      FUN_05475ffc(asStack_10,asStack_18,0,(long)iVar2);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
    }
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       **)(this + 0x20));
    FUN_05475d88(asStack_10,uVar3);
    iVar2 = FUN_054748a4(asStack_10,asStack_18);
    bVar1 = iVar2 == 0;
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::GetUIFileForWidget(Sexy::RtWeakPtr<HotUIWidget>) */

void __thiscall HotUIManager::GetUIFileForWidget(HotUIManager *this,RtWeakPtrBase *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  HotUIFile *pHVar4;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    pHVar4 = (HotUIFile *)*puVar2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    lVar3 = HotUIFile::FindHotSwapDataByWidget(pHVar4,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (lVar3 != 0) goto LAB_03645efc;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  pHVar4 = (HotUIFile *)0x0;
LAB_03645efc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pHVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::UpdateComponents() */

void __thiscall HotUIManager::UpdateComponents(HotUIManager *this)

{
  bool bVar1;
  undefined8 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    do {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      puVar2 = (undefined8 *)
               Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)*puVar2);
      local_18 = FUN_0364601c(*puVar2);
      local_10 = FUN_0364606c(puVar2[1]);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        (**(code **)(*plVar3 + 0x48))();
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIManager::HotUIManager() */

void __thiscall HotUIManager::HotUIManager(HotUIManager *this)

{
  Sexy::LazySingleton<HotUIManager>::LazySingleton((LazySingleton<HotUIManager> *)this);
  *(undefined ***)this = &PTR__HotUIManager_0666f790;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::loadUIFile(std::string const&, PVZDB::TableIndex) */

void __thiscall
HotUIManager::loadUIFile(undefined8 param_1_00,undefined8 param_1,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PVZDB *pPVar4;
  long lVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  FUN_054757c0(asStack_18,&DAT_06aa9940);
  FUN_054757c0(asStack_18,param_1);
  Set8BytesTo0(asStack_10);
  cVar2 = PackageContentsProvider::GetPackageContentsPath(gPackageProvider,asStack_18,asStack_10);
  if (cVar2 != '\0') {
    pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    cVar2 = PVZDB::LoadPackageForTableFromRTONFile(pPVar4,param_3,asStack_10);
    if (cVar2 != '\0') {
      pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      lVar5 = PVZDB::GetTable(pPVar4,param_3);
      iVar3 = FUN_036459f0(*(undefined4 *)(lVar5 + 0x80));
      bVar1 = iVar3 != 0;
      goto LAB_03646460;
    }
  }
  bVar1 = false;
LAB_03646460:
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::createUIFromPropertySheet(Sexy::RtWeakPtr<HotUIWidgetProperties>,
   std::map<std::string, std::string, std::less<std::string >, std::allocator<std::pair<std::string
   const, std::string > > > const&) */

void HotUIManager::createUIFromPropertySheet
               (undefined8 param_1,undefined8 param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3,
               undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  HotUIWidget *extraout_x0;
  PVZDB *pPVar3;
  undefined8 uVar4;
  _func_void *extraout_x1;
  exception_ptr aeStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  lVar2 = (**(code **)(*plVar1 + 0x80))();
  FUN_036459dc(*(undefined8 *)(lVar2 + 0x18));
  nop();
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_20,extraout_x1);
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar4 = PVZDB::GetTable(pPVar3,0x90);
  Sexy::RtDbTable::AllocId(aRStack_10,uVar4,extraout_x0,1,1,0);
  Sexy::RtId::operator=((RtId *)aeStack_20,aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aeStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_3);
  HotUIWidget::InitializeWidget(extraout_x0,aRStack_18,aRStack_10,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  HotUIWidget::GetPtr();
  Sexy::RtId::~RtId((RtId *)aeStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::createComponentFromPropertySheet(Sexy::RtWeakPtr<HotUIComponentProperties>) */

void HotUIManager::createComponentFromPropertySheet
               (undefined8 param_1,undefined8 param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  long *plVar1;
  long lVar2;
  HotUIComponent *extraout_x0;
  PVZDB *pPVar3;
  undefined8 uVar4;
  _func_void *extraout_x1;
  exception_ptr aeStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  lVar2 = (**(code **)(*plVar1 + 0x80))();
  FUN_036459dc(*(undefined8 *)(lVar2 + 0x18));
  nop();
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_20,extraout_x1);
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar4 = PVZDB::GetTable(pPVar3,0x91);
  Sexy::RtDbTable::AllocId(aRStack_10,uVar4,extraout_x0,1,1,0);
  Sexy::RtId::operator=((RtId *)aeStack_20,aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aeStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_3);
  HotUIComponent::InitializeComponent(extraout_x0,aRStack_18,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtId::~RtId((RtId *)aeStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* HotUIManager::~HotUIManager() */

void __thiscall HotUIManager::~HotUIManager(HotUIManager *this)

{
  *(undefined ***)this = &PTR__HotUIManager_0666f790;
  std::vector<HotUIFile*,std::allocator<HotUIFile*>>::~vector
            ((vector<HotUIFile*,std::allocator<HotUIFile*>> *)(this + 8));
  Sexy::LazySingleton<HotUIManager>::~LazySingleton((LazySingleton<HotUIManager> *)this);
  return;
}


/* HotUIManager::~HotUIManager() */

void __thiscall HotUIManager::~HotUIManager(HotUIManager *this)

{
  ~HotUIManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::UpdateCurrentUIFromLiveLinkUpdate(Sexy::RtId const&) */

void HotUIManager::UpdateCurrentUIFromLiveLinkUpdate(RtId *param_1)

{
  bool bVar1;
  vector *pvVar2;
  WidgetHotSwapData *pWVar3;
  HotUIWidget *pHVar4;
  undefined8 local_48;
  undefined8 local_40;
  vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> avStack_38 [24];
  WidgetHotSwapData aWStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
        **)(param_1 + 0x20) !=
      (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
       *)0x0) {
    pvVar2 = (vector *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root(*(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                         **)(param_1 + 0x20));
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::vector(avStack_38,pvVar2);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      pWVar3 = (WidgetHotSwapData *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      WidgetHotSwapData::WidgetHotSwapData(aWStack_20,pWVar3);
      pHVar4 = (HotUIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      HotUIWidget::MarkLayoutDirty(pHVar4);
      pHVar4 = (HotUIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      HotUIWidget::MarkAnchorDirty(pHVar4);
      WidgetHotSwapData::~WidgetHotSwapData(aWStack_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_48);
    }
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::~vector(avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::UnloadUIFile(HotUIFile*) */

void __thiscall HotUIManager::UnloadUIFile(HotUIManager *this,HotUIFile *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  char cVar2;
  PVZDB *pPVar3;
  RtDbTable *pRVar4;
  RtDbTable *this_02;
  vector *pvVar5;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  HotUIWidget *pHVar8;
  undefined8 *puVar9;
  HotUIFile *pHVar10;
  long *plVar11;
  RtObject *this_03;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (HotUIFile *)0x0) {
    HotUIFile::RemoveWidgetsFromApp(param_1);
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x90);
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_02 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x92);
    pvVar5 = (vector *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                        *)param_1);
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::vector
              ((vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> *)&local_38,pvVar5);
    local_68 = FUN_03645cb0(local_38);
    local_60 = FUN_03645d00(local_30);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (bVar1) {
      do {
        lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar6 = HotUIWidget::GetProps();
        local_58 = FUN_03645d50(*(undefined8 *)(lVar6 + 0xb8));
        local_50 = FUN_03645da0(*(undefined8 *)(lVar6 + 0xc0));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50)
        ;
        if (bVar1) {
          do {
            pRVar7 = (RtWeakPtrBase *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_48,pRVar7);
            local_40 = FUN_03645cb0(local_38);
            local_20[0] = FUN_03645d00(local_30);
            while (bVar1 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_40,(__normal_iterator *)local_20),
                  bVar1) {
              lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
              cVar2 = Sexy::RtWeakPtrBase::operator==
                                ((RtWeakPtrBase *)(lVar6 + 0x10),(RtWeakPtrBase *)&local_48);
              if (cVar2 != '\0') {
                pHVar8 = (HotUIWidget *)0x0;
                bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar6 + 8));
                if (bVar1) {
                  this_03 = (RtObject *)
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 8));
                  pHVar8 = Sexy::RtObject::Cast<HotUIWidget>(this_03);
                }
                plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
                (**(code **)(*plVar11 + 0x68))(plVar11,pHVar8);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                          ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
                goto LAB_03646c9c;
              }
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
LAB_03646c9c:
            bVar1 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
          } while (bVar1);
        }
        pHVar8 = (HotUIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        HotUIWidget::UnloadResources(pHVar8);
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_68);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60)
        ;
      } while (bVar1);
    }
    local_48 = FUN_03645cb0(local_38);
    local_40 = FUN_03645d00(local_30);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      Sexy::RtMixedPtrBase::GetId();
      Sexy::RtDbTable::ReleaseId(pRVar4,(RtId *)local_20);
      Sexy::RtId::~RtId((RtId *)local_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_48);
    }
    local_48 = FUN_03645cb0(local_38);
    local_40 = FUN_03645d00(local_30);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      Sexy::RtMixedPtrBase::GetId();
      Sexy::RtDbTable::ReleaseId(this_02,(RtId *)local_20);
      Sexy::RtId::~RtId((RtId *)local_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_48);
    }
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x91);
    pvVar5 = (vector *)
             Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
    std::vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>>::vector
              ((vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>> *)local_20,pvVar5)
    ;
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      Sexy::RtMixedPtrBase::GetId();
      Sexy::RtDbTable::ReleaseId(pRVar4,(RtId *)&local_40);
      Sexy::RtId::~RtId((RtId *)&local_40);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
    }
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      Sexy::RtMixedPtrBase::GetId();
      Sexy::RtDbTable::ReleaseId(this_02,(RtId *)&local_40);
      Sexy::RtId::~RtId((RtId *)&local_40);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
    }
    this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 8);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_01);
    while( true ) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_01);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
      if (!bVar1) break;
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      if (param_1 == (HotUIFile *)*puVar9) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40,(__normal_iterator *)&local_48);
        std::vector<HotUIFile*,std::allocator<HotUIFile*>>::erase
                  ((vector<HotUIFile*,std::allocator<HotUIFile*>> *)this_01,local_40);
        pHVar10 = *(HotUIFile **)(this + 0x20);
        goto joined_r0x03646fc4;
      }
      FUN_03645df0((RtWeakPtr<Sexy::SoundResource> *)&local_48);
    }
    pHVar10 = *(HotUIFile **)(this + 0x20);
joined_r0x03646fc4:
    if (pHVar10 == param_1) {
      *(undefined8 *)(this + 0x20) = 0;
    }
    (**(code **)(*(long *)param_1 + 8))();
    std::vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>>::~vector
              ((vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>> *)local_20);
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::~vector
              ((vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> *)&local_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HotUIManager::UnloadLastUIFile() */

void __thiscall HotUIManager::UnloadLastUIFile(HotUIManager *this)

{
  if (*(HotUIFile **)(this + 0x20) != (HotUIFile *)0x0) {
    UnloadUIFile(this,*(HotUIFile **)(this + 0x20));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::populateWidgetsFromFile(std::string const&, std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&,
   Sexy::WidgetContainer*) */

void __thiscall
HotUIManager::populateWidgetsFromFile
          (HotUIManager *this,string *param_1,map *param_2,WidgetContainer *param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  PVZDB *pPVar5;
  HotUIFile *pHVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  RtObject *pRVar9;
  HotUIWidgetProperties *pHVar10;
  RtDbTable *pRVar11;
  Widget *pWVar12;
  HotUIComponentProperties *pHVar13;
  vector *pvVar14;
  long lVar15;
  long lVar16;
  RtWeakPtrBase *pRVar17;
  long lVar18;
  ulong uVar19;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  WidgetHotSwapData *pWVar20;
  long lVar21;
  HotUIWidget *pHVar22;
  long *plVar23;
  RtId *pRVar24;
  HotUIComponent *pHVar25;
  int extraout_w1;
  string *extraout_x1;
  code *pcVar26;
  ulong uVar27;
  Widget *pWVar28;
  HotUIFile *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  RtId aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar4 = PVZDB::ClaimDynamicTable(pPVar5,true);
  cVar2 = loadUIFile(this,param_1,uVar4);
  if (cVar2 == '\0') {
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pHVar6 = (HotUIFile *)0x0;
    PVZDB::ReleaseDynamicTable(pPVar5,uVar4);
  }
  else {
    pWVar28 = (Widget *)0x0;
    Sexy::Upper((Sexy *)param_1,extraout_x1);
    pHVar6 = ::operator_new(0x58);
    HotUIFile::HotUIFile(pHVar6,asStack_28);
    local_a8 = pHVar6;
    std::string::~string(asStack_28);
    *(HotUIFile **)(this + 0x20) = local_a8;
    std::vector<HotUIFile*,std::allocator<HotUIFile*>>::push_back
              ((vector<HotUIFile*,std::allocator<HotUIFile*>> *)(this + 8),&local_a8);
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    uVar7 = PVZDB::GetTable(pPVar5,0x92);
    uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar8,uVar4);
    while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar3)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)aRStack_40);
      Sexy::RtId::~RtId(aRStack_40);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_78);
      if (bVar3) {
        pRVar9 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
        pHVar10 = Sexy::RtObject::Cast<HotUIWidgetProperties>(pRVar9);
        if (pHVar10 == (HotUIWidgetProperties *)0x0) goto LAB_036472cc;
        pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        pRVar11 = (RtDbTable *)PVZDB::GetTable(pPVar5,uVar4);
        Sexy::RtMixedPtrBase::GetId();
        Sexy::RtDbTable::SetObjectDeletionMode(pRVar11,aRStack_40,2);
        Sexy::RtId::~RtId(aRStack_40);
        Sexy::RtDbTable::AllocId((RtId *)&local_70,uVar7,pHVar10,1,1,0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)&local_70);
        createUIFromPropertySheet
                  (aRStack_40,this,(RtWeakPtr<Sexy::SoundResource> *)&local_58,param_2);
        pWVar12 = (Widget *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        pHVar6 = local_a8;
        HotUIWidget::GetPtr();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)&local_70);
        HotUIFile::AddWidget
                  (pHVar6,pHVar10 + 0x10,(RtWeakPtr<Sexy::SoundResource> *)&local_58,aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        if (pHVar10[0x109] != (HotUIWidgetProperties)0x0) {
          pWVar28 = pWVar12;
        }
        Sexy::RtId::~RtId((RtId *)&local_70);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_78);
        if (bVar3) goto LAB_03647438;
      }
      else {
LAB_036472cc:
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_78);
        if (bVar3) {
LAB_03647438:
          pRVar9 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
          pHVar13 = Sexy::RtObject::Cast<HotUIComponentProperties>(pRVar9);
          if (pHVar13 != (HotUIComponentProperties *)0x0) {
            pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
            pRVar11 = (RtDbTable *)PVZDB::GetTable(pPVar5,uVar4);
            Sexy::RtMixedPtrBase::GetId();
            Sexy::RtDbTable::SetObjectDeletionMode(pRVar11,aRStack_40,2);
            Sexy::RtId::~RtId(aRStack_40);
            Sexy::RtDbTable::AllocId((RtId *)&local_70,uVar7,pHVar13,1,1,0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)&local_70);
            createComponentFromPropertySheet
                      (aRStack_40,this,(RtWeakPtr<Sexy::SoundResource> *)&local_58);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            pHVar6 = local_a8;
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)&local_70);
            HotUIFile::AddComponent(pHVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_58,aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            Sexy::RtId::~RtId((RtId *)&local_70);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
    }
    pvVar14 = (vector *)
              std::
              _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                         *)local_a8);
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::vector
              ((vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> *)&local_70,pvVar14);
    local_90 = FUN_03645cb0(local_70);
    local_88 = FUN_03645d00(local_68);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    if (bVar3) {
      do {
        uVar27 = 0;
        lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 0x10);
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        lVar16 = FUN_036459f4(*(undefined8 *)(lVar16 + 0xb8),*(undefined8 *)(lVar16 + 0xc0));
        if (lVar16 != 0) {
          do {
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            pRVar17 = (RtWeakPtrBase *)FUN_03645a00(*(undefined8 *)(lVar16 + 0xb8),uVar27);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_80,pRVar17);
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
            local_78 = FUN_03645cb0(local_70);
            local_58 = FUN_03645d00(local_68);
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_78,(__normal_iterator *)&local_58)
                  , bVar3) {
              lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
              lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar21 + 0x10));
              if (lVar16 == lVar18) {
                lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
                pRVar24 = (RtId *)FUN_03645a00(*(undefined8 *)(lVar16 + 0xb8),uVar27);
                Sexy::RtMixedPtrBase::GetId();
                Sexy::RtId::operator=(pRVar24,aRStack_40);
                Sexy::RtId::~RtId(aRStack_40);
                plVar23 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 8));
                pcVar26 = *(code **)(*plVar23 + 0x60);
                uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar21 + 8));
                (*pcVar26)(plVar23,uVar7);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
                goto LAB_0364763c;
              }
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&local_78);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
LAB_0364763c:
            uVar27 = uVar27 + 1;
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            uVar19 = FUN_036459f4(*(undefined8 *)(lVar16 + 0xb8),*(undefined8 *)(lVar16 + 0xc0));
          } while (uVar27 < uVar19);
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_90);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88)
        ;
      } while (bVar3);
    }
    pvVar14 = (vector *)
              Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)local_a8);
    std::vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>>::vector
              ((vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>> *)&local_58,
               pvVar14);
    local_98 = FUN_0364601c(local_58);
    local_90 = FUN_0364606c(local_50);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90);
    if (bVar3) {
      do {
        uVar27 = 0;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        pRVar1 = this_00 + 8;
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        lVar15 = FUN_036459f4(*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(lVar15 + 0x20));
        if (lVar15 != 0) {
          do {
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            pRVar17 = (RtWeakPtrBase *)FUN_03645a00(*(undefined8 *)(lVar15 + 0x18),uVar27);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_88,pRVar17);
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
            local_80 = FUN_03645cb0(local_70);
            local_78 = FUN_03645d00(local_68);
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78)
                  , bVar3) {
              lVar16 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
              lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar16 + 0x10));
              if (lVar15 == lVar21) {
                lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
                pRVar24 = (RtId *)FUN_03645a00(*(undefined8 *)(lVar15 + 0x18),uVar27);
                Sexy::RtMixedPtrBase::GetId();
                Sexy::RtId::operator=(pRVar24,aRStack_40);
                Sexy::RtId::~RtId(aRStack_40);
                pHVar25 = (HotUIComponent *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,
                           (RtWeakPtrBase *)(lVar16 + 8));
                HotUIComponent::AddTarget(pHVar25,aRStack_40);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
                goto LAB_03647790;
              }
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&local_80);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
LAB_03647790:
            uVar27 = uVar27 + 1;
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            uVar19 = FUN_036459f4(*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(lVar15 + 0x20));
          } while (uVar27 < uVar19);
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_98);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90)
        ;
      } while (bVar3);
    }
    local_a0 = FUN_03645cb0(local_70);
    local_98 = FUN_03645d00(local_68);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
    if (bVar3) {
      do {
        lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 0x10);
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)(lVar16 + 0xd8));
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        local_88 = FUN_03645cb0(local_70);
        local_80 = FUN_03645d00(local_68);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80),
              bVar3) {
          pWVar20 = (WidgetHotSwapData *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
          WidgetHotSwapData::WidgetHotSwapData((WidgetHotSwapData *)aRStack_40,pWVar20);
          lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          if (lVar16 == lVar21) {
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            Sexy::RtMixedPtrBase::GetId();
            Sexy::RtId::operator=((RtId *)(lVar16 + 0xd8),(RtId *)&local_78);
            Sexy::RtId::~RtId((RtId *)&local_78);
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(lVar16 + 0x100),aRStack_38);
            WidgetHotSwapData::~WidgetHotSwapData((WidgetHotSwapData *)aRStack_40);
            break;
          }
          WidgetHotSwapData::~WidgetHotSwapData((WidgetHotSwapData *)aRStack_40);
          std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                    ((move_iterator<Sexy::LeaderboardEntry*> *)&local_88);
        }
        pHVar22 = (HotUIWidget *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 8));
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)(lVar15 + 0x100));
        HotUIWidget::SetAnchorParent(pHVar22,(WidgetHotSwapData *)aRStack_40,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_a0);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98)
        ;
      } while (bVar3);
    }
    HotUIFile::AddWidgetToApp(local_a8,pWVar28,param_3);
    lVar15 = FUN_03645a08(local_70,local_68);
    if (lVar15 != 0) {
      lVar15 = FUN_03645b0c(local_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 8));
      HotUIWidget::GetPtr();
      HotUIHelpers::LayoutAndPositionWidget((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::ReleaseDynamicTable(pPVar5,uVar4);
    pHVar6 = local_a8;
    std::vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>>::~vector
              ((vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>> *)&local_58);
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::~vector
              ((vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> *)&local_70);
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pHVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::LoadUIPrefab(std::string const&, std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&,
   Sexy::WidgetContainer*) */

void HotUIManager::LoadUIPrefab(string *param_1,map *param_2,WidgetContainer *param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  PVZDB *pPVar5;
  HotUIFile *pHVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  RtObject *pRVar9;
  HotUIWidgetProperties *pHVar10;
  RtDbTable *pRVar11;
  Widget *pWVar12;
  HotUIComponentProperties *pHVar13;
  vector *pvVar14;
  long lVar15;
  long lVar16;
  RtWeakPtrBase *pRVar17;
  long lVar18;
  ulong uVar19;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  WidgetHotSwapData *pWVar20;
  long lVar21;
  HotUIWidget *pHVar22;
  long *plVar23;
  RtId *pRVar24;
  HotUIComponent *pHVar25;
  int extraout_w1;
  string *extraout_x1;
  WidgetContainer *in_x3;
  code *pcVar26;
  ulong uVar27;
  Widget *pWVar28;
  HotUIFile *pHStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  RtId aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar4 = PVZDB::ClaimDynamicTable(pPVar5,true);
  cVar2 = loadUIFile((HotUIManager *)param_1,param_2,uVar4);
  if (cVar2 == '\0') {
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pHVar6 = (HotUIFile *)0x0;
    PVZDB::ReleaseDynamicTable(pPVar5,uVar4);
  }
  else {
    pWVar28 = (Widget *)0x0;
    Sexy::Upper((Sexy *)param_2,extraout_x1);
    pHVar6 = ::operator_new(0x58);
    HotUIFile::HotUIFile(pHVar6,asStack_28);
    pHStack_a8 = pHVar6;
    std::string::~string(asStack_28);
    *(HotUIFile **)(param_1 + 0x20) = pHStack_a8;
    std::vector<HotUIFile*,std::allocator<HotUIFile*>>::push_back
              ((vector<HotUIFile*,std::allocator<HotUIFile*>> *)(param_1 + 8),&pHStack_a8);
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    uVar7 = PVZDB::GetTable(pPVar5,0x92);
    uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar8,uVar4);
    while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar3)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&uStack_78,(RtWeakPtrBase *)aRStack_40);
      Sexy::RtId::~RtId(aRStack_40);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&uStack_78);
      if (bVar3) {
        pRVar9 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_78);
        pHVar10 = Sexy::RtObject::Cast<HotUIWidgetProperties>(pRVar9);
        if (pHVar10 == (HotUIWidgetProperties *)0x0) goto LAB_036472cc;
        pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        pRVar11 = (RtDbTable *)PVZDB::GetTable(pPVar5,uVar4);
        Sexy::RtMixedPtrBase::GetId();
        Sexy::RtDbTable::SetObjectDeletionMode(pRVar11,aRStack_40,2);
        Sexy::RtId::~RtId(aRStack_40);
        Sexy::RtDbTable::AllocId((RtId *)&uStack_70,uVar7,pHVar10,1,1,0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&uStack_58,(RtWeakPtrBase *)&uStack_70);
        createUIFromPropertySheet
                  (aRStack_40,param_1,(RtWeakPtr<Sexy::SoundResource> *)&uStack_58,param_3);
        pWVar12 = (Widget *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_58)
        ;
        pHVar6 = pHStack_a8;
        HotUIWidget::GetPtr();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)&uStack_70);
        HotUIFile::AddWidget
                  (pHVar6,pHVar10 + 0x10,(RtWeakPtr<Sexy::SoundResource> *)&uStack_58,aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_58)
        ;
        if (pHVar10[0x109] != (HotUIWidgetProperties)0x0) {
          pWVar28 = pWVar12;
        }
        Sexy::RtId::~RtId((RtId *)&uStack_70);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&uStack_78);
        if (bVar3) goto LAB_03647438;
      }
      else {
LAB_036472cc:
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&uStack_78);
        if (bVar3) {
LAB_03647438:
          pRVar9 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_78);
          pHVar13 = Sexy::RtObject::Cast<HotUIComponentProperties>(pRVar9);
          if (pHVar13 != (HotUIComponentProperties *)0x0) {
            pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
            pRVar11 = (RtDbTable *)PVZDB::GetTable(pPVar5,uVar4);
            Sexy::RtMixedPtrBase::GetId();
            Sexy::RtDbTable::SetObjectDeletionMode(pRVar11,aRStack_40,2);
            Sexy::RtId::~RtId(aRStack_40);
            Sexy::RtDbTable::AllocId((RtId *)&uStack_70,uVar7,pHVar13,1,1,0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&uStack_58,(RtWeakPtrBase *)&uStack_70);
            createComponentFromPropertySheet
                      (aRStack_40,param_1,(RtWeakPtr<Sexy::SoundResource> *)&uStack_58);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_58);
            pHVar6 = pHStack_a8;
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)&uStack_70);
            HotUIFile::AddComponent(pHVar6,(RtWeakPtr<Sexy::SoundResource> *)&uStack_58,aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_58);
            Sexy::RtId::~RtId((RtId *)&uStack_70);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_78);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
    }
    pvVar14 = (vector *)
              std::
              _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                         *)pHStack_a8);
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::vector
              ((vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> *)&uStack_70,pvVar14);
    uStack_90 = FUN_03645cb0(uStack_70);
    uStack_88 = FUN_03645d00(uStack_68);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_90,(__normal_iterator *)&uStack_88);
    if (bVar3) {
      do {
        uVar27 = 0;
        lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_90);
        pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 0x10);
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        lVar16 = FUN_036459f4(*(undefined8 *)(lVar16 + 0xb8),*(undefined8 *)(lVar16 + 0xc0));
        if (lVar16 != 0) {
          do {
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            pRVar17 = (RtWeakPtrBase *)FUN_03645a00(*(undefined8 *)(lVar16 + 0xb8),uVar27);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&uStack_80,pRVar17);
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_80);
            uStack_78 = FUN_03645cb0(uStack_70);
            uStack_58 = FUN_03645d00(uStack_68);
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&uStack_78,
                                      (__normal_iterator *)&uStack_58), bVar3) {
              lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_78);
              lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar21 + 0x10));
              if (lVar16 == lVar18) {
                lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
                pRVar24 = (RtId *)FUN_03645a00(*(undefined8 *)(lVar16 + 0xb8),uVar27);
                Sexy::RtMixedPtrBase::GetId();
                Sexy::RtId::operator=(pRVar24,aRStack_40);
                Sexy::RtId::~RtId(aRStack_40);
                plVar23 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 8));
                pcVar26 = *(code **)(*plVar23 + 0x60);
                uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar21 + 8));
                (*pcVar26)(plVar23,uVar7);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_80);
                goto LAB_0364763c;
              }
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_78);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_80);
LAB_0364763c:
            uVar27 = uVar27 + 1;
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            uVar19 = FUN_036459f4(*(undefined8 *)(lVar16 + 0xb8),*(undefined8 *)(lVar16 + 0xc0));
          } while (uVar27 < uVar19);
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_90);
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&uStack_90,(__normal_iterator *)&uStack_88);
      } while (bVar3);
    }
    pvVar14 = (vector *)
              Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)pHStack_a8);
    std::vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>>::vector
              ((vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>> *)&uStack_58,
               pvVar14);
    uStack_98 = FUN_0364601c(uStack_58);
    uStack_90 = FUN_0364606c(uStack_50);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_98,(__normal_iterator *)&uStack_90);
    if (bVar3) {
      do {
        uVar27 = 0;
        this = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_98);
        pRVar1 = this + 8;
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        lVar15 = FUN_036459f4(*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(lVar15 + 0x20));
        if (lVar15 != 0) {
          do {
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            pRVar17 = (RtWeakPtrBase *)FUN_03645a00(*(undefined8 *)(lVar15 + 0x18),uVar27);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&uStack_88,pRVar17);
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88);
            uStack_80 = FUN_03645cb0(uStack_70);
            uStack_78 = FUN_03645d00(uStack_68);
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&uStack_80,
                                      (__normal_iterator *)&uStack_78), bVar3) {
              lVar16 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_80);
              lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar16 + 0x10));
              if (lVar15 == lVar21) {
                lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
                pRVar24 = (RtId *)FUN_03645a00(*(undefined8 *)(lVar15 + 0x18),uVar27);
                Sexy::RtMixedPtrBase::GetId();
                Sexy::RtId::operator=(pRVar24,aRStack_40);
                Sexy::RtId::~RtId(aRStack_40);
                pHVar25 = (HotUIComponent *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,
                           (RtWeakPtrBase *)(lVar16 + 8));
                HotUIComponent::AddTarget(pHVar25,aRStack_40);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88);
                goto LAB_03647790;
              }
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_80);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_88);
LAB_03647790:
            uVar27 = uVar27 + 1;
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            uVar19 = FUN_036459f4(*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(lVar15 + 0x20));
          } while (uVar27 < uVar19);
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&uStack_98);
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&uStack_98,(__normal_iterator *)&uStack_90);
      } while (bVar3);
    }
    uStack_a0 = FUN_03645cb0(uStack_70);
    uStack_98 = FUN_03645d00(uStack_68);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_a0,(__normal_iterator *)&uStack_98);
    if (bVar3) {
      do {
        lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_a0);
        pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 0x10);
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&uStack_90,(RtWeakPtrBase *)(lVar16 + 0xd8));
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_90);
        uStack_88 = FUN_03645cb0(uStack_70);
        uStack_80 = FUN_03645d00(uStack_68);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&uStack_88,(__normal_iterator *)&uStack_80),
              bVar3) {
          pWVar20 = (WidgetHotSwapData *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_88);
          WidgetHotSwapData::WidgetHotSwapData((WidgetHotSwapData *)aRStack_40,pWVar20);
          lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          if (lVar16 == lVar21) {
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            Sexy::RtMixedPtrBase::GetId();
            Sexy::RtId::operator=((RtId *)(lVar16 + 0xd8),(RtId *)&uStack_78);
            Sexy::RtId::~RtId((RtId *)&uStack_78);
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(lVar16 + 0x100),aRStack_38);
            WidgetHotSwapData::~WidgetHotSwapData((WidgetHotSwapData *)aRStack_40);
            break;
          }
          WidgetHotSwapData::~WidgetHotSwapData((WidgetHotSwapData *)aRStack_40);
          std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                    ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_88);
        }
        pHVar22 = (HotUIWidget *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 8));
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)(lVar15 + 0x100));
        HotUIWidget::SetAnchorParent(pHVar22,(WidgetHotSwapData *)aRStack_40,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_90)
        ;
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_a0);
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&uStack_a0,(__normal_iterator *)&uStack_98);
      } while (bVar3);
    }
    HotUIFile::AddWidgetToApp(pHStack_a8,pWVar28,in_x3);
    lVar15 = FUN_03645a08(uStack_70,uStack_68);
    if (lVar15 != 0) {
      lVar15 = FUN_03645b0c(uStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar15 + 8));
      HotUIWidget::GetPtr();
      HotUIHelpers::LayoutAndPositionWidget((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::ReleaseDynamicTable(pPVar5,uVar4);
    pHVar6 = pHStack_a8;
    std::vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>>::~vector
              ((vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>> *)&uStack_58);
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::~vector
              ((vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> *)&uStack_70);
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pHVar6);
}


/* HotUIManager::LoadUIFile(std::string const&, std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall HotUIManager::LoadUIFile(HotUIManager *this,string *param_1,map *param_2)

{
  LoadUIPrefab((string *)this,(map *)param_1,(WidgetContainer *)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIManager::LoadUIFile(std::string const&) */

void __thiscall HotUIManager::LoadUIFile(HotUIManager *this,string *param_1)

{
  undefined8 uVar1;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar1 = LoadUIFile(this,param_1,(map *)amStack_38);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

