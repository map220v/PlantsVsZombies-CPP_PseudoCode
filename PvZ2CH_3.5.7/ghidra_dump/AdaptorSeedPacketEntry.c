// Class: AdaptorSeedPacketEntry


/* AdaptorSeedPacketEntry::ButtonDepress(int) */

void __thiscall AdaptorSeedPacketEntry::ButtonDepress(AdaptorSeedPacketEntry *this,int param_1)

{
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0x358))(this,1);
  }
  return;
}


/* non-virtual thunk to AdaptorSeedPacketEntry::ButtonDepress(int) */

void __thiscall AdaptorSeedPacketEntry::ButtonDepress(AdaptorSeedPacketEntry *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorSeedPacketEntry::~AdaptorSeedPacketEntry() */

void __thiscall AdaptorSeedPacketEntry::~AdaptorSeedPacketEntry(AdaptorSeedPacketEntry *this)

{
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06618168;
  *(undefined ***)this = &PTR_GetClass_06617db0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06618120;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  *(undefined8 *)(this + 0x160) = 0;
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorSeedPacketEntry::~AdaptorSeedPacketEntry() */

void __thiscall AdaptorSeedPacketEntry::~AdaptorSeedPacketEntry(AdaptorSeedPacketEntry *this)

{
  ~AdaptorSeedPacketEntry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::StaticClassInit() */

void AdaptorSeedPacketEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorSeedPacketEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_033bfefc,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketEntry::StaticGetClass() */

long * AdaptorSeedPacketEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorSeedPacketEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSeedPacketEntry::GetClass() const */

long * AdaptorSeedPacketEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorSeedPacketEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSeedPacketEntry::Configure(Sexy::WidgetContainer*, AdaptorSeedPacketEntryConfig const&) */

void __thiscall
AdaptorSeedPacketEntry::Configure
          (AdaptorSeedPacketEntry *this,WidgetContainer *param_1,
          AdaptorSeedPacketEntryConfig *param_2)

{
  *(WidgetContainer **)(this + 0x120) = param_1;
  AdaptorSeedPacketEntryConfig::operator=((AdaptorSeedPacketEntryConfig *)(this + 0x128),param_2);
  return;
}


/* AdaptorSeedPacketEntry::Sort(int) */

void __thiscall AdaptorSeedPacketEntry::Sort(AdaptorSeedPacketEntry *this,int param_1)

{
  long extraout_x0;
  
  if (*(long *)(this + 0x160) != 0) {
    nop();
    FUN_033bd398((float)param_1,extraout_x0 + 0x210);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::IsSelected() */

void __thiscall AdaptorSeedPacketEntry::IsSelected(AdaptorSeedPacketEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetSeedPacket");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pHVar1 == (HotUISeedPacketList *)0x0) {
    lVar2 = 0;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    lVar2 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      FUN_033bd360(pHVar1[0x211]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall AdaptorSeedPacketEntry::IsSelected(AdaptorSeedPacketEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  long lVar2;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetSeedPacket");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pHVar1 == (HotUISeedPacketList *)0x0) {
    lVar2 = 0;
    if (lStack_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    lVar2 = ___stack_chk_guard;
    if (lStack_8 == ___stack_chk_guard) {
      FUN_033bd360(pHVar1[0x211]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::GetSeedPacket() */

void __thiscall AdaptorSeedPacketEntry::GetSeedPacket(AdaptorSeedPacketEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetSeedPacket");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pHVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::unselect() */

void __thiscall AdaptorSeedPacketEntry::unselect(AdaptorSeedPacketEntry *this)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetSeedPacket");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((this_01 != (HotUISeedPacketList *)0x0) &&
     (cVar1 = FUN_033bd360(this_01[0x211]), cVar1 != '\0')) {
    HotUIWidgetSeedPacket::SetSelected((HotUIWidgetSeedPacket *)this_01,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::ShowProgressBar(bool) */

void __thiscall AdaptorSeedPacketEntry::ShowProgressBar(AdaptorSeedPacketEntry *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetSeedPacketProgressBar");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::onSetConfig() */

void __thiscall AdaptorSeedPacketEntry::onSetConfig(AdaptorSeedPacketEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  SecretGachaMgr *this_01;
  float fVar2;
  string asStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_28,"HotUIWidgetSeedPacket");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_28);
  std::string::~string(asStack_28);
  nop();
  SeedPacketInfo::SeedPacketInfo
            ((SeedPacketInfo *)asStack_28,*(int *)(this + 0x128),*(int *)(this + 300),
             *(int *)(this + 0x130),(uint)(byte)this[0x13c],*(int *)(this + 0x154),
             *(int *)(this + 0x150),*(int *)(this + 0x158),*(int *)(this + 0x144));
  HotUIWidgetSeedPacket::SetInfo((HotUIWidgetSeedPacket *)pHVar1,(SeedPacketInfo *)asStack_28);
  HotUIFile::GetEntryPointWidget(this_00);
  this_01 = (SecretGachaMgr *)HotUIWidget::GetProps();
  fVar2 = *(float *)(this_01 + 0x24);
  SecretGachaMgr::GetScreenType(this_01);
  FUN_033bd370(fVar2 * 0.007936508,pHVar1 + 0x240);
  std::string::string(asStack_28,"HotUIWidgetSeedPacketProgressBar");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_28);
  std::string::~string(asStack_28);
  nop();
  HotUIWidgetSeedPacketProgressBar::SetInfo
            ((HotUIWidgetSeedPacketProgressBar *)pHVar1,
             (AdaptorSeedPacketEntryConfig *)(this + 0x128));
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketEntry::SetConfig(AdaptorSeedPacketEntryConfig const&) */

void __thiscall
AdaptorSeedPacketEntry::SetConfig
          (AdaptorSeedPacketEntry *this,AdaptorSeedPacketEntryConfig *param_1)

{
  AdaptorSeedPacketEntryConfig::operator=((AdaptorSeedPacketEntryConfig *)(this + 0x128),param_1);
  onSetConfig(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::onNotifyPlantFavouriteChange(bool, int) */

void __thiscall
AdaptorSeedPacketEntry::onNotifyPlantFavouriteChange
          (AdaptorSeedPacketEntry *this,bool param_1,int param_2)

{
  AdaptorSeedPacketEntryConfig aAStack_40 [28];
  uint local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x128) == param_2) {
    AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
              (aAStack_40,(AdaptorSeedPacketEntryConfig *)(this + 0x128));
    local_24 = (uint)param_1;
    if (local_24 != *(uint *)(this + 0x144)) {
      SetConfig(this,aAStack_40);
    }
    AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig(aAStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::UnlockBtn(bool) */

void __thiscall AdaptorSeedPacketEntry::UnlockBtn(AdaptorSeedPacketEntry *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"SeedPacketButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x188))(pHVar1,!param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::onLinkToUIViewCreated() */

void __thiscall AdaptorSeedPacketEntry::onLinkToUIViewCreated(AdaptorSeedPacketEntry *this)

{
  HotUIFile *this_00;
  long lVar1;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  lVar1 = HotUIAdaptor::GetEntryPointWidget((HotUIAdaptor *)this);
  if (lVar1 != 0) {
    *(long *)(this + 0x160) = lVar1;
  }
  onSetConfig(this);
  std::string::string(asStack_10,"SeedPacketButton");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)this_01,0,(ButtonListener *)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSeedPacketEntry::AdaptorSeedPacketEntry() */

void __thiscall AdaptorSeedPacketEntry::AdaptorSeedPacketEntry(AdaptorSeedPacketEntry *this)

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
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_06617db0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06618120;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06618168;
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
            ((AdaptorSeedPacketEntryConfig *)(this + 0x128));
  *(undefined8 *)(this + 0x160) = 0;
  this[0x168] = (AdaptorSeedPacketEntry)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPlantView_PlantLevelUp);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorSeedPacketEntry,void(AdaptorSeedPacketEntry::*)(int)>>
            ((MessageRouter *)puVar1,Message::NewPlantView_PlantLevelUp,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPlantFavouriteChange);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<AdaptorSeedPacketEntry,void(AdaptorSeedPacketEntry::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::NotifyPlantFavouriteChange,&local_70);
  return;
}


/* AdaptorSeedPacketEntry::StaticNew() */

AdaptorSeedPacketEntry * AdaptorSeedPacketEntry::StaticNew(void)

{
  AdaptorSeedPacketEntry *this;
  
  this = ::operator_new(0x170);
  AdaptorSeedPacketEntry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::select(bool, bool) */

void __thiscall
AdaptorSeedPacketEntry::select(AdaptorSeedPacketEntry *this,bool param_1,bool param_2)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetSeedPacket");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_01 == (HotUISeedPacketList *)0x0) goto LAB_033c8678;
  cVar1 = FUN_033bd360(this_01[0x211]);
  if (cVar1 == '\0') {
    if (*(code **)(*(long *)this_01 + 0x368) == HotUIWidgetSeedPacket::CanSelect) {
      cVar1 = HotUIWidgetSeedPacket::CanSelect();
    }
    else {
      cVar1 = (**(code **)(*(long *)this_01 + 0x368))(this_01);
    }
    if (cVar1 != '\0') {
      HotUIWidgetSeedPacket::SetSelected((HotUIWidgetSeedPacket *)this_01,true);
      if (param_1) {
        MessageRouter::Post<bool,int,bool,bool,bool,int,bool,bool>
                  ((MessageRouter *)gMessageRouter,Message::NotifyPlantPacketSelected,
                   (bool)this[0x168],*(int *)(this + 0x128),true,param_2);
      }
      goto LAB_033c8678;
    }
    cVar1 = FUN_033bd360(this_01[0x211]);
    if (cVar1 == '\0') goto LAB_033c8678;
  }
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NotifyClickPlant,*(int *)(this + 0x128));
LAB_033c8678:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::onLoadUIView() */

void __thiscall AdaptorSeedPacketEntry::onLoadUIView(AdaptorSeedPacketEntry *this)

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
  this_00 = (SecretGachaMgr *)
            std::
            map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
            ::map(amStack_38);
  SecretGachaMgr::GetScreenType(this_00);
  uVar1 = FUN_0547429c(asStack_48);
  Sexy::StrFormat("SeedPacketEntry_%s",amStack_40,uVar1);
  psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIPrefab(psVar2,amStack_40,(WidgetContainer *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  std::string::~string((string *)amStack_40);
  std::string::~string(asStack_48);
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
/* AdaptorSeedPacketEntry::Filter(std::vector<NewPlantUISortType, std::allocator<NewPlantUISortType>
   > const&) */

void __thiscall AdaptorSeedPacketEntry::Filter(AdaptorSeedPacketEntry *this,vector *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  string *psVar8;
  undefined4 *puVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar13 = 0;
  bVar14 = false;
  bVar12 = false;
  bVar6 = 0;
  psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  iVar7 = PlantNameMapperServerID::GetInstance();
  bVar2 = false;
  bVar3 = false;
  NameMapperBase::GetNameForId(iVar7);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
  std::string::~string(asStack_10);
  local_20 = FUN_033c27b4(*(undefined8 *)param_1);
  local_18 = FUN_033c2804(*(undefined8 *)(param_1 + 8));
  do {
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar4) {
      pcVar11 = *(code **)(*(long *)this + 0x158);
      bVar4 = bVar13 <= bVar6 && (bVar12 <= bVar3 && bVar14 <= bVar2);
LAB_033cb338:
      (*pcVar11)(this,bVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar9 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    bVar4 = (bool)(bVar6 & bVar2 & bVar3);
    if (bVar4 != false) {
      pcVar11 = *(code **)(*(long *)this + 0x158);
      goto LAB_033cb338;
    }
    cVar5 = NewPlantUIUtils::IsProfessionValue(*puVar9);
    if (cVar5 == '\0') {
      cVar5 = NewPlantUIUtils::IsRareValue(*puVar9);
      if (cVar5 == '\0') {
        cVar5 = NewPlantUIUtils::IsTagValue(*puVar9);
        if (cVar5 != '\0') {
          bVar13 = 1;
          if (bVar6 == 0) {
            uVar1 = *puVar9;
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_28);
            bVar6 = NewPlantUIUtils::IsSamePlantTag(uVar1,asStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          }
        }
      }
      else {
        bVar14 = true;
        if (bVar2 == false) {
          bVar2 = true;
          iVar7 = NewPlantUIUtils::GetPlantRareValue(*puVar9);
          if (iVar7 != 0x13) {
            iVar7 = NewPlantUIUtils::GetPlantRareValue(*puVar9);
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            bVar2 = iVar7 == *(int *)(lVar10 + 0xd0);
          }
        }
      }
    }
    else {
      bVar12 = true;
      if (bVar3 == false) {
        bVar3 = true;
        iVar7 = NewPlantUIUtils::GetPlantProfessionValue(*puVar9);
        if (iVar7 != 6) {
          iVar7 = NewPlantUIUtils::GetPlantProfessionValue(*puVar9);
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          bVar3 = iVar7 == *(int *)(lVar10 + 0xd4);
        }
      }
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSeedPacketEntry::onNewPlantView_PlantLevelUp(int) */

void __thiscall
AdaptorSeedPacketEntry::onNewPlantView_PlantLevelUp(AdaptorSeedPacketEntry *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *extraout_x1;
  NewPlantUIUtils aNStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  AdaptorSeedPacketEntryConfig local_40 [40];
  uint local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x128) == param_1) goto LAB_033cf674;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
            (local_40,(AdaptorSeedPacketEntryConfig *)(this + 0x128));
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  NewPlantUIUtils::GetProductByName(aNStack_50,extraout_x1);
  cVar1 = canPlantLevelUp(aRStack_48,false,true);
  if (cVar1 == '\0') {
    local_18 = 0;
    if (*(int *)(this + 0x150) != 0) {
LAB_033cf650:
      SetConfig(this,local_40);
    }
  }
  else {
    local_18 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)aNStack_50);
    local_18 = local_18 & 0xff;
    if (*(uint *)(this + 0x150) != local_18) goto LAB_033cf650;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string((string *)aNStack_50);
  AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig(local_40);
LAB_033cf674:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

