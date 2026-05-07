// Class: AdaptorRichManEvent


/* AdaptorRichManEvent::~AdaptorRichManEvent() */

void __thiscall AdaptorRichManEvent::~AdaptorRichManEvent(AdaptorRichManEvent *this)

{
  *(undefined ***)this = &PTR_GetClass_066bbc40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bbfa0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bbfe8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRichManEvent::~AdaptorRichManEvent() */

void __thiscall AdaptorRichManEvent::~AdaptorRichManEvent(AdaptorRichManEvent *this)

{
  ~AdaptorRichManEvent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEvent::StaticClassInit() */

void AdaptorRichManEvent::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRichManEvent");
    (*pcVar2)(plVar1,asStack_10,FUN_038dcaf4,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManEvent::StaticGetClass() */

long * AdaptorRichManEvent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRichManEvent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManEvent::GetClass() const */

long * AdaptorRichManEvent::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRichManEvent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManEvent::Configure(Sexy::WidgetContainer*, AdaptorEventConfig const&,
   AdaptorBoardConfig const&) */

void __thiscall
AdaptorRichManEvent::Configure
          (AdaptorRichManEvent *this,WidgetContainer *param_1,AdaptorEventConfig *param_2,
          AdaptorBoardConfig *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(WidgetContainer **)(this + 0x120) = param_1;
  *(undefined8 *)(this + 0x128) = uVar3;
  *(undefined8 *)(this + 0x130) = uVar1;
  *(undefined8 *)(this + 0x138) = uVar2;
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(param_3 + 0x10);
  return;
}


/* AdaptorRichManEvent::GetPosition(Sexy::SexyVector2&) */

void __thiscall AdaptorRichManEvent::GetPosition(AdaptorRichManEvent *this,SexyVector2 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x160) + 0x4c);
  *(float *)param_1 = (float)*(int *)(*(long *)(this + 0x160) + 0x48);
  *(float *)(param_1 + 4) = (float)iVar1;
  return;
}


/* AdaptorRichManEvent::SetInitialValue(Sexy::TRect<int> const&) */

void __thiscall AdaptorRichManEvent::SetInitialValue(AdaptorRichManEvent *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x154) = uVar1;
  return;
}


/* AdaptorRichManEvent::refresh() */

void __thiscall AdaptorRichManEvent::refresh(AdaptorRichManEvent *this)

{
  HotUIWidget::MarkAnchorDirty(*(HotUIWidget **)(this + 0x160));
  return;
}


/* AdaptorRichManEvent::AdaptorRichManEvent() */

void __thiscall AdaptorRichManEvent::AdaptorRichManEvent(AdaptorRichManEvent *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066bbc40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bbfa0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bbfe8;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x128));
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0x130));
  Sexy::Point::Point((Point *)(this + 0x144));
  Sexy::Insets::Insets((Insets *)(this + 0x14c));
  *(undefined8 *)(this + 0x160) = 0;
  return;
}


/* AdaptorRichManEvent::StaticNew() */

AdaptorRichManEvent * AdaptorRichManEvent::StaticNew(void)

{
  AdaptorRichManEvent *this;
  
  this = ::operator_new(0x168);
  AdaptorRichManEvent(this);
  return this;
}


/* AdaptorRichManEvent::GetInitRect() */

Insets * AdaptorRichManEvent::GetInitRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x14c));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEvent::SetLocation(Sexy::Point const&, bool) */

void __thiscall
AdaptorRichManEvent::SetLocation(AdaptorRichManEvent *this,Point *param_1,bool param_2)

{
  EventUI *extraout_x0;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0x144) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  if (param_2) {
    local_1c = 0;
    RichManUtils::GetTargetPosition
              (param_1,(TRect *)(this + 0x14c),*(int *)(this + 0x138),&local_20,&local_1c,false);
    nop();
    Sexy::Insets::Insets(aIStack_18,local_20,local_1c,*(int *)(this + 0x154),*(int *)(this + 0x158))
    ;
    EventUI::SetRect(extraout_x0,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEvent::SetBackground() */

void __thiscall AdaptorRichManEvent::SetBackground(AdaptorRichManEvent *this)

{
  ulong uVar1;
  EventUI *extraout_x0;
  string *extraout_x1;
  HotUIHelpers aHStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RichManUtils::GetTargetEventBgType
                    ((Point *)(this + 0x144),*(int *)(this + 0x134),*(int *)(this + 0x130));
  Sexy::StrFormat("IMAGE_UI_RICHMAN_EVENT_BG_%d",aHStack_18,uVar1 & 0xffffffff);
  if (*(long *)(this + 0x160) != 0) {
    nop();
    HotUIHelpers::GetImageFromStringId(aHStack_18,extraout_x1);
    EventUI::SetBackgroundImage(extraout_x0,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string((string *)aHStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEvent::Locate() */

void __thiscall AdaptorRichManEvent::Locate(AdaptorRichManEvent *this)

{
  uint uVar1;
  RichManUIMgr *pRVar2;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  uVar1 = *(uint *)(this + 300);
  local_8 = ___stack_chk_guard;
  RichManUtils::GetTargetLocation
            ((RichManUtils *)(ulong)uVar1,*(int *)(this + 0x134),*(int *)(this + 0x130),
             (int)___stack_chk_guard);
  SetLocation(this,aPStack_18,true);
  pRVar2 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_18);
  RichManUIMgr::AddNode(pRVar2,uVar1,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEvent::ResetEvent(AdaptorEventConfig const&) */

void __thiscall
AdaptorRichManEvent::ResetEvent(AdaptorRichManEvent *this,AdaptorEventConfig *param_1)

{
  RichManUIMgr *this_00;
  InvitationPlayerInfo *pIVar1;
  EventUI *extraout_x0;
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  InvitationPlayerInfo aIStack_28 [16];
  HotUIHelpers aHStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0x128) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  pIVar1 = (InvitationPlayerInfo *)
           RichManUIMgr::GetEventUIEntryConfig(this_00,*(int *)(this + 0x128));
  InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,pIVar1);
  nop();
  HotUIHelpers::GetImageFromStringId(aHStack_18,extraout_x1);
  EventUI::SetIconImage(extraout_x0,aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEvent::setup() */

void __thiscall AdaptorRichManEvent::setup(AdaptorRichManEvent *this)

{
  HotUIFile *this_00;
  RtClass *pRVar1;
  undefined8 uVar2;
  RichManUIMgr *this_01;
  InvitationPlayerInfo *pIVar3;
  EventUI *extraout_x0;
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  InvitationPlayerInfo aIStack_28 [16];
  HotUIHelpers aHStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  pRVar1 = (RtClass *)EventUI::StaticGetClass();
  uVar2 = HotUIFile::GetWidgetByType(this_00,pRVar1);
  *(undefined8 *)(this + 0x160) = uVar2;
  this_01 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  pIVar3 = (InvitationPlayerInfo *)
           RichManUIMgr::GetEventUIEntryConfig(this_01,*(int *)(this + 0x128));
  InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,pIVar3);
  nop();
  HotUIHelpers::GetImageFromStringId(aHStack_18,extraout_x1);
  EventUI::SetIconImage(extraout_x0,aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  Locate(this);
  SetBackground(this);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEvent::onLinkToUIViewCreated() */

void __thiscall AdaptorRichManEvent::onLinkToUIViewCreated(AdaptorRichManEvent *this)

{
  HotUIFile *this_00;
  RtClass *pRVar1;
  undefined8 uVar2;
  RichManUIMgr *this_01;
  InvitationPlayerInfo *pIVar3;
  EventUI *extraout_x0;
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  InvitationPlayerInfo aIStack_28 [16];
  HotUIHelpers aHStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038db6b4(*(undefined8 *)(this + 0xf8));
  pRVar1 = (RtClass *)EventUI::StaticGetClass();
  uVar2 = HotUIFile::GetWidgetByType(this_00,pRVar1);
  *(undefined8 *)(this + 0x160) = uVar2;
  this_01 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  pIVar3 = (InvitationPlayerInfo *)
           RichManUIMgr::GetEventUIEntryConfig(this_01,*(int *)(this + 0x128));
  InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,pIVar3);
  nop();
  HotUIHelpers::GetImageFromStringId(aHStack_18,extraout_x1);
  EventUI::SetIconImage(extraout_x0,aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  Locate(this);
  SetBackground(this);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEvent::onLoadUIView() */

void __thiscall AdaptorRichManEvent::onLoadUIView(AdaptorRichManEvent *this)

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
  std::string::string(asStack_40,"RichManEvent");
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

