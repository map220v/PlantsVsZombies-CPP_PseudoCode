// Class: AdaptorNewPVPTrainingEntry


/* AdaptorNewPVPTrainingEntry::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPTrainingEntry::ButtonDepress(AdaptorNewPVPTrainingEntry *this,int param_1)

{
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0x360))(this,1);
  }
  return;
}


/* non-virtual thunk to AdaptorNewPVPTrainingEntry::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPTrainingEntry::ButtonDepress(AdaptorNewPVPTrainingEntry *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorNewPVPTrainingEntry::~AdaptorNewPVPTrainingEntry() */

void __thiscall
AdaptorNewPVPTrainingEntry::~AdaptorNewPVPTrainingEntry(AdaptorNewPVPTrainingEntry *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06649808;
  *(undefined ***)this = &PTR_GetClass_06649490;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06649850;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  *(undefined8 *)(this + 0x150) = 0;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPTrainingEntry::~AdaptorNewPVPTrainingEntry() */

void __thiscall
AdaptorNewPVPTrainingEntry::~AdaptorNewPVPTrainingEntry(AdaptorNewPVPTrainingEntry *this)

{
  ~AdaptorNewPVPTrainingEntry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::StaticClassInit() */

void AdaptorNewPVPTrainingEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPTrainingEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_034bd4a0,0x158,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingEntry::StaticGetClass() */

long * AdaptorNewPVPTrainingEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPTrainingEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPTrainingEntry::GetClass() const */

long * AdaptorNewPVPTrainingEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPTrainingEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPTrainingEntry::Configure(Sexy::WidgetContainer*, AdaptorNewPVPTrainingEntryConfig
   const&) */

void __thiscall
AdaptorNewPVPTrainingEntry::Configure
          (AdaptorNewPVPTrainingEntry *this,WidgetContainer *param_1,
          AdaptorNewPVPTrainingEntryConfig *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(WidgetContainer **)(this + 0x120) = param_1;
  *(undefined8 *)(this + 0x128) = uVar1;
  *(undefined8 *)(this + 0x130) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x138) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x140) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::UnlockBtn(bool) */

void __thiscall AdaptorNewPVPTrainingEntry::UnlockBtn(AdaptorNewPVPTrainingEntry *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"TrainingPacketButton");
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
/* AdaptorNewPVPTrainingEntry::IsSelected() */

void __thiscall AdaptorNewPVPTrainingEntry::IsSelected(AdaptorNewPVPTrainingEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetTrainingPacket");
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
      FUN_034ad854(pHVar1[0x211]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::GetTrainingPacketAbsLocation() */

void __thiscall
AdaptorNewPVPTrainingEntry::GetTrainingPacketAbsLocation(AdaptorNewPVPTrainingEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  int local_20 [2];
  undefined1 auStack_18 [4];
  int local_14;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"HotUIWidgetTrainingPacket");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0xd0))(local_20,pHVar1);
  (**(code **)(*(long *)pHVar1 + 0xd0))(auStack_18,pHVar1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)local_20[0],(float)local_14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 & 0xffffffff,(int)(local_10 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::GetTrainingPacket() */

void __thiscall AdaptorNewPVPTrainingEntry::GetTrainingPacket(AdaptorNewPVPTrainingEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetTrainingPacket");
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
/* AdaptorNewPVPTrainingEntry::HidePacket(bool) */

void __thiscall
AdaptorNewPVPTrainingEntry::HidePacket(AdaptorNewPVPTrainingEntry *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetTrainingPacket");
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
/* AdaptorNewPVPTrainingEntry::unselect() */

void __thiscall AdaptorNewPVPTrainingEntry::unselect(AdaptorNewPVPTrainingEntry *this)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetTrainingPacket");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((this_01 != (HotUISeedPacketList *)0x0) &&
     (cVar1 = FUN_034ad854(this_01[0x211]), cVar1 != '\0')) {
    HotUIWidgetTrainingPacket::SetSelected((HotUIWidgetTrainingPacket *)this_01,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::SetState(AdaptorNewPVPTrainingEntry::EditState) */

void __thiscall
AdaptorNewPVPTrainingEntry::SetState(AdaptorNewPVPTrainingEntry *this,undefined4 param_2)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x148) = param_2;
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetTrainingProgressBar");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(int *)(this + 0x148) == 1) {
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,0);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x358))(this);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::SetConfig(AdaptorNewPVPTrainingEntryConfig const&) */

void __thiscall
AdaptorNewPVPTrainingEntry::SetConfig
          (AdaptorNewPVPTrainingEntry *this,AdaptorNewPVPTrainingEntryConfig *param_1)

{
  undefined8 uVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  SecretGachaMgr *this_01;
  float fVar3;
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x128) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x130) = uVar1;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x138) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x140) = uVar1;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_20,"HotUIWidgetTrainingPacket");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  NewPVPTrainingPacketInfo::NewPVPTrainingPacketInfo
            ((NewPVPTrainingPacketInfo *)asStack_20,*(int *)(this + 0x128),*(int *)(this + 300),
             *(int *)(this + 0x130),*(int *)(this + 0x134),(uint)(byte)this[0x140],
             *(int *)(this + 0x144));
  HotUIWidgetTrainingPacket::SetInfo
            ((HotUIWidgetTrainingPacket *)pHVar2,(NewPVPTrainingPacketInfo *)asStack_20);
  HotUIFile::GetEntryPointWidget(this_00);
  this_01 = (SecretGachaMgr *)HotUIWidget::GetProps();
  fVar3 = *(float *)(this_01 + 0x24);
  SecretGachaMgr::GetScreenType(this_01);
  FUN_034ad864(fVar3 * 0.00952381,pHVar2 + 0x25c);
  std::string::string(asStack_20,"HotUIWidgetTrainingProgressBar");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  HotUIWidgetTrainingProgressBar::SetInfo
            ((HotUIWidgetTrainingProgressBar *)pHVar2,
             (AdaptorNewPVPTrainingEntryConfig *)(this + 0x128));
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::onLinkToUIViewCreated() */

void __thiscall AdaptorNewPVPTrainingEntry::onLinkToUIViewCreated(AdaptorNewPVPTrainingEntry *this)

{
  byte bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  long lVar3;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_20,"HotUIWidgetTrainingPacket");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  NewPVPTrainingPacketInfo::NewPVPTrainingPacketInfo
            ((NewPVPTrainingPacketInfo *)asStack_20,*(int *)(this + 0x128),*(int *)(this + 300),
             *(int *)(this + 0x130),*(int *)(this + 0x134),(uint)(byte)this[0x140],
             *(int *)(this + 0x144));
  HotUIWidgetTrainingPacket::SetInfo
            ((HotUIWidgetTrainingPacket *)pHVar2,(NewPVPTrainingPacketInfo *)asStack_20);
  bVar1 = (**(code **)(*(long *)this + 0x358))(this);
  FUN_034ad84c(pHVar2 + 600,bVar1 ^ 1);
  HotUIFile::GetEntryPointWidget(this_00);
  lVar3 = HotUIWidget::GetProps();
  FUN_034ad864(*(float *)(lVar3 + 0x24) * 0.00952381,pHVar2 + 0x25c);
  std::string::string(asStack_20,"HotUIWidgetTrainingProgressBar");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  HotUIWidgetTrainingProgressBar::SetInfo
            ((HotUIWidgetTrainingProgressBar *)pHVar2,
             (AdaptorNewPVPTrainingEntryConfig *)(this + 0x128));
  std::string::string(asStack_20,"TrainingPacketButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar2,0,(ButtonListener *)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::Switch(AdaptorNewPVPTrainingEntry*) */

void __thiscall
AdaptorNewPVPTrainingEntry::Switch
          (AdaptorNewPVPTrainingEntry *this,AdaptorNewPVPTrainingEntry *param_1)

{
  LawnApp *this_00;
  int *piVar1;
  HotUIWidgetTrainingPacket *pHVar2;
  HotUIWidgetTrainingPacket *pHVar3;
  AdaptorNewPVPTrainingEntryConfig *pAVar4;
  PVZ2UIDialog *pPVar5;
  AdaptorNewPVPTrainingScreen *this_01;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (AdaptorNewPVPTrainingEntry *)0x0) {
    if (this[0x140] == (AdaptorNewPVPTrainingEntry)0x0) {
      unselect(param_1);
      unselect(this);
      (**(code **)(*(long *)this + 0x350))(this,0);
      this_00 = gLawnApp;
      FUN_05478178(awStack_60,L"[NEW_PVP_TRAINING_EDIT_NOT_UNLOCKED_TITLE]",auStack_70);
      FUN_05478178((wstring *)&local_58,L"[NEW_PVP_TRAINING_EDIT_NOT_UNLOCKED_TEXT]",auStack_68);
      pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_60,(wstring *)&local_58);
      FUN_05476c50((wstring *)&local_58);
      nop();
      FUN_05476c50(awStack_60);
      nop();
      FUN_05478178(awStack_60,L"[BUTTON_OK]",auStack_68);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)&local_58);
      PVZ2UIDialog::AddButton(pPVar5,awStack_60,aDStack_38,0);
      FUN_05476c50(awStack_60);
      nop();
    }
    else {
      piVar1 = (int *)Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)param_1);
      local_48 = *(undefined8 *)(piVar1 + 4);
      uStack_40 = *(undefined8 *)(piVar1 + 6);
      local_58 = *(undefined8 *)piVar1;
      uStack_50 = *(undefined8 *)(piVar1 + 2);
      HidePacket(param_1,false);
      HidePacket(this,false);
      this_01 = *(AdaptorNewPVPTrainingScreen **)(this + 0x150);
      pHVar2 = (HotUIWidgetTrainingPacket *)GetTrainingPacket(param_1);
      pHVar3 = (HotUIWidgetTrainingPacket *)GetTrainingPacket(this);
      AdaptorNewPVPTrainingScreen::ApplyTrainingPacketMotion(this_01,pHVar2,pHVar3);
      pAVar4 = (AdaptorNewPVPTrainingEntryConfig *)
               Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)this);
      SetConfig(param_1,pAVar4);
      unselect(param_1);
      SetConfig(this,(AdaptorNewPVPTrainingEntryConfig *)&local_58);
      if (*(AdaptorNewPVPTrainingScreen **)(this + 0x150) != (AdaptorNewPVPTrainingScreen *)0x0) {
        AdaptorNewPVPTrainingScreen::UpdateCacheBattleInfos
                  (*(AdaptorNewPVPTrainingScreen **)(this + 0x150),*(int *)pAVar4,*piVar1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingEntry::AdaptorNewPVPTrainingEntry() */

void __thiscall
AdaptorNewPVPTrainingEntry::AdaptorNewPVPTrainingEntry(AdaptorNewPVPTrainingEntry *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_06649490;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06649808;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06649850;
  AdaptorNewPVPTrainingEntryConfig::AdaptorNewPVPTrainingEntryConfig
            ((AdaptorNewPVPTrainingEntryConfig *)(this + 0x128));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTraingingPacketSelected);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,bool,Sexy::CBMemberTranslatorX<AdaptorNewPVPTrainingEntry,void(AdaptorNewPVPTrainingEntry::*)(bool,int,bool)>>
            ((MessageRouter *)puVar1,Message::NotifyTraingingPacketSelected,&local_40);
  return;
}


/* AdaptorNewPVPTrainingEntry::StaticNew() */

AdaptorNewPVPTrainingEntry * AdaptorNewPVPTrainingEntry::StaticNew(void)

{
  AdaptorNewPVPTrainingEntry *this;
  
  this = ::operator_new(0x158);
  AdaptorNewPVPTrainingEntry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::select(bool) */

void __thiscall AdaptorNewPVPTrainingEntry::select(AdaptorNewPVPTrainingEntry *this,bool param_1)

{
  undefined *this_00;
  char cVar1;
  bool bVar2;
  HotUIFile *this_01;
  HotUISeedPacketList *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetTrainingPacket");
  this_02 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((((this_02 != (HotUISeedPacketList *)0x0) &&
       (cVar1 = FUN_034ad854(this_02[0x211]), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)this_02 + 0x360))(this_02), cVar1 != '\0')) &&
     (HotUIWidgetTrainingPacket::SetSelected((HotUIWidgetTrainingPacket *)this_02,true),
     this_00 = gMessageRouter, param_1)) {
    bVar2 = (bool)(**(code **)(*(long *)this + 0x358))(this);
    MessageRouter::Post<bool,int,bool,bool,int,bool>
              ((MessageRouter *)this_00,Message::NotifyTraingingPacketSelected,bVar2,
               *(int *)(this + 0x128),true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingEntry::onLoadUIView() */

void __thiscall AdaptorNewPVPTrainingEntry::onLoadUIView(AdaptorNewPVPTrainingEntry *this)

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
  Sexy::StrFormat("NewPVPTrainingEntry_%s",amStack_40,uVar1);
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


/* AdaptorNewPVPTrainingEntry::onNotifyTraingingPacketSelected(bool, int, bool) */

void AdaptorNewPVPTrainingEntry::onNotifyTraingingPacketSelected
               (bool param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  AdaptorNewPVPTrainingEntry *this;
  AdaptorNewPVPTrainingEntry *pAVar3;
  
  this = (AdaptorNewPVPTrainingEntry *)(ulong)param_1;
  if ((param_2 & 0xffU) == 0) {
    cVar1 = IsSelected(this);
    if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x358))(this), cVar1 == '\0')) &&
        (iVar2 = FUN_034ad86c(*(undefined4 *)(this + 0x148)), iVar2 == 1)) &&
       (pAVar3 = (AdaptorNewPVPTrainingEntry *)
                 AdaptorNewPVPTrainingScreen::GetUpperSelectedEntry
                           (*(AdaptorNewPVPTrainingScreen **)(this + 0x150)),
       pAVar3 != (AdaptorNewPVPTrainingEntry *)0x0)) {
      Switch(this,pAVar3);
      return;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x358))();
    if (cVar1 != '\0') {
      iVar2 = FUN_034ad86c(*(undefined4 *)(this + 0x148));
      if ((iVar2 == 1) && (*(uint *)(this + 0x128) == (uint)param_3)) {
        AdaptorNewPVPTrainingScreen::GetUpperEntryConfigById
                  (*(AdaptorNewPVPTrainingScreen **)(this + 0x150),*(uint *)(this + 0x128));
        AdaptorNewPVPTrainingScreen::BuildUnlockedTrainingInfo((int)*(undefined8 *)(this + 0x150));
        return;
      }
    }
  }
  return;
}

