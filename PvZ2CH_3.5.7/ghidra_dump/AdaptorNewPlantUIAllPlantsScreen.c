// Class: AdaptorNewPlantUIAllPlantsScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::StaticClassInit() */

void AdaptorNewPlantUIAllPlantsScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPlantUIAllPlantsScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_033c0640,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIAllPlantsScreen::StaticGetClass() */

long * AdaptorNewPlantUIAllPlantsScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPlantUIAllPlantsScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPlantUIAllPlantsScreen::GetClass() const */

long * AdaptorNewPlantUIAllPlantsScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPlantUIAllPlantsScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::isSortByTypeMenuVisible() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::isSortByTypeMenuVisible(AdaptorNewPlantUIAllPlantsScreen *this)

{
  HotUIFile *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"SortByTypeBackground");
  lVar1 = HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined1 *)(lVar1 + 0x6c));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::isSortByValueMenuVisible() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::isSortByValueMenuVisible(AdaptorNewPlantUIAllPlantsScreen *this)

{
  HotUIFile *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"SortByValueBackground");
  lVar1 = HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined1 *)(lVar1 + 0x6c));
}


/* AdaptorNewPlantUIAllPlantsScreen::onBack() */

void __thiscall AdaptorNewPlantUIAllPlantsScreen::onBack(AdaptorNewPlantUIAllPlantsScreen *this)

{
  bool bVar1;
  
  (**(code **)(*(long *)this + 0x158))(this,0);
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x120));
  if (!bVar1) {
    return;
  }
  std::
  function<void(std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>const&,NewPlantUISortValue,bool)>
  ::operator()((function<void(std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>const&,NewPlantUISortValue,bool)>
                *)(this + 0x120),this + 0x150,*(undefined4 *)(this + 0x168),this[0x148]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::onLoadUIView() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::onLoadUIView(AdaptorNewPlantUIAllPlantsScreen *this)

{
  undefined8 uVar1;
  HotUIManager *this_00;
  HotUIFile *pHVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("NewPlantUIAllPlantsScreen_%s",asStack_10,uVar1);
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::onSelectButton(NewPlantUISortType) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::onSelectButton
          (AdaptorNewPlantUIAllPlantsScreen *this,ulong param_2)

{
  byte bVar1;
  HotUISeedPacketList *pHVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("Tick%d",asStack_20);
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_20);
  bVar1 = (byte)pHVar2[0x6c] ^ 1;
  (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,bVar1);
  Sexy::StrFormat("Tick%dMBg",asStack_18,param_2 & 0xffffffff);
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_18);
  (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,bVar1);
  Sexy::StrFormat("Tick%dBg",asStack_10,param_2 & 0xffffffff);
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,bVar1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::showTouchCloseWidget(bool) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::showTouchCloseWidget
          (AdaptorNewPlantUIAllPlantsScreen *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"TouchCloseWidget");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,gLawnApp + 0x71c);
  HotUIWidget::MarkAnchorDirty((HotUIWidget *)this_01);
  (**(code **)(*(long *)this_01 + 0x158))(this_01,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::showSortByTypeMenu(bool) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::showSortByTypeMenu
          (AdaptorNewPlantUIAllPlantsScreen *this,bool param_1)

{
  HotUIFile *this_00;
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"SortByTypeBackground");
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  std::string::string(asStack_10,"SortByValueBackground");
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  showTouchCloseWidget(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIAllPlantsScreen::onSortByType() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::onSortByType(AdaptorNewPlantUIAllPlantsScreen *this)

{
  byte bVar1;
  
  bVar1 = isSortByTypeMenuVisible(this);
  showSortByTypeMenu(this,(bool)(bVar1 ^ 1));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::showSortByValueMenu(bool) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::showSortByValueMenu
          (AdaptorNewPlantUIAllPlantsScreen *this,bool param_1)

{
  HotUIFile *this_00;
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"SortByValueBackground");
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  std::string::string(asStack_10,"SortByTypeBackground");
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  showTouchCloseWidget(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIAllPlantsScreen::onNotifyPlantPacketSelected(bool, int, bool, bool) */

void AdaptorNewPlantUIAllPlantsScreen::onNotifyPlantPacketSelected
               (bool param_1,int param_2,bool param_3,bool param_4)

{
  AdaptorNewPlantUIAllPlantsScreen *this;
  
  this = (AdaptorNewPlantUIAllPlantsScreen *)(ulong)param_1;
  if (param_4) {
    showSortByTypeMenu(this,false);
    showSortByValueMenu(this,false);
    if ((param_2 & 0xffU) != 0) {
      onBack(this);
      return;
    }
  }
  return;
}


/* AdaptorNewPlantUIAllPlantsScreen::onSortByValue() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::onSortByValue(AdaptorNewPlantUIAllPlantsScreen *this)

{
  byte bVar1;
  
  bVar1 = isSortByValueMenuVisible(this);
  showSortByValueMenu(this,(bool)(bVar1 ^ 1));
  return;
}


/* AdaptorNewPlantUIAllPlantsScreen::ReplaceEntryConfigById(int, AdaptorSeedPacketEntryConfig
   const&) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::ReplaceEntryConfigById
          (AdaptorNewPlantUIAllPlantsScreen *this,int param_1,AdaptorSeedPacketEntryConfig *param_2)

{
  if (*(AdaptorSeedPacketBoard **)(this + 0x140) != (AdaptorSeedPacketBoard *)0x0) {
    AdaptorSeedPacketBoard::ReplaceEntryConfigById
              (*(AdaptorSeedPacketBoard **)(this + 0x140),param_1,param_2);
    return;
  }
  return;
}


/* AdaptorNewPlantUIAllPlantsScreen::AdaptorNewPlantUIAllPlantsScreen() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::AdaptorNewPlantUIAllPlantsScreen
          (AdaptorNewPlantUIAllPlantsScreen *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06618930;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06618c90;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06618cd8;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x120));
  *(undefined8 *)(this + 0x140) = 0;
  this[0x148] = (AdaptorNewPlantUIAllPlantsScreen)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  *(undefined4 *)(this + 0x168) = 0xffffffff;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPlantPacketSelected);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,bool,bool,Sexy::CBMemberTranslatorX<AdaptorNewPlantUIAllPlantsScreen,void(AdaptorNewPlantUIAllPlantsScreen::*)(bool,int,bool,bool)>>
            ((MessageRouter *)puVar1,Message::NotifyPlantPacketSelected,&local_40);
  return;
}


/* AdaptorNewPlantUIAllPlantsScreen::StaticNew() */

AdaptorNewPlantUIAllPlantsScreen * AdaptorNewPlantUIAllPlantsScreen::StaticNew(void)

{
  AdaptorNewPlantUIAllPlantsScreen *this;
  
  this = ::operator_new(0x170);
  AdaptorNewPlantUIAllPlantsScreen(this);
  return this;
}


/* AdaptorNewPlantUIAllPlantsScreen::SetOnBackAction(std::function<void
   (std::vector<NewPlantUISortType, std::allocator<NewPlantUISortType> > const&,
   NewPlantUISortValue, bool)>) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::SetOnBackAction
          (AdaptorNewPlantUIAllPlantsScreen *this,function *param_2)

{
  std::
  function<void(std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>const&,NewPlantUISortValue,bool)>
  ::operator=((function<void(std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>const&,NewPlantUISortValue,bool)>
               *)(this + 0x120),param_2);
  return;
}


/* AdaptorNewPlantUIAllPlantsScreen::~AdaptorNewPlantUIAllPlantsScreen() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::~AdaptorNewPlantUIAllPlantsScreen
          (AdaptorNewPlantUIAllPlantsScreen *this)

{
  long *plVar1;
  
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06618cd8;
  *(undefined ***)this = &PTR_GetClass_06618930;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06618c90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long *)(this + 0x140) != 0) {
    plVar1 = *(long **)(*(long *)(this + 0x140) + 0x20);
    (**(code **)(*plVar1 + 0x68))(plVar1);
    if (*(long **)(this + 0x140) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x140) + 0x18))();
    }
    *(undefined8 *)(this + 0x140) = 0;
  }
  std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>::~vector
            ((vector<NewPlantUISortType,std::allocator<NewPlantUISortType>> *)(this + 0x150));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPlantUIAllPlantsScreen::~AdaptorNewPlantUIAllPlantsScreen() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::~AdaptorNewPlantUIAllPlantsScreen
          (AdaptorNewPlantUIAllPlantsScreen *this)

{
  ~AdaptorNewPlantUIAllPlantsScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorNewPlantUIAllPlantsScreen::doSort(NewPlantUISortValue) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::doSort(AdaptorNewPlantUIAllPlantsScreen *this,int param_2)

{
  if (param_2 != -1) {
    AdaptorSeedPacketBoard::Sort(*(AdaptorSeedPacketBoard **)(this + 0x140),param_2,this[0x148]);
    *(int *)(this + 0x168) = param_2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::onClickSortAscendBtn() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::onClickSortAscendBtn(AdaptorNewPlantUIAllPlantsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  CachedUIResourcePtr *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"SortAscendBtn");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this[0x148] == (AdaptorNewPlantUIAllPlantsScreen)0x0) {
    this_01 = (CachedUIResourcePtr *)&DAT_06a9d880;
  }
  else {
    this_01 = (CachedUIResourcePtr *)&DAT_06a9dab8;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  HotUIButton::SetUpImage((HotUIButton *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  HotUIButton::SetDownImage((HotUIButton *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  doSort(this,*(undefined4 *)(this + 0x168));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIAllPlantsScreen::onSortAscend() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::onSortAscend(AdaptorNewPlantUIAllPlantsScreen *this)

{
  this[0x148] = (AdaptorNewPlantUIAllPlantsScreen)((byte)this[0x148] ^ 1);
  onClickSortAscendBtn(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::onSelectValueButton(NewPlantUISortValue) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::onSelectValueButton
          (AdaptorNewPlantUIAllPlantsScreen *this,int param_2)

{
  uint uVar1;
  HotUISeedPacketList *pHVar2;
  HotUISeedPacketList *pHVar3;
  ulong uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("STick%d",asStack_18,(ulong)(param_2 - 5000U));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_18);
  if (pHVar2[0x6c] == (HotUISeedPacketList)0x0) {
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
    uVar4 = 0;
    do {
      Sexy::StrFormat("STick%d",asStack_10,uVar4);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),asStack_18);
      if (pHVar3 != pHVar2) {
        (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 7);
    doSort(this,param_2 - 5000U);
    std::string::~string(asStack_18);
  }
  else {
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::setup() */

void __thiscall AdaptorNewPlantUIAllPlantsScreen::setup(AdaptorNewPlantUIAllPlantsScreen *this)

{
  uint uVar1;
  ButtonListener *pBVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  WidgetContainer *pWVar4;
  AdaptorSeedPacketBoardAllPlants *this_01;
  NewPlantUIUtils *this_02;
  ulong uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar2 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_20,"CloseBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,1000,pBVar2);
    std::string::string(asStack_20,"SortByTypeBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0x3e9,pBVar2);
    std::string::string(asStack_20,"SortByTypeConfirmButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0x3ea,pBVar2);
    std::string::string(asStack_20,"SortByValueBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0x3eb,pBVar2);
    std::string::string(asStack_20,"SortAscendBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0x3ec,pBVar2);
    std::string::string(asStack_20,"SeedPacketBoardHolder");
    pWVar4 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    this_01 = ::operator_new(0x160);
    this_02 = (NewPlantUIUtils *)
              AdaptorSeedPacketBoardAllPlants::AdaptorSeedPacketBoardAllPlants(this_01);
    *(AdaptorSeedPacketBoardAllPlants **)(this + 0x140) = this_01;
    NewPlantUIUtils::buildSeedPacketInfo(this_02);
    AdaptorSeedPacketBoard::Configure
              (*(AdaptorSeedPacketBoard **)(this + 0x140),pWVar4,
               (AdaptorSeedPacketConfig *)asStack_20,true);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x140));
    uVar9 = 0;
    do {
      Sexy::StrFormat("TypeBtn%d",asStack_40,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_40);
      HotUIButton::SetListener((HotUIButton *)pHVar3,(int)uVar9,pBVar2);
      Sexy::StrFormat("Tick%d",asStack_38,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_38);
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,1);
      Sexy::StrFormat("Tick%dMBg",asStack_30,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_30);
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,1);
      uVar1 = (int)uVar9 + 1;
      Sexy::StrFormat("Tick%dBg",asStack_28,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_28);
      pcVar7 = *(code **)(*(long *)pHVar3 + 0x158);
      (*pcVar7)(pHVar3,1);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      uVar9 = (ulong)uVar1;
    } while (uVar1 != 0x11);
    uVar9 = 0;
    do {
      Sexy::StrFormat("STypeBtn%d",asStack_30,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_30);
      iVar8 = (int)uVar9;
      HotUIButton::SetListener((HotUIButton *)pHVar3,iVar8 + 5000,pBVar2);
      Sexy::StrFormat("STick%d",asStack_28,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_28);
      uVar9 = (ulong)(iVar8 + 1U);
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,iVar8 == 6);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      iVar6 = (int)pcVar7;
    } while (iVar8 + 1U != 7);
    *(undefined4 *)(this + 0x168) = 6;
    uVar9 = NewPlantUIUtils::GetUnlockedPlantNum();
    uVar5 = NewPlantUIUtils::GetTotalPlantNum();
    std::string::string(asStack_28,"[NEW_PLANT_UI_PLANT_NUM_TEXT]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_28,(string *)L"{NUMBER1}",(wchar_t *)(uVar9 & 0xffffffff),
               iVar6);
    std::string::~string(asStack_28);
    nop();
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_30,(wstring *)L"{NUMBER2}",(wchar_t *)(uVar5 & 0xffffffff),
               iVar6);
    FUN_054766c8(asStack_30,asStack_28);
    FUN_05476c50(asStack_28);
    std::string::string(asStack_28,"PlantNumText");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_28);
    std::string::~string(asStack_28);
    nop();
    (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,asStack_30);
    std::string::string(asStack_28,"TouchCloseWidget");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_28);
    std::string::~string(asStack_28);
    nop();
    FUN_033bd378(pHVar3 + 0x210,this);
    showSortByTypeMenu(this,false);
    showSortByValueMenu(this,false);
    iVar6 = 0xb;
    do {
      iVar8 = iVar6 + 1;
      onSelectButton(this,iVar6);
      iVar6 = iVar8;
    } while (iVar8 != 0x11);
    onClickSortAscendBtn(this);
    FUN_05476c50(asStack_30);
    AdaptorSeedPacketConfig::~AdaptorSeedPacketConfig((AdaptorSeedPacketConfig *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::onLinkToUIViewCreated(AdaptorNewPlantUIAllPlantsScreen *this)

{
  uint uVar1;
  ButtonListener *pBVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  WidgetContainer *pWVar4;
  AdaptorSeedPacketBoardAllPlants *this_01;
  NewPlantUIUtils *this_02;
  ulong uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar2 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_20,"CloseBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,1000,pBVar2);
    std::string::string(asStack_20,"SortByTypeBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0x3e9,pBVar2);
    std::string::string(asStack_20,"SortByTypeConfirmButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0x3ea,pBVar2);
    std::string::string(asStack_20,"SortByValueBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0x3eb,pBVar2);
    std::string::string(asStack_20,"SortAscendBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0x3ec,pBVar2);
    std::string::string(asStack_20,"SeedPacketBoardHolder");
    pWVar4 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    this_01 = ::operator_new(0x160);
    this_02 = (NewPlantUIUtils *)
              AdaptorSeedPacketBoardAllPlants::AdaptorSeedPacketBoardAllPlants(this_01);
    *(AdaptorSeedPacketBoardAllPlants **)(this + 0x140) = this_01;
    NewPlantUIUtils::buildSeedPacketInfo(this_02);
    AdaptorSeedPacketBoard::Configure
              (*(AdaptorSeedPacketBoard **)(this + 0x140),pWVar4,
               (AdaptorSeedPacketConfig *)asStack_20,true);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x140));
    uVar9 = 0;
    do {
      Sexy::StrFormat("TypeBtn%d",asStack_40,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_40);
      HotUIButton::SetListener((HotUIButton *)pHVar3,(int)uVar9,pBVar2);
      Sexy::StrFormat("Tick%d",asStack_38,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_38);
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,1);
      Sexy::StrFormat("Tick%dMBg",asStack_30,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_30);
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,1);
      uVar1 = (int)uVar9 + 1;
      Sexy::StrFormat("Tick%dBg",asStack_28,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_28);
      pcVar7 = *(code **)(*(long *)pHVar3 + 0x158);
      (*pcVar7)(pHVar3,1);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      uVar9 = (ulong)uVar1;
    } while (uVar1 != 0x11);
    uVar9 = 0;
    do {
      Sexy::StrFormat("STypeBtn%d",asStack_30,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_30);
      iVar8 = (int)uVar9;
      HotUIButton::SetListener((HotUIButton *)pHVar3,iVar8 + 5000,pBVar2);
      Sexy::StrFormat("STick%d",asStack_28,uVar9);
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_28);
      uVar9 = (ulong)(iVar8 + 1U);
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,iVar8 == 6);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      iVar6 = (int)pcVar7;
    } while (iVar8 + 1U != 7);
    *(undefined4 *)(this + 0x168) = 6;
    uVar9 = NewPlantUIUtils::GetUnlockedPlantNum();
    uVar5 = NewPlantUIUtils::GetTotalPlantNum();
    std::string::string(asStack_28,"[NEW_PLANT_UI_PLANT_NUM_TEXT]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_28,(string *)L"{NUMBER1}",(wchar_t *)(uVar9 & 0xffffffff),
               iVar6);
    std::string::~string(asStack_28);
    nop();
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_30,(wstring *)L"{NUMBER2}",(wchar_t *)(uVar5 & 0xffffffff),
               iVar6);
    FUN_054766c8(asStack_30,asStack_28);
    FUN_05476c50(asStack_28);
    std::string::string(asStack_28,"PlantNumText");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_28);
    std::string::~string(asStack_28);
    nop();
    (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,asStack_30);
    std::string::string(asStack_28,"TouchCloseWidget");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_28);
    std::string::~string(asStack_28);
    nop();
    FUN_033bd378(pHVar3 + 0x210,this);
    showSortByTypeMenu(this,false);
    showSortByValueMenu(this,false);
    iVar6 = 0xb;
    do {
      iVar8 = iVar6 + 1;
      onSelectButton(this,iVar6);
      iVar6 = iVar8;
    } while (iVar8 != 0x11);
    onClickSortAscendBtn(this);
    FUN_05476c50(asStack_30);
    AdaptorSeedPacketConfig::~AdaptorSeedPacketConfig((AdaptorSeedPacketConfig *)asStack_20);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::getSelectTypes(std::vector<NewPlantUISortType,
   std::allocator<NewPlantUISortType> >&) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::getSelectTypes
          (AdaptorNewPlantUIAllPlantsScreen *this,vector *param_1)

{
  uint uVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  uint uVar3;
  uint local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_033bd35c(*(undefined8 *)(this + 0xf8));
  uVar3 = 0;
  do {
    while( true ) {
      Sexy::StrFormat("Tick%d",asStack_10,(ulong)uVar3);
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
      if (pHVar2[0x6c] == (HotUISeedPacketList)0x0) break;
      uVar1 = uVar3 + 1;
      local_14 = uVar3;
      std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>::push_back
                ((vector<NewPlantUISortType,std::allocator<NewPlantUISortType>> *)param_1,
                 (NewPlantUISortType *)&local_14);
      std::string::~string(asStack_10);
      uVar3 = uVar1;
      if (uVar1 == 0x11) goto LAB_033d2fd8;
    }
    uVar3 = uVar3 + 1;
    std::string::~string(asStack_10);
  } while (uVar3 != 0x11);
LAB_033d2fd8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPlantUIAllPlantsScreen::onConfirm() */

void __thiscall AdaptorNewPlantUIAllPlantsScreen::onConfirm(AdaptorNewPlantUIAllPlantsScreen *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  getSelectTypes(this,(vector *)avStack_20);
  AdaptorSeedPacketBoard::Filter(*(AdaptorSeedPacketBoard **)(this + 0x140),(vector *)avStack_20);
  std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>::operator=
            ((vector<NewPlantUISortType,std::allocator<NewPlantUISortType>> *)(this + 0x150),
             (vector *)avStack_20);
  showSortByTypeMenu(this,false);
  std::vector<NewPlantUISortType,std::allocator<NewPlantUISortType>>::~vector
            ((vector<NewPlantUISortType,std::allocator<NewPlantUISortType>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPlantUIAllPlantsScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::ButtonDepress(AdaptorNewPlantUIAllPlantsScreen *this,int param_1)

{
  if (param_1 < 5000) {
    switch(param_1) {
    case 1000:
      onBack(this);
      return;
    case 0x3e9:
      onSortByType(this);
      return;
    case 0x3ea:
      onConfirm(this);
      return;
    case 0x3eb:
      onSortByValue(this);
      return;
    case 0x3ec:
      onSortAscend(this);
      return;
    default:
      onSelectButton();
      return;
    }
  }
  onSelectValueButton();
  return;
}


/* non-virtual thunk to AdaptorNewPlantUIAllPlantsScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPlantUIAllPlantsScreen::ButtonDepress(AdaptorNewPlantUIAllPlantsScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

