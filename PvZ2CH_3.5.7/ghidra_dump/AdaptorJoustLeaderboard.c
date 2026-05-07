// Class: AdaptorJoustLeaderboard


/* AdaptorJoustLeaderboard::ScrollTargetReached(Sexy::ScrollWidget*) */

void AdaptorJoustLeaderboard::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorJoustLeaderboard::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
AdaptorJoustLeaderboard::ScrollTargetReached(AdaptorJoustLeaderboard *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x120));
  return;
}


/* AdaptorJoustLeaderboard::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AdaptorJoustLeaderboard::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AdaptorJoustLeaderboard::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
AdaptorJoustLeaderboard::ScrollTargetInterrupted
          (AdaptorJoustLeaderboard *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x120));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboard::StaticClassInit() */

void AdaptorJoustLeaderboard::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustLeaderboard");
    (*pcVar2)(plVar1,asStack_10,FUN_0385ee44,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustLeaderboard::StaticGetClass() */

long * AdaptorJoustLeaderboard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustLeaderboard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustLeaderboard::GetClass() const */

long * AdaptorJoustLeaderboard::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustLeaderboard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboard::onLayoutFinished() */

void __thiscall AdaptorJoustLeaderboard::onLayoutFinished(AdaptorJoustLeaderboard *this)

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
    iVar1 = FUN_0385ecfc(10);
    iStack_14 = iStack_14 - iVar1;
    iVar1 = FUN_0385ecfc(0x14);
    local_c = local_c + iVar1;
    this_00 = (HotUIFile *)FUN_0385ebc4(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"LeaderboardScrollArea");
    this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIScrollWidget::SetScrollListener
              ((HotUIScrollWidget *)this_01,(ScrollWidgetListener *)(this + 0x120));
    this_02 = (ScrollWidget *)FUN_0385ebd0(*(undefined8 *)(this_01 + 0x218));
    Sexy::ScrollWidget::ScrollRectIntoView(this_02,(TRect *)&local_18,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboard::ScrollerMoved(Sexy::ScrollWidget*) */

void AdaptorJoustLeaderboard::ScrollerMoved(ScrollWidget *param_1)

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
  this = (HotUIFile *)FUN_0385ebc4(*(undefined8 *)(param_1 + 0xf8));
  std::string::string(asStack_10,"LeaderboardScrollArea");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar3 = FUN_0385ebd0(*(undefined8 *)(pHVar2 + 0x218));
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


/* non-virtual thunk to AdaptorJoustLeaderboard::ScrollerMoved(Sexy::ScrollWidget*) */

void __thiscall
AdaptorJoustLeaderboard::ScrollerMoved(AdaptorJoustLeaderboard *this,ScrollWidget *param_1)

{
  ScrollerMoved((ScrollWidget *)(this + -0x120));
  return;
}


/* AdaptorJoustLeaderboard::AdaptorJoustLeaderboard() */

void __thiscall AdaptorJoustLeaderboard::AdaptorJoustLeaderboard(AdaptorJoustLeaderboard *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_066a98d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a9c48;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a9c90;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorJoustLeaderboard_066a9cb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  *(undefined8 *)(this + 0x148) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x160));
  return;
}


/* AdaptorJoustLeaderboard::StaticNew() */

AdaptorJoustLeaderboard * AdaptorJoustLeaderboard::StaticNew(void)

{
  AdaptorJoustLeaderboard *this;
  
  this = ::operator_new(0x178);
  AdaptorJoustLeaderboard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboard::~AdaptorJoustLeaderboard() */

void __thiscall AdaptorJoustLeaderboard::~AdaptorJoustLeaderboard(AdaptorJoustLeaderboard *this)

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
  *(undefined ***)this = &PTR_GetClass_066a98d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a9c48;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a9c90;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorJoustLeaderboard_066a9cb0;
  this_01 = (HotUIFile *)FUN_0385ebc4(*(undefined8 *)(this + 0xf8));
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
  std::vector<AdaptorJoustLeaderboardEntry*,std::allocator<AdaptorJoustLeaderboardEntry*>>::clear
            ((vector<AdaptorJoustLeaderboardEntry*,std::allocator<AdaptorJoustLeaderboardEntry*>> *)
             this_00);
  *(undefined8 *)(this + 0x148) = 0;
  AdaptorJoustLeaderboardConfig::~AdaptorJoustLeaderboardConfig
            ((AdaptorJoustLeaderboardConfig *)(this + 0x160));
  std::vector<AdaptorJoustLeaderboardEntry*,std::allocator<AdaptorJoustLeaderboardEntry*>>::~vector
            ((vector<AdaptorJoustLeaderboardEntry*,std::allocator<AdaptorJoustLeaderboardEntry*>> *)
             this_00);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorJoustLeaderboard::~AdaptorJoustLeaderboard() */

void __thiscall AdaptorJoustLeaderboard::~AdaptorJoustLeaderboard(AdaptorJoustLeaderboard *this)

{
  ~AdaptorJoustLeaderboard(this + -0x120);
  return;
}


/* AdaptorJoustLeaderboard::~AdaptorJoustLeaderboard() */

void __thiscall AdaptorJoustLeaderboard::~AdaptorJoustLeaderboard(AdaptorJoustLeaderboard *this)

{
  ~AdaptorJoustLeaderboard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AdaptorJoustLeaderboard::~AdaptorJoustLeaderboard() */

void __thiscall AdaptorJoustLeaderboard::~AdaptorJoustLeaderboard(AdaptorJoustLeaderboard *this)

{
  ~AdaptorJoustLeaderboard(this + -0x120);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboard::onLoadUIView() */

void __thiscall AdaptorJoustLeaderboard::onLoadUIView(AdaptorJoustLeaderboard *this)

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
  std::string::string(asStack_40,"JoustLeaderboard");
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


/* AdaptorJoustLeaderboard::Configure(Sexy::WidgetContainer*, AdaptorJoustLeaderboardConfig const&)
    */

void __thiscall
AdaptorJoustLeaderboard::Configure
          (AdaptorJoustLeaderboard *this,WidgetContainer *param_1,
          AdaptorJoustLeaderboardConfig *param_2)

{
  *(WidgetContainer **)(this + 0x128) = param_1;
  AdaptorJoustLeaderboardConfig::operator=((AdaptorJoustLeaderboardConfig *)(this + 0x160),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboard::onLinkToUIViewCreated() */

void __thiscall AdaptorJoustLeaderboard::onLinkToUIViewCreated(AdaptorJoustLeaderboard *this)

{
  HotUIFile *this_00;
  WidgetContainer *extraout_x0;
  AdaptorJoustLeaderboardEntryConfig *pAVar1;
  AdaptorJoustLeaderboardEntry *this_01;
  ulong uVar2;
  NetworkMgr *this_02;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  AdaptorJoustLeaderboardEntry *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  this_00 = (HotUIFile *)FUN_0385ebc4(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"LeaderboardInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  nop();
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x160);
    uVar2 = FUN_0385ebe0(uVar5,*(undefined8 *)(this + 0x168));
    if (uVar2 <= uVar4) break;
    pAVar1 = (AdaptorJoustLeaderboardEntryConfig *)FUN_0385ebf4(uVar5,uVar4);
    this_01 = ::operator_new(0x150);
    AdaptorJoustLeaderboardEntry::AdaptorJoustLeaderboardEntry(this_01);
    if (pAVar1[0x10] != (AdaptorJoustLeaderboardEntryConfig)0x0) {
      *(AdaptorJoustLeaderboardEntry **)(this + 0x148) = this_01;
    }
    uVar4 = uVar4 + 1;
    local_10 = this_01;
    AdaptorJoustLeaderboardEntry::Configure(this_01,extraout_x0,pAVar1);
    std::vector<AdaptorJoustLeaderboardEntry*,std::allocator<AdaptorJoustLeaderboardEntry*>>::
    push_back((vector<AdaptorJoustLeaderboardEntry*,std::allocator<AdaptorJoustLeaderboardEntry*>> *
              )(this + 0x130),&local_10);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_10);
  }
  this_02 = (NetworkMgr *)NetworkMgr::Instance();
  plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
  (**(code **)(*plVar3 + 0x368))(plVar3,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

