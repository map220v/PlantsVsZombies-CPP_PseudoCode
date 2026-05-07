// Class: AdaptorPerkInfoWidget


/* AdaptorPerkInfoWidget::onRepickButtonPressed() */

void AdaptorPerkInfoWidget::onRepickButtonPressed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::StaticClassInit() */

void AdaptorPerkInfoWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPerkInfoWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_036de4e4,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkInfoWidget::StaticGetClass() */

long * AdaptorPerkInfoWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkInfoWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkInfoWidget::GetClass() const */

long * AdaptorPerkInfoWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkInfoWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkInfoWidget::SetInfoType(PerkInfoType) */

void __thiscall AdaptorPerkInfoWidget::SetInfoType(AdaptorPerkInfoWidget *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x138) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::resetPerkStatus() */

void __thiscall AdaptorPerkInfoWidget::resetPerkStatus(AdaptorPerkInfoWidget *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 0x140);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,0);
  }
  std::string::string(asStack_10,"UnobtainedShadow");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"StatusIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  this[0x148] = (AdaptorPerkInfoWidget)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkInfoWidget::~AdaptorPerkInfoWidget() */

void __thiscall AdaptorPerkInfoWidget::~AdaptorPerkInfoWidget(AdaptorPerkInfoWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06684880;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06684be0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684c28;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130));
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorPerkInfoWidget::~AdaptorPerkInfoWidget() */

void __thiscall AdaptorPerkInfoWidget::~AdaptorPerkInfoWidget(AdaptorPerkInfoWidget *this)

{
  ~AdaptorPerkInfoWidget(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorPerkInfoWidget::onPerkDeselected(std::string&) */

void __thiscall AdaptorPerkInfoWidget::onPerkDeselected(AdaptorPerkInfoWidget *this,string *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  cVar1 = std::operator==(param_1,(string *)(lVar2 + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  resetPerkStatus(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::onLinkToUIViewCreated() */

void __thiscall AdaptorPerkInfoWidget::onLinkToUIViewCreated(AdaptorPerkInfoWidget *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036dd514(*(undefined8 *)(this + 0xf8));
  if (*(int *)(this + 0x138) == 0) {
    std::string::string(asStack_10,"PerkActivationButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    *(HotUISeedPacketList **)(this + 0x140) = pHVar1;
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener(*(HotUIButton **)(this + 0x140),0,(ButtonListener *)(this + 0xd8));
  }
  else if (*(int *)(this + 0x138) == 1) {
    std::string::string(asStack_10,"Checkbox");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    *(HotUISeedPacketList **)(this + 0x150) = pHVar1;
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener(*(HotUIButton **)(this + 0x150),1,(ButtonListener *)(this + 0xd8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::setLevelText(int, bool) */

void AdaptorPerkInfoWidget::setLevelText(int param_1,bool param_2)

{
  HotUIFile *this;
  HotUISeedPacketList *pHVar1;
  HotUISeedPacketList *pHVar2;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (HotUIFile *)FUN_036dd514(*(undefined8 *)((ulong)(uint)param_1 + 0xf8));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            (aRStack_28,(RtWeakPtrBase *)((ulong)(uint)param_1 + 0x120));
  std::string::string(asStack_10,"PerkDescription");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PerkLevelLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  (**(code **)(*plVar3 + 0x80))(auStack_20,plVar3,param_2);
  (**(code **)(*(long *)pHVar1 + 0x360))(pHVar1,auStack_20);
  Sexy::StrFormat("LV %d",asStack_10,(ulong)(param_2 + 1));
  Sexy::ToWString(asStack_10);
  std::string::~string(asStack_10);
  (**(code **)(*(long *)pHVar2 + 0x360))(pHVar2,auStack_18);
  FUN_05476c50(auStack_18);
  FUN_05476c50(auStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkInfoWidget::setDefaultLevelText() */

void __thiscall AdaptorPerkInfoWidget::setDefaultLevelText(AdaptorPerkInfoWidget *this)

{
  setLevelText((int)this,SUB41(*(undefined4 *)(this + 0x128),0));
  return;
}


/* AdaptorPerkInfoWidget::setIncrementedLevelText() */

void __thiscall AdaptorPerkInfoWidget::setIncrementedLevelText(AdaptorPerkInfoWidget *this)

{
  setLevelText((int)this,(bool)((char)*(undefined4 *)(this + 0x128) + '\x01'));
  return;
}


/* AdaptorPerkInfoWidget::AdaptorPerkInfoWidget() */

void __thiscall AdaptorPerkInfoWidget::AdaptorPerkInfoWidget(AdaptorPerkInfoWidget *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06684880;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06684be0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684c28;
  PerkData::PerkData((PerkData *)(this + 0x120));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x130));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x138) = 1;
  this[0x148] = (AdaptorPerkInfoWidget)0x1;
  *(undefined8 *)(this + 0x150) = 0;
  this[0x158] = (AdaptorPerkInfoWidget)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPerkSelected);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<std::string&,bool,Sexy::Point&,Sexy::CBMemberTranslatorX<AdaptorPerkInfoWidget,void(AdaptorPerkInfoWidget::*)(std::string&,bool,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PerkSelected,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPerkDeselected);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<std::string&,Sexy::CBMemberTranslatorX<AdaptorPerkInfoWidget,void(AdaptorPerkInfoWidget::*)(std::string&)>>
            ((MessageRouter *)puVar1,Message::PerkDeselected,&local_70);
  return;
}


/* AdaptorPerkInfoWidget::StaticNew() */

AdaptorPerkInfoWidget * AdaptorPerkInfoWidget::StaticNew(void)

{
  AdaptorPerkInfoWidget *this;
  
  this = ::operator_new(0x160);
  AdaptorPerkInfoWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::setPerkLocked() */

void __thiscall AdaptorPerkInfoWidget::setPerkLocked(AdaptorPerkInfoWidget *this)

{
  long *plVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 0x140);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  std::string::string(asStack_10,"UnobtainedShadow");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"StatusIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,"StatusIcon");
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aae180);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_18,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  this[0x148] = (AdaptorPerkInfoWidget)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::setPerkDisabled() */

void __thiscall AdaptorPerkInfoWidget::setPerkDisabled(AdaptorPerkInfoWidget *this)

{
  long *plVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 0x140);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x150);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  std::string::string(asStack_10,"UnobtainedShadow");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"StatusIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,"StatusIcon");
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aae158);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_18,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  this[0x148] = (AdaptorPerkInfoWidget)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::SetPerk(PerkData) */

void __thiscall AdaptorPerkInfoWidget::SetPerk(AdaptorPerkInfoWidget *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  undefined4 uVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  long *plVar4;
  PennyPerkMgr *pPVar5;
  long lVar6;
  char *__s;
  code *pcVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
  DrZomibeLevelData::operator=((DrZomibeLevelData *)(this + 0x120),(DrZomibeLevelData *)param_2);
  this_00 = (HotUIFile *)FUN_036dd514(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"PerkName");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar7 = *(code **)(*(long *)pHVar3 + 0x360);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  (**(code **)(*plVar4 + 0x88))(asStack_10);
  (*pcVar7)(pHVar3,asStack_10);
  FUN_05476c50(asStack_10);
  setDefaultLevelText(this);
  if (*(int *)(param_2 + 8) < 0) {
    setPerkLocked(this);
  }
  else {
    pPVar5 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,param_2);
    uVar2 = RiftUtils::GetCurrentMapEventSubType();
    cVar1 = PennyPerkMgr::IsPerkSupportedInLevelType(pPVar5,asStack_10,uVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (cVar1 == '\0') {
      setPerkDisabled(this);
    }
    else {
      resetPerkStatus(this);
    }
  }
  std::string::string(asStack_10,"PerkIcon");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  __s = (char *)FUN_0547429c(lVar6 + 0x28);
  std::string::string(asStack_18,__s);
  GetUIResource<Sexy::Image>(asStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(this + 0x130));
  HotUIImage::SetImage((HotUIImage *)pHVar3,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::setPerkSelected() */

void __thiscall AdaptorPerkInfoWidget::setPerkSelected(AdaptorPerkInfoWidget *this)

{
  long *plVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  plVar1 = *(long **)(this + 0x140);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x150);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  std::string::string(asStack_10,"UnobtainedShadow");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"StatusIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,"StatusIcon");
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aae030);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_18,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  this[0x148] = (AdaptorPerkInfoWidget)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkInfoWidget::onPerkSelected(std::string&, bool, Sexy::Point&) */

void AdaptorPerkInfoWidget::onPerkSelected(string *param_1,bool param_2,Point *param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x120));
  cVar1 = std::operator==((string *)(ulong)param_2,(string *)(lVar2 + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  setPerkSelected((AdaptorPerkInfoWidget *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::ButtonDepress(int) */

void __thiscall AdaptorPerkInfoWidget::ButtonDepress(AdaptorPerkInfoWidget *this,int param_1)

{
  LawnApp *this_00;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar1;
  PennyPerkMgr *pPVar2;
  long lVar3;
  PVZ2UIDialog *this_02;
  PrimeTypeface *pPVar4;
  char *pcVar5;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    if (this[0x148] == (AdaptorPerkInfoWidget)0x0) {
      FUN_05478178((wstring *)aRStack_58,&DAT_056f11a8,auStack_68);
      FUN_05478178((wstring *)aRStack_50,L"[PERK_DISABLED_IN_LEVEL_TYPE]",asStack_60);
      this_02 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_00,(wstring *)aRStack_58,(wstring *)aRStack_50);
      FUN_05476c50((wstring *)aRStack_50);
      nop();
      FUN_05476c50((wstring *)aRStack_58);
      nop();
      FUN_05478178((wstring *)aRStack_58,L"[REPICK_BUTTON]",asStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onRepickButtonPressed);
      Sexy::Delegate0::Delegate0<AdaptorPerkInfoWidget,void(AdaptorPerkInfoWidget::*)()>
                (aDStack_38,(wstring *)aRStack_50);
      PVZ2UIDialog::AddButton(this_02,(wstring *)aRStack_58,aDStack_38,0);
      FUN_05476c50((wstring *)aRStack_58);
      nop();
      pPVar4 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)aRStack_50,1);
      PVZ2UIDialog::SetHeaderFont(this_02,pPVar4,(Color *)aRStack_50);
      PVZ2UIDialog::SetBackgroundDarken(this_02,true,0.5);
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_UI_Rift_Penny_Tech_Warning_Panel");
    }
    else {
      this_01 = (HotUIFile *)FUN_036dd514(*(undefined8 *)(this + 0xf8));
      std::string::string((string *)aRStack_50,"PerkIcon");
      pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,(string *)aRStack_50);
      std::string::~string((string *)aRStack_50);
      nop();
      pPVar2 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
      FUN_05475d88((string *)aRStack_50,lVar3 + 0x10);
      (**(code **)(*(long *)pHVar1 + 0xd0))(aRStack_58,pHVar1);
      PennyPerkMgr::SelectPerk(pPVar2,(string *)aRStack_50,1,aRStack_58);
      std::string::~string((string *)aRStack_50);
    }
  }
  else if (param_1 == 1) {
    if (this[0x158] == (AdaptorPerkInfoWidget)0x0) {
      this[0x158] = (AdaptorPerkInfoWidget)0x1;
      std::string::string(asStack_60,"Checkbox");
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadfd8);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aae058);
      HotUIAdaptor::setButtonWidgetImage((HotUIAdaptor *)this,asStack_60,aRStack_58,aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      std::string::~string(asStack_60);
      nop();
      setIncrementedLevelText(this);
    }
    else {
      this[0x158] = (AdaptorPerkInfoWidget)0x0;
      std::string::string(asStack_60,"Checkbox");
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aae058);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadfd8);
      HotUIAdaptor::setButtonWidgetImage((HotUIAdaptor *)this,asStack_60,aRStack_58,aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      std::string::~string(asStack_60);
      nop();
      setDefaultLevelText(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorPerkInfoWidget::ButtonDepress(int) */

void __thiscall AdaptorPerkInfoWidget::ButtonDepress(AdaptorPerkInfoWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkInfoWidget::onLoadUIView() */

void __thiscall AdaptorPerkInfoWidget::onLoadUIView(AdaptorPerkInfoWidget *this)

{
  char cVar1;
  HotUIManager *this_00;
  HotUIFile *pHVar2;
  size_t in_x2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_036dd508(*(undefined8 *)(this + 0xf8));
  if (cVar1 == '\0') {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    Set8BytesTo0(asStack_40);
    if (*(int *)(this + 0x138) == 0) {
      std::string::append(asStack_40,"PerkInfoWidget",in_x2);
    }
    else if (*(int *)(this + 0x138) == 1) {
      std::string::append(asStack_40,"PerkInfoWidgetLibrary",in_x2);
    }
    this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
    pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
    HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
    std::string::~string(asStack_40);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

