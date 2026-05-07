// Class: AdaptorNewPVPLevelUpResultScreen


/* AdaptorNewPVPLevelUpResultScreen::~AdaptorNewPVPLevelUpResultScreen() */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::~AdaptorNewPVPLevelUpResultScreen
          (AdaptorNewPVPLevelUpResultScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_0664a7e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664ab40;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664ab88;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPLevelUpResultScreen::~AdaptorNewPVPLevelUpResultScreen() */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::~AdaptorNewPVPLevelUpResultScreen
          (AdaptorNewPVPLevelUpResultScreen *this)

{
  ~AdaptorNewPVPLevelUpResultScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorNewPVPLevelUpResultScreen::SetConfig(AdaptorNewPVPTrainingEntryConfig const&) */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::SetConfig
          (AdaptorNewPVPLevelUpResultScreen *this,AdaptorNewPVPTrainingEntryConfig *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x128) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x138) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpResultScreen::StaticClassInit() */

void AdaptorNewPVPLevelUpResultScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPLevelUpResultScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_034bdf90,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPLevelUpResultScreen::StaticGetClass() */

long * AdaptorNewPVPLevelUpResultScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPLevelUpResultScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPLevelUpResultScreen::GetClass() const */

long * AdaptorNewPVPLevelUpResultScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPLevelUpResultScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPLevelUpResultScreen::AdaptorNewPVPLevelUpResultScreen() */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::AdaptorNewPVPLevelUpResultScreen
          (AdaptorNewPVPLevelUpResultScreen *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0664a7e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664ab40;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664ab88;
  AdaptorNewPVPTrainingEntryConfig::AdaptorNewPVPTrainingEntryConfig
            ((AdaptorNewPVPTrainingEntryConfig *)(this + 0x120));
  return;
}


/* AdaptorNewPVPLevelUpResultScreen::StaticNew() */

AdaptorNewPVPLevelUpResultScreen * AdaptorNewPVPLevelUpResultScreen::StaticNew(void)

{
  AdaptorNewPVPLevelUpResultScreen *this;
  
  this = ::operator_new(0x140);
  AdaptorNewPVPLevelUpResultScreen(this);
  return this;
}


/* AdaptorNewPVPLevelUpResultScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::ButtonDepress(AdaptorNewPVPLevelUpResultScreen *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  return;
}


/* non-virtual thunk to AdaptorNewPVPLevelUpResultScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::ButtonDepress(AdaptorNewPVPLevelUpResultScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpResultScreen::onLoadUIView() */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::onLoadUIView(AdaptorNewPVPLevelUpResultScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"NewPVPLevelUpResultScreen");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpResultScreen::setup() */

void __thiscall AdaptorNewPVPLevelUpResultScreen::setup(AdaptorNewPVPLevelUpResultScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"CloseButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
    std::string::string(asStack_10,"HotUIWidgetTrainingProgressBar");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
    std::string::string(asStack_10,"UnlockAnim");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"LevelUpAnim");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (*(int *)(this + 0x128) == 1) {
      (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1);
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,0);
    }
    else {
      (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
    }
    HotUIAdaptor::SetDarkenBackground((HotUIAdaptor *)this,1.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpResultScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::onLinkToUIViewCreated(AdaptorNewPVPLevelUpResultScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"CloseButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
    std::string::string(asStack_10,"HotUIWidgetTrainingProgressBar");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
    std::string::string(asStack_10,"UnlockAnim");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"LevelUpAnim");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (*(int *)(this + 0x128) == 1) {
      (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1);
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,0);
    }
    else {
      (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
    }
    HotUIAdaptor::SetDarkenBackground((HotUIAdaptor *)this,1.0);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpResultScreen::ApplyPacketInfo() */

void __thiscall
AdaptorNewPVPLevelUpResultScreen::ApplyPacketInfo(AdaptorNewPVPLevelUpResultScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  long lVar2;
  SecretGachaMgr *this_01;
  float fVar3;
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_20,"HotUIWidgetTrainingPacket");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  NewPVPTrainingPacketInfo::NewPVPTrainingPacketInfo
            ((NewPVPTrainingPacketInfo *)asStack_20,*(int *)(this + 0x120),*(int *)(this + 0x124),
             *(int *)(this + 0x128),*(int *)(this + 300),(uint)(byte)this[0x138],
             *(int *)(this + 0x13c));
  HotUIWidgetTrainingPacket::SetInfo
            ((HotUIWidgetTrainingPacket *)pHVar1,(NewPVPTrainingPacketInfo *)asStack_20);
  std::string::string(asStack_20,"NewPVPLevelUpPacket");
  HotUIFile::GetWidgetByName(this_00,asStack_20);
  lVar2 = HotUIWidget::GetProps();
  std::string::~string(asStack_20);
  nop();
  fVar3 = *(float *)(lVar2 + 0x24);
  SecretGachaMgr::GetScreenType(this_01);
  FUN_034ad864(fVar3 * 0.00952381,pHVar1 + 0x25c);
  std::string::string(asStack_20,"HotUIWidgetTrainingProgressBar");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  HotUIWidgetTrainingProgressBar::SetInfo
            ((HotUIWidgetTrainingProgressBar *)pHVar1,
             (AdaptorNewPVPTrainingEntryConfig *)(this + 0x120));
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

