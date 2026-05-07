// Class: AdaptorSeedPacketBoard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::StaticClassInit() */

void AdaptorSeedPacketBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorSeedPacketBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_033c01bc,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketBoard::StaticGetClass() */

long * AdaptorSeedPacketBoard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorSeedPacketBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSeedPacketBoard::GetClass() const */

long * AdaptorSeedPacketBoard::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorSeedPacketBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSeedPacketBoard::SelectEntry(int) */

void __thiscall AdaptorSeedPacketBoard::SelectEntry(AdaptorSeedPacketBoard *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x128);
  uVar1 = FUN_033bd3c0(uVar3,*(undefined8 *)(this + 0x130));
  if ((ulong)(long)param_1 < uVar1) {
    puVar2 = (undefined8 *)FUN_033bd3cc(uVar3);
    (**(code **)(*(long *)*puVar2 + 0x358))((long *)*puVar2,1,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::ShowProgressBar(bool) */

void __thiscall AdaptorSeedPacketBoard::ShowProgressBar(AdaptorSeedPacketBoard *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x128));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    AdaptorSeedPacketEntry::ShowProgressBar((AdaptorSeedPacketEntry *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketBoard::onLinkToUIViewCreated() */

void __thiscall AdaptorSeedPacketBoard::onLinkToUIViewCreated(AdaptorSeedPacketBoard *this)

{
  (**(code **)(*(long *)this + 0x350))();
  ShowProgressBar(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::UnloadEntries() */

void __thiscall AdaptorSeedPacketBoard::UnloadEntries(AdaptorSeedPacketBoard *this)

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
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"PlantSimpleLevelUpInnerScrollArea");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
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
  std::vector<AdaptorSeedPacketEntry*,std::allocator<AdaptorSeedPacketEntry*>>::clear
            ((vector<AdaptorSeedPacketEntry*,std::allocator<AdaptorSeedPacketEntry*>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::RepositionChildren() */

void __thiscall AdaptorSeedPacketBoard::RepositionChildren(AdaptorSeedPacketBoard *this)

{
  HotUIFile *this_00;
  HotUIVerticalList *this_01;
  HotUISeedPacketList *pHVar1;
  ScrollWidget *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"PlantSimpleLevelUpInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  nop();
  HotUIVerticalList::RepositionChildrenAndResizeCheckVisible(this_01);
  std::string::string(asStack_10,"PlantSimpleLevelUpScrollArea");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pHVar1 != (HotUISeedPacketList *)0x0) {
    this_02 = (ScrollWidget *)FUN_033bd3a4(*(undefined8 *)(pHVar1 + 0x218));
    Sexy::ScrollWidget::ClientSizeChanged(this_02);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketBoard::TestFilter() */

void __thiscall AdaptorSeedPacketBoard::TestFilter(AdaptorSeedPacketBoard *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x128);
  uVar3 = 0;
  uVar1 = FUN_033bd3c0(uVar5,*(undefined8 *)(this + 0x130));
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if ((uVar3 & 1) == 0) {
        puVar2 = (undefined8 *)FUN_033bd3cc(uVar5,uVar3);
        (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,uVar4);
        uVar5 = *(undefined8 *)(this + 0x128);
        uVar1 = FUN_033bd3c0(uVar5,*(undefined8 *)(this + 0x130));
      }
      uVar3 = uVar3 + 1;
      uVar4 = (uint)uVar3 & 1;
    } while (uVar3 < uVar1);
  }
  RepositionChildren(this);
  return;
}


/* AdaptorSeedPacketBoard::AdaptorSeedPacketBoard() */

void __thiscall AdaptorSeedPacketBoard::AdaptorSeedPacketBoard(AdaptorSeedPacketBoard *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06618190;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066184f8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06618540;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  this[0x140] = (AdaptorSeedPacketBoard)0x0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x148));
  return;
}


/* AdaptorSeedPacketBoard::StaticNew() */

AdaptorSeedPacketBoard * AdaptorSeedPacketBoard::StaticNew(void)

{
  AdaptorSeedPacketBoard *this;
  
  this = ::operator_new(0x160);
  AdaptorSeedPacketBoard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::GetEntryConfigById(int) */

void __thiscall AdaptorSeedPacketBoard::GetEntryConfigById(AdaptorSeedPacketBoard *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_033c6634(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (local_8 == ___stack_chk_guard) {
      Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)*puVar4);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)&DAT_06a9dbf0;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::ReplaceEntryConfigById(int, AdaptorSeedPacketEntryConfig const&) */

void __thiscall
AdaptorSeedPacketBoard::ReplaceEntryConfigById
          (AdaptorSeedPacketBoard *this,int param_1,AdaptorSeedPacketEntryConfig *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_033c6960(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    AdaptorSeedPacketEntry::SetConfig((AdaptorSeedPacketEntry *)*puVar4,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::SelectEntryById(int, bool, bool) */

void __thiscall
AdaptorSeedPacketBoard::SelectEntryById
          (AdaptorSeedPacketBoard *this,int param_1,bool param_2,bool param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_033c6c28(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar4 + 0x358))((long *)*puVar4,param_2,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::GetSelectedEntry() */

void __thiscall AdaptorSeedPacketBoard::GetSelectedEntry(AdaptorSeedPacketBoard *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_033c6e80(uVar2,uVar3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = *puVar4;
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::LocateSelectedEntry() */

void __thiscall AdaptorSeedPacketBoard::LocateSelectedEntry(AdaptorSeedPacketBoard *this)

{
  int iVar1;
  HotUIAdaptor *this_00;
  long *plVar2;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar3;
  ScrollWidget *this_02;
  string asStack_20 [8];
  TRect aTStack_18 [4];
  int local_14;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIAdaptor *)GetSelectedEntry(this);
  if (this_00 != (HotUIAdaptor *)0x0) {
    plVar2 = (long *)HotUIAdaptor::GetEntryPointWidget(this_00);
    (**(code **)(*(long *)plVar2[4] + 0xb0))((long *)plVar2[4],plVar2);
    (**(code **)(*plVar2 + 0x48))(aTStack_18,plVar2);
    iVar1 = FUN_033be204(10);
    local_14 = local_14 - iVar1;
    iVar1 = FUN_033be204(0x14);
    local_c = local_c + iVar1;
    this_01 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"PlantSimpleLevelUpScrollArea");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_20);
    std::string::~string(asStack_20);
    nop();
    if (pHVar3 != (HotUISeedPacketList *)0x0) {
      this_02 = (ScrollWidget *)FUN_033bd3a4(*(undefined8 *)(pHVar3 + 0x218));
      Sexy::ScrollWidget::ScrollRectIntoView(this_02,aTStack_18,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketBoard::IsEmpty() */

void __thiscall AdaptorSeedPacketBoard::IsEmpty(AdaptorSeedPacketBoard *this)

{
  std::vector<AdaptorSeedPacketEntry*,std::allocator<AdaptorSeedPacketEntry*>>::empty
            ((vector<AdaptorSeedPacketEntry*,std::allocator<AdaptorSeedPacketEntry*>> *)
             (this + 0x128));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::SortChildren() */

void __thiscall AdaptorSeedPacketBoard::SortChildren(AdaptorSeedPacketBoard *this)

{
  HotUIFile *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"PlantSimpleLevelUpInnerScrollArea");
  lVar1 = HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_033c8a10(lVar1 + 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketBoard::~AdaptorSeedPacketBoard() */

void __thiscall AdaptorSeedPacketBoard::~AdaptorSeedPacketBoard(AdaptorSeedPacketBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_06618190;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066184f8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06618540;
  UnloadEntries(this);
  AdaptorSeedPacketConfig::~AdaptorSeedPacketConfig((AdaptorSeedPacketConfig *)(this + 0x148));
  std::vector<AdaptorSeedPacketEntry*,std::allocator<AdaptorSeedPacketEntry*>>::~vector
            ((vector<AdaptorSeedPacketEntry*,std::allocator<AdaptorSeedPacketEntry*>> *)
             (this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorSeedPacketBoard::~AdaptorSeedPacketBoard() */

void __thiscall AdaptorSeedPacketBoard::~AdaptorSeedPacketBoard(AdaptorSeedPacketBoard *this)

{
  ~AdaptorSeedPacketBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::onLoadUIView() */

void __thiscall AdaptorSeedPacketBoard::onLoadUIView(AdaptorSeedPacketBoard *this)

{
  undefined8 uVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  string asStack_48 [8];
  map amStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_48);
  Sexy::StrFormat("SeedPacketBoard_%s",amStack_40,uVar1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIPrefab(psVar2,amStack_40,(WidgetContainer *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  std::string::~string((string *)amStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketBoard::Filter(std::vector<NewPlantUISortType, std::allocator<NewPlantUISortType>
   > const&) */

void __thiscall AdaptorSeedPacketBoard::Filter(AdaptorSeedPacketBoard *this,vector *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x128);
    uVar2 = FUN_033bd3c0(uVar4,*(undefined8 *)(this + 0x130));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_033bd3cc(uVar4,uVar3);
    AdaptorSeedPacketEntry::Filter((AdaptorSeedPacketEntry *)*puVar1,param_1);
    uVar3 = uVar3 + 1;
  }
  RepositionChildren(this);
  return;
}


/* AdaptorSeedPacketBoard::SetConfig(AdaptorSeedPacketConfig const&) */

void __thiscall
AdaptorSeedPacketBoard::SetConfig(AdaptorSeedPacketBoard *this,AdaptorSeedPacketConfig *param_1)

{
  AdaptorSeedPacketConfig::operator=((AdaptorSeedPacketConfig *)(this + 0x148),param_1);
  (**(code **)(*(long *)this + 0x350))(this);
  return;
}


/* AdaptorSeedPacketBoard::Configure(Sexy::WidgetContainer*, AdaptorSeedPacketConfig const&, bool)
    */

void __thiscall
AdaptorSeedPacketBoard::Configure
          (AdaptorSeedPacketBoard *this,WidgetContainer *param_1,AdaptorSeedPacketConfig *param_2,
          bool param_3)

{
  *(WidgetContainer **)(this + 0x120) = param_1;
  AdaptorSeedPacketConfig::operator=((AdaptorSeedPacketConfig *)(this + 0x148),param_2);
  this[0x140] = (AdaptorSeedPacketBoard)param_3;
  return;
}


/* AdaptorSeedPacketBoard::Sort(NewPlantUISortValue, bool) */

void __thiscall
AdaptorSeedPacketBoard::Sort(AdaptorSeedPacketBoard *this,undefined4 param_2,undefined1 param_3)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  undefined1 local_8;
  undefined7 uStack_7;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  uVar1 = ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x128));
  uVar3 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x128));
  local_40 = CONCAT44(uStack_14,param_2);
  local_30 = CONCAT71(uStack_7,param_3);
  uStack_38 = uVar1;
  local_18 = param_2;
  local_10 = uVar1;
  local_8 = param_3;
  FUN_033ce910(uVar2,uVar3,&local_40);
  uVar6 = 0;
  while( true ) {
    uVar1 = *(undefined8 *)(this + 0x128);
    uVar5 = FUN_033bd3c0(uVar1,*(undefined8 *)(this + 0x130));
    if (uVar5 <= uVar6) break;
    puVar4 = (undefined8 *)FUN_033bd3cc(uVar1,uVar6);
    AdaptorSeedPacketEntry::Sort((AdaptorSeedPacketEntry *)*puVar4,(int)uVar6);
    uVar6 = uVar6 + 1;
  }
  SortChildren(this);
  RepositionChildren(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketBoard::fillEntries() */

void __thiscall AdaptorSeedPacketBoard::fillEntries(AdaptorSeedPacketBoard *this)

{
  HotUIFile *this_00;
  WidgetContainer *extraout_x0;
  AdaptorSeedPacketEntryConfig *pAVar1;
  AdaptorSeedPacketEntry *this_01;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  AdaptorSeedPacketEntry *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"PlantSimpleLevelUpInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  nop();
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x148);
    uVar2 = FUN_033bd3d4(uVar4,*(undefined8 *)(this + 0x150));
    if (uVar2 <= uVar3) break;
    pAVar1 = (AdaptorSeedPacketEntryConfig *)FUN_033bd3f4(uVar4,uVar3);
    this_01 = ::operator_new(0x170);
    AdaptorSeedPacketEntry::AdaptorSeedPacketEntry(this_01);
    local_10 = this_01;
    AdaptorSeedPacketEntry::Configure(this_01,extraout_x0,pAVar1);
    FUN_033bd380(local_10 + 0x168,this[0x140]);
    std::vector<AdaptorSeedPacketEntry*,std::allocator<AdaptorSeedPacketEntry*>>::push_back
              ((vector<AdaptorSeedPacketEntry*,std::allocator<AdaptorSeedPacketEntry*>> *)
               (this + 0x128),&local_10);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_10);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

