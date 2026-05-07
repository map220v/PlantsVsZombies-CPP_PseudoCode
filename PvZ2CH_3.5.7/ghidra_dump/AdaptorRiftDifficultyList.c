// Class: AdaptorRiftDifficultyList


/* AdaptorRiftDifficultyList::ScrollTargetReached(Sexy::ScrollWidget*) */

void AdaptorRiftDifficultyList::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorRiftDifficultyList::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
AdaptorRiftDifficultyList::ScrollTargetReached
          (AdaptorRiftDifficultyList *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x120));
  return;
}


/* AdaptorRiftDifficultyList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AdaptorRiftDifficultyList::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorRiftDifficultyList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
AdaptorRiftDifficultyList::ScrollTargetInterrupted
          (AdaptorRiftDifficultyList *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x120));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyList::StaticClassInit() */

void AdaptorRiftDifficultyList::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftDifficultyList");
    (*pcVar2)(plVar1,asStack_10,FUN_036d8470,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftDifficultyList::StaticGetClass() */

long * AdaptorRiftDifficultyList::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftDifficultyList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftDifficultyList::GetClass() const */

long * AdaptorRiftDifficultyList::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftDifficultyList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftDifficultyList::Configure(Sexy::WidgetContainer*, std::string const&, MapEventSubType,
   std::string) */

void __thiscall
AdaptorRiftDifficultyList::Configure
          (AdaptorRiftDifficultyList *this,undefined8 param_1,undefined8 param_2,undefined4 param_4,
          undefined8 param_5)

{
  *(undefined8 *)(this + 0x128) = param_1;
  thunk_FUN_05475e00(this + 0x130,param_2);
  *(undefined4 *)(this + 0x138) = param_4;
  thunk_FUN_05475e00(this + 0x140,param_5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyList::removeDifficultyWidgets() */

void __thiscall AdaptorRiftDifficultyList::removeDifficultyWidgets(AdaptorRiftDifficultyList *this)

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
             *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_036d829c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"DifficultyInnerScrollArea");
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
  std::vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>::
  clear((vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>> *
        )this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyList::RefreshScrollArrows() */

void __thiscall AdaptorRiftDifficultyList::RefreshScrollArrows(AdaptorRiftDifficultyList *this)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  ScrollWidget *this_01;
  long *plVar3;
  code *pcVar4;
  float local_28;
  float local_20;
  float local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036d829c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DifficultyScrollArea");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (ScrollWidget *)FUN_036d82a8(*(undefined8 *)(pHVar2 + 0x218));
  cVar1 = Sexy::ScrollWidget::GetNeedsScroller(this_01);
  if (cVar1 != '\0') {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    Sexy::ScrollWidget::GetScrollMax();
    std::string::string(asStack_10,"LeftScrollArrow");
    plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    (**(code **)(*plVar3 + 0x158))(plVar3,local_28 < local_18);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"RightScrollArrow");
    plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    pcVar4 = *(code **)(*plVar3 + 0x158);
  }
  else {
    std::string::string(asStack_10,"LeftScrollArrow");
    plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"RightScrollArrow");
    plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    pcVar4 = *(code **)(*plVar3 + 0x158);
  }
  (*pcVar4)(plVar3,cVar1 != '\0' && local_20 < local_28);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyList::Update() */

void __thiscall AdaptorRiftDifficultyList::Update(AdaptorRiftDifficultyList *this)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  ScrollWidget *this_01;
  long *plVar3;
  code *pcVar4;
  float fStack_28;
  float fStack_20;
  float fStack_18;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036d829c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DifficultyScrollArea");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (ScrollWidget *)FUN_036d82a8(*(undefined8 *)(pHVar2 + 0x218));
  cVar1 = Sexy::ScrollWidget::GetNeedsScroller(this_01);
  if (cVar1 != '\0') {
    Sexy::ScrollWidget::GetScrollOffset();
    Sexy::ScrollWidget::GetScrollMin();
    Sexy::ScrollWidget::GetScrollMax();
    std::string::string(asStack_10,"LeftScrollArrow");
    plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    (**(code **)(*plVar3 + 0x158))(plVar3,fStack_28 < fStack_18);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"RightScrollArrow");
    plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    pcVar4 = *(code **)(*plVar3 + 0x158);
  }
  else {
    std::string::string(asStack_10,"LeftScrollArrow");
    plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"RightScrollArrow");
    plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    pcVar4 = *(code **)(*plVar3 + 0x158);
  }
  (*pcVar4)(plVar3,cVar1 != '\0' && fStack_20 < fStack_28);
  std::string::~string(asStack_10);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftDifficultyList::AdaptorRiftDifficultyList() */

void __thiscall
AdaptorRiftDifficultyList::AdaptorRiftDifficultyList(AdaptorRiftDifficultyList *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_06684050;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066843c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684408;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorRiftDifficultyList_06684428;
  Set8BytesTo0(this + 0x130);
  Set8BytesTo0(this + 0x140);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  return;
}


/* AdaptorRiftDifficultyList::StaticNew() */

AdaptorRiftDifficultyList * AdaptorRiftDifficultyList::StaticNew(void)

{
  AdaptorRiftDifficultyList *this;
  
  this = ::operator_new(0x160);
  AdaptorRiftDifficultyList(this);
  return this;
}


/* AdaptorRiftDifficultyList::~AdaptorRiftDifficultyList() */

void __thiscall
AdaptorRiftDifficultyList::~AdaptorRiftDifficultyList(AdaptorRiftDifficultyList *this)

{
  *(undefined ***)this = &PTR_GetClass_06684050;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066843c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684408;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorRiftDifficultyList_06684428;
  removeDifficultyWidgets(this);
  std::vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>::
  ~vector((vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
           *)(this + 0x148));
  std::string::~string((string *)(this + 0x140));
  std::string::~string((string *)(this + 0x130));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* non-virtual thunk to AdaptorRiftDifficultyList::~AdaptorRiftDifficultyList() */

void __thiscall
AdaptorRiftDifficultyList::~AdaptorRiftDifficultyList(AdaptorRiftDifficultyList *this)

{
  ~AdaptorRiftDifficultyList(this + -0x120);
  return;
}


/* AdaptorRiftDifficultyList::~AdaptorRiftDifficultyList() */

void __thiscall
AdaptorRiftDifficultyList::~AdaptorRiftDifficultyList(AdaptorRiftDifficultyList *this)

{
  ~AdaptorRiftDifficultyList(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AdaptorRiftDifficultyList::~AdaptorRiftDifficultyList() */

void __thiscall
AdaptorRiftDifficultyList::~AdaptorRiftDifficultyList(AdaptorRiftDifficultyList *this)

{
  ~AdaptorRiftDifficultyList(this + -0x120);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyList::onLoadUIView() */

void __thiscall AdaptorRiftDifficultyList::onLoadUIView(AdaptorRiftDifficultyList *this)

{
  string *psVar1;
  HotUIFile *pHVar2;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar1 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar2 = (HotUIFile *)
           HotUIManager::LoadUIPrefab(psVar1,(map *)(this + 0x140),(WidgetContainer *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
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


/* AdaptorRiftDifficultyList::sortDifficultyEntries(RiftLevelDifficultyData&) */

void __thiscall
AdaptorRiftDifficultyList::sortDifficultyEntries
          (AdaptorRiftDifficultyList *this,RiftLevelDifficultyData *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(this + 0x138);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  FUN_036d9cf8(uVar2,uVar3,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyList::RefreshDifficultyView() */

void __thiscall AdaptorRiftDifficultyList::RefreshDifficultyView(AdaptorRiftDifficultyList *this)

{
  int iVar1;
  HotUIFile *this_00;
  undefined8 extraout_x0;
  ulong uVar2;
  undefined8 uVar3;
  RtWeakPtrBase *pRVar4;
  LevelModuleDifficultyProps *pLVar5;
  AdaptorRiftLevelDifficultyEntry *pAVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  AdaptorRiftLevelDifficultyEntry *local_30;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  removeDifficultyWidgets(this);
  this_00 = (HotUIFile *)FUN_036d829c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_20,"DifficultyInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  nop();
  FUN_05475d88(asStack_28,this + 0x130);
  RiftUtils::GetLevelDifficultyDataForLevelNode((RiftUtils *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  sortDifficultyEntries(this,(RiftLevelDifficultyData *)&local_20);
  uVar3 = local_20;
  uVar2 = FUN_036d82ac(local_20,local_18);
  if (uVar2 < 0x32) {
    iVar9 = (int)uVar2;
    if (iVar9 == 0) goto LAB_036da134;
  }
  else {
    iVar9 = 0x32;
  }
  lVar8 = 0;
  while( true ) {
    pRVar4 = (RtWeakPtrBase *)FUN_036d82b8(uVar3,lVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,pRVar4);
    pLVar5 = (LevelModuleDifficultyProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    iVar1 = LevelModuleDifficultyProps::GetDisplayPriority(pLVar5,*(undefined4 *)(this + 0x138));
    if (iVar1 == 0) {
      pAVar6 = ::operator_new(0x130);
      AdaptorRiftLevelDifficultyEntry::AdaptorRiftLevelDifficultyEntry(pAVar6);
      local_30 = pAVar6;
      lVar7 = FUN_036d82b8(local_20,lVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)(lVar7 + 8));
      AdaptorRiftLevelDifficultyEntry::Configure(pAVar6,extraout_x0,asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
      std::vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
      ::push_back((vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
                   *)(this + 0x148),&local_30);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_30);
      (**(code **)(*(long *)local_30 + 0x188))(local_30,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      uVar3 = local_20;
    }
    else {
      pAVar6 = ::operator_new(0x130);
      AdaptorRiftLevelDifficultyEntry::AdaptorRiftLevelDifficultyEntry(pAVar6);
      local_30 = pAVar6;
      lVar7 = FUN_036d82b8(local_20,lVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)(lVar7 + 8));
      AdaptorRiftLevelDifficultyEntry::Configure(pAVar6,extraout_x0,asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
      std::vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
      ::push_back((vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
                   *)(this + 0x148),&local_30);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      uVar3 = local_20;
    }
    if (iVar9 <= (int)lVar8 + 1) break;
    lVar8 = lVar8 + 1;
    local_20 = uVar3;
  }
LAB_036da134:
  RiftLevelDifficultyData::~RiftLevelDifficultyData((RiftLevelDifficultyData *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyList::onLinkToUIViewCreated() */

void __thiscall AdaptorRiftDifficultyList::onLinkToUIViewCreated(AdaptorRiftDifficultyList *this)

{
  int iVar1;
  HotUIFile *this_00;
  undefined8 extraout_x0;
  ulong uVar2;
  undefined8 uVar3;
  RtWeakPtrBase *pRVar4;
  LevelModuleDifficultyProps *pLVar5;
  AdaptorRiftLevelDifficultyEntry *pAVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  AdaptorRiftLevelDifficultyEntry *pAStack_30;
  string asStack_28 [8];
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  removeDifficultyWidgets(this);
  this_00 = (HotUIFile *)FUN_036d829c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&uStack_20,"DifficultyInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&uStack_20);
  std::string::~string((string *)&uStack_20);
  nop();
  nop();
  FUN_05475d88(asStack_28,this + 0x130);
  RiftUtils::GetLevelDifficultyDataForLevelNode((RiftUtils *)&uStack_20,asStack_28);
  std::string::~string(asStack_28);
  sortDifficultyEntries(this,(RiftLevelDifficultyData *)&uStack_20);
  uVar3 = uStack_20;
  uVar2 = FUN_036d82ac(uStack_20,uStack_18);
  if (uVar2 < 0x32) {
    iVar9 = (int)uVar2;
    if (iVar9 == 0) goto LAB_036da134;
  }
  else {
    iVar9 = 0x32;
  }
  lVar8 = 0;
  while( true ) {
    pRVar4 = (RtWeakPtrBase *)FUN_036d82b8(uVar3,lVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,pRVar4);
    pLVar5 = (LevelModuleDifficultyProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    iVar1 = LevelModuleDifficultyProps::GetDisplayPriority(pLVar5,*(undefined4 *)(this + 0x138));
    if (iVar1 == 0) {
      pAVar6 = ::operator_new(0x130);
      AdaptorRiftLevelDifficultyEntry::AdaptorRiftLevelDifficultyEntry(pAVar6);
      pAStack_30 = pAVar6;
      lVar7 = FUN_036d82b8(uStack_20,lVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)(lVar7 + 8));
      AdaptorRiftLevelDifficultyEntry::Configure(pAVar6,extraout_x0,asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
      std::vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
      ::push_back((vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
                   *)(this + 0x148),&pAStack_30);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)pAStack_30);
      (**(code **)(*(long *)pAStack_30 + 0x188))(pAStack_30,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      uVar3 = uStack_20;
    }
    else {
      pAVar6 = ::operator_new(0x130);
      AdaptorRiftLevelDifficultyEntry::AdaptorRiftLevelDifficultyEntry(pAVar6);
      pAStack_30 = pAVar6;
      lVar7 = FUN_036d82b8(uStack_20,lVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)(lVar7 + 8));
      AdaptorRiftLevelDifficultyEntry::Configure(pAVar6,extraout_x0,asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
      std::vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
      ::push_back((vector<AdaptorRiftLevelDifficultyEntry*,std::allocator<AdaptorRiftLevelDifficultyEntry*>>
                   *)(this + 0x148),&pAStack_30);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)pAStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      uVar3 = uStack_20;
    }
    if (iVar9 <= (int)lVar8 + 1) break;
    lVar8 = lVar8 + 1;
    uStack_20 = uVar3;
  }
LAB_036da134:
  RiftLevelDifficultyData::~RiftLevelDifficultyData((RiftLevelDifficultyData *)&uStack_20);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

