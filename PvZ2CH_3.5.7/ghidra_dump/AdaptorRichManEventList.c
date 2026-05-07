// Class: AdaptorRichManEventList


/* AdaptorRichManEventList::ScrollerMoved(Sexy::ScrollWidget*) */

void AdaptorRichManEventList::ScrollerMoved(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorRichManEventList::ScrollerMoved(Sexy::ScrollWidget*) */

void __thiscall
AdaptorRichManEventList::ScrollerMoved(AdaptorRichManEventList *this,ScrollWidget *param_1)

{
  ScrollerMoved((ScrollWidget *)(this + -0x120));
  return;
}


/* AdaptorRichManEventList::ScrollTargetReached(Sexy::ScrollWidget*) */

void AdaptorRichManEventList::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorRichManEventList::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
AdaptorRichManEventList::ScrollTargetReached(AdaptorRichManEventList *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x120));
  return;
}


/* AdaptorRichManEventList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AdaptorRichManEventList::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorRichManEventList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
AdaptorRichManEventList::ScrollTargetInterrupted
          (AdaptorRichManEventList *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x120));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEventList::StaticClassInit() */

void AdaptorRichManEventList::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRichManEventList");
    (*pcVar2)(plVar1,asStack_10,FUN_038dc1f4,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManEventList::StaticGetClass() */

long * AdaptorRichManEventList::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRichManEventList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManEventList::GetClass() const */

long * AdaptorRichManEventList::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRichManEventList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManEventList::AdaptorRichManEventList() */

void __thiscall AdaptorRichManEventList::AdaptorRichManEventList(AdaptorRichManEventList *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_066bb030;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bb3a8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bb3f0;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorRichManEventList_066bb410;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x148));
  return;
}


/* AdaptorRichManEventList::StaticNew() */

AdaptorRichManEventList * AdaptorRichManEventList::StaticNew(void)

{
  AdaptorRichManEventList *this;
  
  this = ::operator_new(0x160);
  AdaptorRichManEventList(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEventList::~AdaptorRichManEventList() */

void __thiscall AdaptorRichManEventList::~AdaptorRichManEventList(AdaptorRichManEventList *this)

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
             *)(this + 0x130);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066bb030;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bb3a8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bb3f0;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorRichManEventList_066bb410;
  this_01 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"EventListInnerScrollArea");
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
  std::vector<AdaptorRichManEventEntry*,std::allocator<AdaptorRichManEventEntry*>>::clear
            ((vector<AdaptorRichManEventEntry*,std::allocator<AdaptorRichManEventEntry*>> *)this_00)
  ;
  AdaptorRichManEventListConfig::~AdaptorRichManEventListConfig
            ((AdaptorRichManEventListConfig *)(this + 0x148));
  std::vector<AdaptorRichManEventEntry*,std::allocator<AdaptorRichManEventEntry*>>::~vector
            ((vector<AdaptorRichManEventEntry*,std::allocator<AdaptorRichManEventEntry*>> *)this_00)
  ;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorRichManEventList::~AdaptorRichManEventList() */

void __thiscall AdaptorRichManEventList::~AdaptorRichManEventList(AdaptorRichManEventList *this)

{
  ~AdaptorRichManEventList(this + -0x120);
  return;
}


/* AdaptorRichManEventList::~AdaptorRichManEventList() */

void __thiscall AdaptorRichManEventList::~AdaptorRichManEventList(AdaptorRichManEventList *this)

{
  ~AdaptorRichManEventList(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AdaptorRichManEventList::~AdaptorRichManEventList() */

void __thiscall AdaptorRichManEventList::~AdaptorRichManEventList(AdaptorRichManEventList *this)

{
  ~AdaptorRichManEventList(this + -0x120);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEventList::onLoadUIView() */

void __thiscall AdaptorRichManEventList::onLoadUIView(AdaptorRichManEventList *this)

{
  SecretGachaMgr *this_00;
  undefined8 uVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  string asStack_48 [8];
  map amStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SecretGachaMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  SecretGachaMgr::GetScreenType(this_00);
  uVar1 = FUN_0547429c(asStack_48);
  Sexy::StrFormat("RichManEventList_%s",amStack_40,uVar1);
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


/* AdaptorRichManEventList::Configure(Sexy::WidgetContainer*, AdaptorRichManEventListConfig const&)
    */

void __thiscall
AdaptorRichManEventList::Configure
          (AdaptorRichManEventList *this,WidgetContainer *param_1,
          AdaptorRichManEventListConfig *param_2)

{
  *(WidgetContainer **)(this + 0x128) = param_1;
  AdaptorRichManEventListConfig::operator=((AdaptorRichManEventListConfig *)(this + 0x148),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEventList::onLinkToUIViewCreated() */

void __thiscall AdaptorRichManEventList::onLinkToUIViewCreated(AdaptorRichManEventList *this)

{
  HotUIFile *this_00;
  WidgetContainer *extraout_x0;
  AdaptorRichManEventEntryConfig *pAVar1;
  AdaptorRichManEventEntry *this_01;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  AdaptorRichManEventEntry *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"EventListInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  nop();
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x148);
    uVar2 = FUN_038db724(uVar4,*(undefined8 *)(this + 0x150));
    if (uVar2 <= uVar3) break;
    pAVar1 = (AdaptorRichManEventEntryConfig *)FUN_038db730(uVar4,uVar3);
    this_01 = ::operator_new(0x148);
    AdaptorRichManEventEntry::AdaptorRichManEventEntry(this_01);
    local_10 = this_01;
    AdaptorRichManEventEntry::Configure(this_01,extraout_x0,pAVar1);
    std::vector<AdaptorRichManEventEntry*,std::allocator<AdaptorRichManEventEntry*>>::push_back
              ((vector<AdaptorRichManEventEntry*,std::allocator<AdaptorRichManEventEntry*>> *)
               (this + 0x130),&local_10);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_10);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

