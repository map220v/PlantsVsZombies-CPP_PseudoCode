// Class: AdaptorRichManBoard


/* AdaptorRichManBoard::Update() */

void __thiscall AdaptorRichManBoard::Update(AdaptorRichManBoard *this)

{
  char cVar1;
  HotUIWidget *this_00;
  
  if (((this[0x100] == (AdaptorRichManBoard)0x0) &&
      (this_00 = (HotUIWidget *)HotUIAdaptor::GetEntryPointWidget((HotUIAdaptor *)this),
      this_00 != (HotUIWidget *)0x0)) && (cVar1 = HotUIWidget::IsDirty(this_00), cVar1 == '\0')) {
    this[0x100] = (AdaptorRichManBoard)0x1;
    if (*(code **)(*(long *)this + 0x348) != HotUIAdaptor::onLayoutFinished) {
      (**(code **)(*(long *)this + 0x348))(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::StaticClassInit() */

void AdaptorRichManBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRichManBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_038dd61c,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManBoard::StaticGetClass() */

long * AdaptorRichManBoard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRichManBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManBoard::GetClass() const */

long * AdaptorRichManBoard::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRichManBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManBoard::Configure(Sexy::WidgetContainer*, AdaptorBoardConfig const&) */

void __thiscall
AdaptorRichManBoard::Configure
          (AdaptorRichManBoard *this,WidgetContainer *param_1,AdaptorBoardConfig *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(WidgetContainer **)(this + 0x120) = param_1;
  *(undefined8 *)(this + 0x128) = uVar1;
  *(undefined8 *)(this + 0x130) = uVar2;
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_2 + 0x10);
  return;
}


/* AdaptorRichManBoard::CanRollDice() */

void __thiscall AdaptorRichManBoard::CanRollDice(AdaptorRichManBoard *this)

{
  FUN_038dbab8(*(undefined4 *)(this + 0x178));
  return;
}


/* AdaptorRichManBoard::SetPieceLocation(Sexy::Point const&) */

void __thiscall AdaptorRichManBoard::SetPieceLocation(AdaptorRichManBoard *this,Point *param_1)

{
  if (*(MainBoard **)(this + 0x170) != (MainBoard *)0x0) {
    MainBoard::SetPieceLocation(*(MainBoard **)(this + 0x170),param_1);
    return;
  }
  return;
}


/* AdaptorRichManBoard::SetPieceStartLocation(Sexy::Point const&) */

void AdaptorRichManBoard::SetPieceStartLocation(Point *param_1)

{
  Point *in_x1;
  
  if (*(MainBoard **)(param_1 + 0x170) != (MainBoard *)0x0) {
    MainBoard::SetPieceLocation(*(MainBoard **)(param_1 + 0x170),in_x1);
    return;
  }
  return;
}


/* AdaptorRichManBoard::CreateDice() */

void __thiscall AdaptorRichManBoard::CreateDice(AdaptorRichManBoard *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x180);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    Dice::setState(*(Dice **)(this + 0x180),0);
    return;
  }
  return;
}


/* AdaptorRichManBoard::Rolling() */

void __thiscall AdaptorRichManBoard::Rolling(AdaptorRichManBoard *this)

{
  undefined4 uVar1;
  long lVar2;
  RichManUIMgr *this_00;
  
  lVar2 = Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  uVar1 = FUN_038db700(*(undefined4 *)(lVar2 + 0x88));
  *(undefined4 *)(this + 0x188) = uVar1;
  this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  uVar1 = RichManUIMgr::GetNextRoll(this_00);
  FUN_038db6e4(*(long *)(this + 0x180) + 0x24c,uVar1);
  Dice::setState(*(Dice **)(this + 0x180),1);
  return;
}


/* AdaptorRichManBoard::CreatePiece() */

void __thiscall AdaptorRichManBoard::CreatePiece(AdaptorRichManBoard *this)

{
  if (*(MainBoard **)(this + 0x170) != (MainBoard *)0x0) {
    MainBoard::CreatePiece(*(MainBoard **)(this + 0x170));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::AdaptorRichManBoard() */

void __thiscall AdaptorRichManBoard::AdaptorRichManBoard(AdaptorRichManBoard *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066bc840;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bcba0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bcbe8;
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x178) = 0xffffffff;
  *(undefined4 *)(this + 0x188) = 0xffffffff;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyDiceRoll);
  Sexy::Delegate0::Delegate0<AdaptorRichManBoard,void(AdaptorRichManBoard::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyDiceRoll,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManBoard::StaticNew() */

AdaptorRichManBoard * AdaptorRichManBoard::StaticNew(void)

{
  AdaptorRichManBoard *this;
  
  this = ::operator_new(400);
  AdaptorRichManBoard(this);
  return this;
}


/* AdaptorRichManBoard::GetInitRect() */

void AdaptorRichManBoard::GetInitRect(void)

{
  char cVar1;
  long in_x0;
  long *plVar2;
  Insets *in_x8;
  
  cVar1 = std::vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>>::empty
                    ((vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>> *)
                     (in_x0 + 0x140));
  if ((cVar1 == '\0') &&
     (plVar2 = (long *)FUN_038db76c(*(undefined8 *)(in_x0 + 0x140),0), *plVar2 != 0)) {
    AdaptorRichManEvent::GetInitRect();
    return;
  }
  Sexy::Insets::Insets(in_x8,0,0,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::~AdaptorRichManBoard() */

void __thiscall AdaptorRichManBoard::~AdaptorRichManBoard(AdaptorRichManBoard *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066bc840;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bcba0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bcbe8;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>>::clear
            ((vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>> *)this_00);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<AdaptorEventConfig,std::allocator<AdaptorEventConfig>>::~vector
            ((vector<AdaptorEventConfig,std::allocator<AdaptorEventConfig>> *)(this + 0x158));
  std::vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>>::~vector
            ((vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>> *)this_00);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManBoard::~AdaptorRichManBoard() */

void __thiscall AdaptorRichManBoard::~AdaptorRichManBoard(AdaptorRichManBoard *this)

{
  ~AdaptorRichManBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::GetEventConfigByIndex(int) */

void __thiscall AdaptorRichManBoard::GetEventConfigByIndex(AdaptorRichManBoard *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x158);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_038e04a4(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06ab7ce0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::onLoadUIView() */

void __thiscall AdaptorRichManBoard::onLoadUIView(AdaptorRichManBoard *this)

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
  std::string::string(asStack_40,"RichManBoard");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::init() */

void __thiscall AdaptorRichManBoard::init(AdaptorRichManBoard *this)

{
  SocialInfo *this_00;
  vector *pvVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SocialInfo *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  pvVar1 = (vector *)SocialInfo::GetReceivedSunList(this_00);
  std::vector<EventConfig,std::allocator<EventConfig>>::vector
            ((vector<EventConfig,std::allocator<EventConfig>> *)&local_20,pvVar1);
  uVar4 = 0;
  while( true ) {
    uVar3 = FUN_038db774(local_20,local_18);
    if (uVar3 <= uVar4) break;
    Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_28);
    puVar2 = (undefined4 *)FUN_038db780(local_20,uVar4);
    local_28 = *puVar2;
    local_24 = puVar2[1];
    std::vector<AdaptorEventConfig,std::allocator<AdaptorEventConfig>>::push_back
              ((vector<AdaptorEventConfig,std::allocator<AdaptorEventConfig>> *)(this + 0x158),
               (AdaptorEventConfig *)&local_28);
    uVar4 = uVar4 + 1;
  }
  std::vector<EventConfig,std::allocator<EventConfig>>::~vector
            ((vector<EventConfig,std::allocator<EventConfig>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::Refresh() */

void __thiscall AdaptorRichManBoard::Refresh(AdaptorRichManBoard *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<AdaptorEventConfig,std::allocator<AdaptorEventConfig>>::clear
            ((vector<AdaptorEventConfig,std::allocator<AdaptorEventConfig>> *)(this + 0x158));
  init(this);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x140);
    uVar3 = FUN_038db760(uVar5,*(undefined8 *)(this + 0x148));
    if (uVar3 <= uVar4) break;
    puVar1 = (undefined8 *)FUN_038db76c(uVar5,uVar4);
    lVar2 = Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)*puVar1);
    puVar1 = (undefined8 *)GetEventConfigByIndex(this,*(int *)(lVar2 + 4));
    local_10 = *puVar1;
    puVar1 = (undefined8 *)FUN_038db76c(*(undefined8 *)(this + 0x140),uVar4);
    AdaptorRichManEvent::ResetEvent((AdaptorRichManEvent *)*puVar1,(AdaptorEventConfig *)&local_10);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::Moving(bool) */

void __thiscall AdaptorRichManBoard::Moving(AdaptorRichManBoard *this,bool param_1)

{
  RichManUIMgr *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  RichManUIMgr::GetNextLocation(this_00,(vector *)avStack_20,*(int *)(this + 0x188),param_1);
  if (*(MainBoard **)(this + 0x170) != (MainBoard *)0x0) {
    MainBoard::JumpToDestination(*(MainBoard **)(this + 0x170),(vector *)avStack_20);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManBoard::setState(RichManState) */

void __thiscall AdaptorRichManBoard::setState(AdaptorRichManBoard *this,int param_2)

{
  if (*(int *)(this + 0x178) != param_2) {
    *(int *)(this + 0x178) = param_2;
    switch(param_2) {
    case 0:
      Creating(this);
      return;
    case 2:
      Rolling(this);
      return;
    case 3:
      Moving(this,false);
      return;
    case 4:
      Moving(this,true);
      return;
    }
  }
  return;
}


/* AdaptorRichManBoard::onNotifyDiceRoll() */

void __thiscall AdaptorRichManBoard::onNotifyDiceRoll(AdaptorRichManBoard *this)

{
  setState(this,3);
  return;
}


/* AdaptorRichManBoard::onNotifyMovingFinish(bool) */

void AdaptorRichManBoard::onNotifyMovingFinish(bool param_1)

{
  setState((AdaptorRichManBoard *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::onSetup() */

void __thiscall AdaptorRichManBoard::onSetup(AdaptorRichManBoard *this)

{
  HotUIFile *this_00;
  long lVar1;
  MainBoard *extraout_x0;
  long *plVar2;
  undefined8 extraout_x0_00;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_18,"PlayBoard");
  lVar1 = HotUIFile::GetWidgetByName(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (lVar1 != 0) {
    nop();
    *(MainBoard **)(this + 0x170) = extraout_x0;
    GetInitRect();
    MainBoard::SetInitRect(extraout_x0,asStack_18);
    MainBoard::SetBoardConfig(*(MainBoard **)(this + 0x170),(AdaptorBoardConfig *)(this + 0x128));
    std::string::string(asStack_18,"Board");
    plVar2 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_18);
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar1);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"Dice");
    HotUIFile::GetWidgetByName(this_00,asStack_18);
    nop();
    *(undefined8 *)(this + 0x180) = extraout_x0_00;
    std::string::~string(asStack_18);
    nop();
    plVar2 = *(long **)(this + 0x180);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
    }
  }
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::setup() */

void __thiscall AdaptorRichManBoard::setup(AdaptorRichManBoard *this)

{
  HotUIFile *this_00;
  WidgetContainer *pWVar1;
  AdaptorEventConfig *pAVar2;
  AdaptorRichManEvent *this_01;
  ulong uVar3;
  ulong uVar4;
  int unaff_w20;
  undefined8 uVar5;
  int iVar6;
  AdaptorRichManEvent *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  init(this);
  this_00 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_18,"Board");
  pWVar1 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pWVar1 == (WidgetContainer *)0x0) {
    iVar6 = 0;
  }
  else {
    unaff_w20 = *(int *)(pWVar1 + 0x50);
    iVar6 = *(int *)(pWVar1 + 0x54);
  }
  Sexy::Insets::Insets((Insets *)asStack_18);
  RichManUtils::GetInitialValue
            ((TRect *)asStack_18,(AdaptorBoardConfig *)(this + 0x128),unaff_w20,iVar6);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x158);
    uVar3 = FUN_038db74c(uVar5,*(undefined8 *)(this + 0x160));
    if (uVar3 <= uVar4) break;
    pAVar2 = (AdaptorEventConfig *)FUN_038db758(uVar5,uVar4);
    this_01 = ::operator_new(0x168);
    AdaptorRichManEvent::AdaptorRichManEvent(this_01);
    local_20 = this_01;
    AdaptorRichManEvent::Configure(this_01,pWVar1,pAVar2,(AdaptorBoardConfig *)(this + 0x128));
    AdaptorRichManEvent::SetInitialValue(local_20,(TRect *)asStack_18);
    std::vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>>::push_back
              ((vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>> *)(this + 0x140),
               &local_20);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_20);
    AdaptorRichManEvent::refresh(local_20);
    uVar4 = uVar4 + 1;
  }
  onSetup(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::onLinkToUIViewCreated() */

void __thiscall AdaptorRichManBoard::onLinkToUIViewCreated(AdaptorRichManBoard *this)

{
  HotUIFile *this_00;
  WidgetContainer *pWVar1;
  AdaptorEventConfig *pAVar2;
  AdaptorRichManEvent *this_01;
  ulong uVar3;
  ulong uVar4;
  int unaff_w20;
  undefined8 uVar5;
  int iVar6;
  AdaptorRichManEvent *pAStack_20;
  string asStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  init(this);
  this_00 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_18,"Board");
  pWVar1 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pWVar1 == (WidgetContainer *)0x0) {
    iVar6 = 0;
  }
  else {
    unaff_w20 = *(int *)(pWVar1 + 0x50);
    iVar6 = *(int *)(pWVar1 + 0x54);
  }
  Sexy::Insets::Insets((Insets *)asStack_18);
  RichManUtils::GetInitialValue
            ((TRect *)asStack_18,(AdaptorBoardConfig *)(this + 0x128),unaff_w20,iVar6);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x158);
    uVar3 = FUN_038db74c(uVar5,*(undefined8 *)(this + 0x160));
    if (uVar3 <= uVar4) break;
    pAVar2 = (AdaptorEventConfig *)FUN_038db758(uVar5,uVar4);
    this_01 = ::operator_new(0x168);
    AdaptorRichManEvent::AdaptorRichManEvent(this_01);
    pAStack_20 = this_01;
    AdaptorRichManEvent::Configure(this_01,pWVar1,pAVar2,(AdaptorBoardConfig *)(this + 0x128));
    AdaptorRichManEvent::SetInitialValue(pAStack_20,(TRect *)asStack_18);
    std::vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>>::push_back
              ((vector<AdaptorRichManEvent*,std::allocator<AdaptorRichManEvent*>> *)(this + 0x140),
               &pAStack_20);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)pAStack_20);
    AdaptorRichManEvent::refresh(pAStack_20);
    uVar4 = uVar4 + 1;
  }
  onSetup(this);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManBoard::Creating() */

void __thiscall AdaptorRichManBoard::Creating(AdaptorRichManBoard *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  CreatePiece(this);
  Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  RichManUIMgr::GetStartLocation();
  SetPieceStartLocation((Point *)this);
  CreateDice(this);
  setState(this,1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

