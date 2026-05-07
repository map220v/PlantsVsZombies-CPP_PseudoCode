// Class: AdaptorRiftLeaderboard


/* AdaptorRiftLeaderboard::ScrollTargetReached(Sexy::ScrollWidget*) */

void AdaptorRiftLeaderboard::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorRiftLeaderboard::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
AdaptorRiftLeaderboard::ScrollTargetReached(AdaptorRiftLeaderboard *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x120));
  return;
}


/* AdaptorRiftLeaderboard::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AdaptorRiftLeaderboard::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorRiftLeaderboard::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
AdaptorRiftLeaderboard::ScrollTargetInterrupted(AdaptorRiftLeaderboard *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x120));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboard::StaticClassInit() */

void AdaptorRiftLeaderboard::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftLeaderboard");
    (*pcVar2)(plVar1,asStack_10,FUN_036713fc,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLeaderboard::StaticGetClass() */

long * AdaptorRiftLeaderboard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLeaderboard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftLeaderboard::GetClass() const */

long * AdaptorRiftLeaderboard::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLeaderboard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboard::onLayoutFinished() */

void __thiscall AdaptorRiftLeaderboard::onLayoutFinished(AdaptorRiftLeaderboard *this)

{
  int iVar1;
  long *plVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  ScrollWidget *this_02;
  string asStack_20 [8];
  undefined4 local_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(HotUIAdaptor **)(this + 0x148) != (HotUIAdaptor *)0x0) {
    plVar2 = (long *)HotUIAdaptor::GetEntryPointWidget(*(HotUIAdaptor **)(this + 0x148));
    (**(code **)(*(long *)plVar2[4] + 0xb0))((long *)plVar2[4],plVar2);
    (**(code **)(*plVar2 + 0x48))((TRect *)&local_18,plVar2);
    *(ulong *)(this + 0x150) = CONCAT44(iStack_14,local_18);
    *(ulong *)(this + 0x158) = CONCAT44(local_c,uStack_10);
    iVar1 = FUN_036712b4(10);
    iStack_14 = iStack_14 - iVar1;
    iVar1 = FUN_036712b4(0x14);
    local_c = local_c + iVar1;
    this_00 = (HotUIFile *)FUN_0367117c(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"LeaderboardScrollArea");
    this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIScrollWidget::SetScrollListener
              ((HotUIScrollWidget *)this_01,(ScrollWidgetListener *)(this + 0x120));
    this_02 = (ScrollWidget *)FUN_03671188(*(undefined8 *)(this_01 + 0x218));
    Sexy::ScrollWidget::ScrollRectIntoView(this_02,(TRect *)&local_18,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboard::ScrollerMoved(Sexy::ScrollWidget*) */

void AdaptorRiftLeaderboard::ScrollerMoved(ScrollWidget *param_1)

{
  undefined4 uVar1;
  HotUIFile *this;
  HotUISeedPacketList *pHVar2;
  long lVar3;
  long *plVar4;
  string asStack_10 [4];
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (HotUIFile *)FUN_0367117c(*(undefined8 *)(param_1 + 0xf8));
  std::string::string(asStack_10,"LeaderboardScrollArea");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar3 = FUN_03671188(*(undefined8 *)(pHVar2 + 0x218));
  Sexy::ScrollWidget::GetScrollOffset();
  uVar1 = ClampInt(*(int *)(param_1 + 0x154),(int)-local_c,
                   (int)(((float)*(int *)(lVar3 + 0x54) - local_c) -
                        (float)*(int *)(param_1 + 0x15c)));
  plVar4 = (long *)HotUIAdaptor::GetEntryPointWidget(*(HotUIAdaptor **)(param_1 + 0x148));
  (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined4 *)(param_1 + 0x150),uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorRiftLeaderboard::ScrollerMoved(Sexy::ScrollWidget*) */

void __thiscall
AdaptorRiftLeaderboard::ScrollerMoved(AdaptorRiftLeaderboard *this,ScrollWidget *param_1)

{
  ScrollerMoved((ScrollWidget *)(this + -0x120));
  return;
}


/* AdaptorRiftLeaderboard::AdaptorRiftLeaderboard() */

void __thiscall AdaptorRiftLeaderboard::AdaptorRiftLeaderboard(AdaptorRiftLeaderboard *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_06679460;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066797d8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06679820;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorRiftLeaderboard_06679840;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  *(undefined8 *)(this + 0x148) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x160));
  return;
}


/* AdaptorRiftLeaderboard::StaticNew() */

AdaptorRiftLeaderboard * AdaptorRiftLeaderboard::StaticNew(void)

{
  AdaptorRiftLeaderboard *this;
  
  this = ::operator_new(0x178);
  AdaptorRiftLeaderboard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboard::~AdaptorRiftLeaderboard() */

void __thiscall AdaptorRiftLeaderboard::~AdaptorRiftLeaderboard(AdaptorRiftLeaderboard *this)

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
  *(undefined ***)this = &PTR_GetClass_06679460;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066797d8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06679820;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorRiftLeaderboard_06679840;
  this_01 = (HotUIFile *)FUN_0367117c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"LeaderboardInnerScrollArea");
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
  std::vector<AdaptorRiftLeaderboardEntry*,std::allocator<AdaptorRiftLeaderboardEntry*>>::clear
            ((vector<AdaptorRiftLeaderboardEntry*,std::allocator<AdaptorRiftLeaderboardEntry*>> *)
             this_00);
  *(undefined8 *)(this + 0x148) = 0;
  AdaptorRiftLeaderboardConfig::~AdaptorRiftLeaderboardConfig
            ((AdaptorRiftLeaderboardConfig *)(this + 0x160));
  std::vector<AdaptorRiftLeaderboardEntry*,std::allocator<AdaptorRiftLeaderboardEntry*>>::~vector
            ((vector<AdaptorRiftLeaderboardEntry*,std::allocator<AdaptorRiftLeaderboardEntry*>> *)
             this_00);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorRiftLeaderboard::~AdaptorRiftLeaderboard() */

void __thiscall AdaptorRiftLeaderboard::~AdaptorRiftLeaderboard(AdaptorRiftLeaderboard *this)

{
  ~AdaptorRiftLeaderboard(this + -0x120);
  return;
}


/* AdaptorRiftLeaderboard::~AdaptorRiftLeaderboard() */

void __thiscall AdaptorRiftLeaderboard::~AdaptorRiftLeaderboard(AdaptorRiftLeaderboard *this)

{
  ~AdaptorRiftLeaderboard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AdaptorRiftLeaderboard::~AdaptorRiftLeaderboard() */

void __thiscall AdaptorRiftLeaderboard::~AdaptorRiftLeaderboard(AdaptorRiftLeaderboard *this)

{
  ~AdaptorRiftLeaderboard(this + -0x120);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboard::onLoadUIView() */

void __thiscall AdaptorRiftLeaderboard::onLoadUIView(AdaptorRiftLeaderboard *this)

{
  string *psVar1;
  HotUIFile *pHVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar1 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"RiftLeaderboard");
  pHVar2 = (HotUIFile *)
           HotUIManager::LoadUIPrefab(psVar1,(map *)asStack_40,(WidgetContainer *)amStack_38);
  std::string::~string(asStack_40);
  nop();
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


/* AdaptorRiftLeaderboard::Configure(Sexy::WidgetContainer*, AdaptorRiftLeaderboardConfig const&) */

void __thiscall
AdaptorRiftLeaderboard::Configure
          (AdaptorRiftLeaderboard *this,WidgetContainer *param_1,
          AdaptorRiftLeaderboardConfig *param_2)

{
  *(WidgetContainer **)(this + 0x128) = param_1;
  AdaptorRiftLeaderboardConfig::operator=((AdaptorRiftLeaderboardConfig *)(this + 0x160),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboard::onLinkToUIViewCreated() */

void __thiscall AdaptorRiftLeaderboard::onLinkToUIViewCreated(AdaptorRiftLeaderboard *this)

{
  HotUIFile *this_00;
  WidgetContainer *extraout_x0;
  AdaptorRiftLeaderboardEntryConfig *pAVar1;
  AdaptorRiftLeaderboardEntry *this_01;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  AdaptorRiftLeaderboardEntry *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  this_00 = (HotUIFile *)FUN_0367117c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"LeaderboardInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  nop();
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x160);
    uVar2 = FUN_03671198(uVar4,*(undefined8 *)(this + 0x168));
    if (uVar2 <= uVar3) break;
    pAVar1 = (AdaptorRiftLeaderboardEntryConfig *)FUN_036711ac(uVar4,uVar3);
    this_01 = ::operator_new(0x158);
    AdaptorRiftLeaderboardEntry::AdaptorRiftLeaderboardEntry(this_01);
    if (pAVar1[0x10] != (AdaptorRiftLeaderboardEntryConfig)0x0) {
      *(AdaptorRiftLeaderboardEntry **)(this + 0x148) = this_01;
    }
    uVar3 = uVar3 + 1;
    local_10 = this_01;
    AdaptorRiftLeaderboardEntry::Configure(this_01,extraout_x0,pAVar1);
    std::vector<AdaptorRiftLeaderboardEntry*,std::allocator<AdaptorRiftLeaderboardEntry*>>::
    push_back((vector<AdaptorRiftLeaderboardEntry*,std::allocator<AdaptorRiftLeaderboardEntry*>> *)
              (this + 0x130),&local_10);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

