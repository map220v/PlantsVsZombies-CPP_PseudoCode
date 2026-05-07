// Class: AdaptorZPSMeter


/* AdaptorZPSMeter::AdaptorZPSMeter() */

void __thiscall AdaptorZPSMeter::AdaptorZPSMeter(AdaptorZPSMeter *this)

{
  undefined4 uVar1;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0667db60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667dec0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667df08;
  uVar1 = PVZ_EOT();
  this[0x144] = (AdaptorZPSMeter)0x0;
  this[0x145] = (AdaptorZPSMeter)0x0;
  this[0x146] = (AdaptorZPSMeter)0x0;
  *(undefined4 *)(this + 0x148) = 0;
  this[0x14c] = (AdaptorZPSMeter)0x0;
  *(undefined4 *)(this + 0x128) = uVar1;
  return;
}


/* AdaptorZPSMeter::~AdaptorZPSMeter() */

void __thiscall AdaptorZPSMeter::~AdaptorZPSMeter(AdaptorZPSMeter *this)

{
  *(undefined ***)this = &PTR_GetClass_0667db60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667dec0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667df08;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorZPSMeter::~AdaptorZPSMeter() */

void __thiscall AdaptorZPSMeter::~AdaptorZPSMeter(AdaptorZPSMeter *this)

{
  ~AdaptorZPSMeter(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorZPSMeter::StaticNew() */

AdaptorZPSMeter * AdaptorZPSMeter::StaticNew(void)

{
  AdaptorZPSMeter *this;
  
  this = ::operator_new(0x150);
  AdaptorZPSMeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::StaticClassInit() */

void AdaptorZPSMeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorZPSMeter");
    (*pcVar2)(plVar1,asStack_10,FUN_03696ef8,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorZPSMeter::StaticGetClass() */

long * AdaptorZPSMeter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorZPSMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorZPSMeter::GetClass() const */

long * AdaptorZPSMeter::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorZPSMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorZPSMeter::convertBetweenCurveValueAndZPS(int, ZPSMeterAnimationDirection) */

AdaptorZPSMeter * __thiscall
AdaptorZPSMeter::convertBetweenCurveValueAndZPS(AdaptorZPSMeter *this,uint param_1,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = RiftUtils::GetZombossUnlockingThreshold();
      this = (AdaptorZPSMeter *)(ulong)(iVar1 - param_1);
    }
    return this;
  }
  return (AdaptorZPSMeter *)(ulong)param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::updateZombossRefreshTime() */

void __thiscall AdaptorZPSMeter::updateZombossRefreshTime(AdaptorZPSMeter *this)

{
  StringHelper *this_00;
  long extraout_x1;
  undefined1 auStack_38 [16];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StringHelper *)RiftUtils::GetCurrentZombossTimeRemaining();
  FUN_05476574(awStack_28);
  if (((int)this_00 < 0xe10) && ((int)this_00 < 0x3c)) {
    StringHelper::ConvertTimeToHMSString(this_00,extraout_x1);
  }
  else {
    StringHelper::ConvertTimeToHMString(this_00,extraout_x1);
  }
  FUN_054766c8(awStack_28,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::string(asStack_10,"ZombossReturnTime");
  FUN_05478178(awStack_20,L"[RIFT_ZOMBOSS_REFRESH_TIME]",auStack_38);
  TodReplaceString(awStack_20,L"{TIME}",awStack_28);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  nop();
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::GetLeftPosition() */

void __thiscall AdaptorZPSMeter::GetLeftPosition(AdaptorZPSMeter *this)

{
  bool bVar1;
  HotUIFile *this_00;
  RtObject *this_01;
  float fVar2;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03696890(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_10,"ZPSMeter");
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if ((this_01 == (RtObject *)0x0) || (bVar1 = Sexy::RtObject::IsA<HotUIAnim>(this_01), !bVar1)) {
    fVar2 = 0.0;
  }
  else {
    (**(code **)(*(long *)this_01 + 0xd0))((string *)local_10,this_01);
    fVar2 = (float)local_10[0];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::AnimateZPSChange(int, int, ZPSMeterAnimationDirection) */

void __thiscall
AdaptorZPSMeter::AnimateZPSChange
          (AdaptorZPSMeter *this,undefined8 param_2_00,undefined4 param_2,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = convertBetweenCurveValueAndZPS(this,param_2_00,param_4);
  uVar3 = convertBetweenCurveValueAndZPS(this,param_2,param_4);
  fVar4 = (float)PVZ_T();
  Curve<int>::Curve((Curve<int> *)(fVar4 + 2.5),fVar4 + 2.5 + 0.5,&local_20,uVar2,uVar3,1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x130) = local_20;
  *(undefined8 *)(this + 0x138) = uStack_18;
  *(undefined4 *)(this + 0x140) = local_10;
  this[0x144] = (AdaptorZPSMeter)0x1;
  *(undefined4 *)(this + 0x148) = param_4;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorZPSMeter::setRigToZPSFrame(int) */

void __thiscall AdaptorZPSMeter::setRigToZPSFrame(AdaptorZPSMeter *this,int param_1)

{
  int iVar1;
  PopAnimRig *this_00;
  float fVar2;
  
  iVar1 = RiftUtils::GetZombossUnlockingThreshold();
  PopAnimRig::SetCurrentFrameInAnimation
            (*(PopAnimRig **)(this + 0x120),(float)(int)(((float)param_1 / (float)iVar1) * 100.0));
  this_00 = *(PopAnimRig **)(this + 0x120);
  fVar2 = (float)PVZ_T();
  PopAnimRig::UpdateAnim(this_00,fVar2,0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::onFightAnimStopped(std::string const&) */

void AdaptorZPSMeter::onFightAnimStopped(string *param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  wstring awStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"ZPSLabel");
  TodStringTranslate(L"[RIFT_ZOMBOSS_FIGHT]");
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)param_1,asStack_40,awStack_48);
  FUN_05476c50(awStack_48);
  std::string::~string(asStack_40);
  nop();
  if (param_1[0x144] == (string)0x0) {
    std::string::string(asStack_40,"FightZombossButton");
    HotUIAdaptor::setWidgetDisabled((HotUIAdaptor *)param_1,asStack_40,false);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"ZPSLabel");
    TodStringTranslate(L"[RIFT_ZOMBOSS_READY]");
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)param_1,asStack_40,awStack_48);
    FUN_05476c50(awStack_48);
    std::string::~string(asStack_40);
    nop();
  }
  pPVar1 = *(PopAnimRig **)(param_1 + 0x120);
  std::string::string(asStack_40,"anim_fightloop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  fVar2 = (float)PVZ_T();
  *(float *)(param_1 + 300) = fVar2 + 6.0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::ButtonDepress(int) */

void __thiscall AdaptorZPSMeter::ButtonDepress(AdaptorZPSMeter *this,int param_1)

{
  long lVar1;
  RtObject *this_00;
  WorldMap_EventBar *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == 1) && (this[0x14c] == (AdaptorZPSMeter)0x0)) {
    std::string::string(asStack_18,"UIWorldMapEventBar");
    lVar1 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar1 == 0) {
      std::string::~string(asStack_18);
      nop();
    }
    else {
      std::string::string(asStack_10,"UIWorldMapEventBar");
      this_00 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
      this_01 = Sexy::RtObject::Cast<WorldMap_EventBar>(this_00);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (this_01 != (WorldMap_EventBar *)0x0) {
        WorldMap_EventBar::TryStartRiftZombossLevel(this_01);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorZPSMeter::ButtonDepress(int) */

void __thiscall AdaptorZPSMeter::ButtonDepress(AdaptorZPSMeter *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::onLinkToUIViewCreated() */

void __thiscall AdaptorZPSMeter::onLinkToUIViewCreated(AdaptorZPSMeter *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HotUIFile *pHVar4;
  HotUISeedPacketList *pHVar5;
  long *plVar6;
  long lVar7;
  PopAnimRig *pPVar8;
  code *pcVar9;
  float fVar10;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar4 = (HotUIFile *)FUN_03696890(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_50,"ZPSMeter");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar4,asStack_50);
  std::string::~string(asStack_50);
  nop();
  plVar6 = (long *)FUN_0369689c(*(undefined8 *)(pHVar5 + 0x238));
  lVar7 = *plVar6;
  *(long **)(this + 0x120) = plVar6;
  pcVar9 = *(code **)(lVar7 + 0x78);
  std::string::string(asStack_58,"anim_idle");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
  (*pcVar9)(plVar6,asStack_58,0,0,asStack_50);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_50);
  std::string::~string(asStack_58);
  nop();
  pPVar8 = *(PopAnimRig **)(this + 0x120);
  std::string::string(asStack_50,"meter_out_to_lunch");
  PopAnimRig::SetLayerVisibility(pPVar8,asStack_50,false);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"ZombossLockedLabel");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_50,false);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"ZombossReturnTime");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_50,false);
  std::string::~string(asStack_50);
  nop();
  cVar1 = RiftUtils::TestZombossCompletionFlag();
  if (cVar1 == '\0') {
    cVar1 = RiftUtils::IsZombossUnlocked();
    if (cVar1 != '\0') {
      pHVar4 = (HotUIFile *)FUN_03696890(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"FightZombossButton");
      pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar4,asStack_50);
      std::string::~string(asStack_50);
      nop();
      HotUIButton::SetListener((HotUIButton *)pHVar5,1,(ButtonListener *)(this + 0xd8));
      cVar1 = RiftUtils::ShouldAutoPopZombossLevelSelect();
      if (cVar1 == '\0') {
        fVar10 = (float)PVZ_T();
        pcVar9 = *(code **)(*(long *)pHVar5 + 0x188);
        *(float *)(this + 0x128) = fVar10 + 0.5;
        (*pcVar9)(pHVar5,1);
      }
      else {
        pPVar8 = *(PopAnimRig **)(this + 0x120);
        std::string::string(asStack_50,"anim_fightloop");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar8,asStack_50,0,aDStack_38);
        std::string::~string(asStack_50);
        nop();
        fVar10 = (float)PVZ_T();
        *(float *)(this + 300) = fVar10 + 6.0;
        std::string::string(asStack_50,"ZPSLabel");
        TodStringTranslate(L"[RIFT_ZOMBOSS_FIGHT]");
        HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_50,(wstring *)asStack_58);
        FUN_05476c50(asStack_58);
        std::string::~string(asStack_50);
        nop();
      }
    }
  }
  else {
    ProfileUtils::Profile();
    uVar2 = RiftUtils::GetZombossUnlockingThreshold();
    uVar3 = RiftUtils::GetCurrentZPS();
    AnimateZPSChange(this,uVar2,uVar3,1);
    plVar6 = *(long **)(this + 0x120);
    pcVar9 = *(code **)(*plVar6 + 0x78);
    std::string::string(asStack_58,"anim_end");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    (*pcVar9)(plVar6,asStack_58,0,0,asStack_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::Update() */

void __thiscall AdaptorZPSMeter::Update(AdaptorZPSMeter *this)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  WorldMap *this_00;
  UIWidget *this_01;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  PopAnimRig *pPVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auStack_78 [16];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  if (this_00 == (WorldMap *)0x0) {
    if (*(long *)(pLVar1 + 0x9f0) == 0) goto LAB_03698004;
  }
  else {
    cVar2 = WorldMap::IsInState(this_00,4);
    if ((cVar2 == '\0') && (cVar2 = WorldMap::IsInState(this_00,5), cVar2 == '\0')) {
LAB_03698004:
      (**(code **)(*(long *)this + 0x158))(this);
      this[0x146] = (AdaptorZPSMeter)0x1;
    }
    else {
      std::string::string(asStack_50,"UIWorldMapEventBar");
      this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
      std::string::~string(asStack_50);
      nop();
      if ((this_01 != (UIWidget *)0x0) && (cVar2 = UIWidget::IsVisible(this_01), cVar2 != '\0')) {
        (**(code **)(*(long *)this + 0x158))(this,1);
        this[0x146] = (AdaptorZPSMeter)0x0;
      }
    }
  }
  lVar5 = RiftUtils::GetCurrentZombossTimeRemaining();
  bVar3 = 0 < lVar5;
  pPVar8 = *(PopAnimRig **)(this + 0x120);
  if (bVar3) {
    std::string::string(asStack_50,"meter_out_to_lunch");
    PopAnimRig::SetLayerVisibility(pPVar8,asStack_50,true);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"ZombossLockedLabel");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_50,true);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"ZombossReturnTime");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_50,true);
    std::string::~string(asStack_50);
    nop();
    updateZombossRefreshTime(this);
  }
  else {
    std::string::string(asStack_50,"meter_out_to_lunch");
    PopAnimRig::SetLayerVisibility(pPVar8,asStack_50,bVar3);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"ZombossLockedLabel");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_50,bVar3);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"ZombossReturnTime");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_50,bVar3);
    std::string::~string(asStack_50);
    nop();
  }
  cVar2 = FUN_03696884(*(undefined8 *)(this + 0xf8));
  if (cVar2 == '\0') goto LAB_03697da8;
  if (this[0x144] == (AdaptorZPSMeter)0x0) {
    fVar9 = (float)PVZ_T();
    if ((*(float *)(this + 0x128) <= fVar9) && (!bVar3)) {
      pPVar8 = *(PopAnimRig **)(this + 0x120);
      std::string::string(asStack_58,"anim_fight");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onFightAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<AdaptorZPSMeter,void(AdaptorZPSMeter::*)(std::string_const&)>(aDStack_38,asStack_50)
      ;
      PopAnimRig::PlayAndStop(pPVar8,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      if (this[0x146] == (AdaptorZPSMeter)0x0) {
        pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar7,"Play_UI_Rift_Zomboss_Meter_Full");
      }
      uVar11 = PVZ_EOT();
      *(undefined4 *)(this + 0x128) = uVar11;
      std::string::string(asStack_58,"ZPSLabel");
      FUN_05478178(asStack_50,&DAT_056f11a8,awStack_60);
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_58,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      cVar2 = RiftUtils::ShouldAutoPopZombossLevelSelect();
      if (cVar2 != '\0') {
        PopAnimRig::AdvanceToLastFrameInAnimation(*(PopAnimRig **)(this + 0x120));
      }
    }
    PopAnimRig::CalcPlayingAnimLabelName();
    bVar3 = std::operator==(asStack_50,"anim_fightloop");
    if ((bVar3) && (fVar9 = (float)PVZ_T(), *(float *)(this + 300) <= fVar9)) {
      std::string::~string(asStack_50);
      pPVar8 = *(PopAnimRig **)(this + 0x120);
      std::string::string(asStack_58,"anim_fight");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onFightAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<AdaptorZPSMeter,void(AdaptorZPSMeter::*)(std::string_const&)>(aDStack_38,asStack_50)
      ;
      PopAnimRig::PlayAndStop(pPVar8,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      if (this[0x146] == (AdaptorZPSMeter)0x0) {
        pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar7,"Play_UI_Rift_Zomboss_Meter_Full");
      }
      std::string::string(asStack_58,"ZPSLabel");
      FUN_05478178(asStack_50,&DAT_056f11a8,awStack_60);
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_58,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      goto LAB_03697da8;
    }
    std::string::~string(asStack_50);
    PopAnimRig::CalcPlayingAnimLabelName();
    bVar3 = std::operator==(asStack_58,"anim_fightloop");
    if (bVar3) {
      std::string::~string(asStack_58);
    }
    else {
      PopAnimRig::CalcPlayingAnimLabelName();
      bVar3 = std::operator==(asStack_50,"anim_fight");
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      if (!bVar3) {
        ProfileUtils::Profile();
        iVar4 = RiftUtils::GetCurrentZPS();
        setRigToZPSFrame(this,iVar4);
        std::string::string(asStack_50,"ZPSLabel");
        FUN_05478178(awStack_60,L"[RIFT_ZPS_LABEL]",auStack_78);
        uVar6 = RiftUtils::GetCurrentZPS();
        goto LAB_0369814c;
      }
    }
    pPVar8 = *(PopAnimRig **)(this + 0x120);
    fVar9 = (float)PVZ_T();
    fVar10 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar8,fVar9,fVar10);
  }
  else {
    fVar9 = (float)PVZ_T();
    if (*(float *)(this + 0x134) <= fVar9) {
      if (this[0x145] != (AdaptorZPSMeter)0x0) {
        pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar7,"Play_UI_Rift_Zomboss_Meter_End");
        this[0x145] = (AdaptorZPSMeter)0x0;
      }
      cVar2 = RiftUtils::TestZombossCompletionFlag();
      if (cVar2 != '\0') {
        RiftUtils::ClearZombossCompletionFlag();
      }
      uVar6 = convertBetweenCurveValueAndZPS
                        (this,*(undefined4 *)(this + 0x13c),*(undefined4 *)(this + 0x148));
      setRigToZPSFrame(this,*(int *)(this + 0x13c));
      std::string::string(asStack_50,"ZPSLabel");
      FUN_05478178(awStack_60,L"[RIFT_ZPS_LABEL]",auStack_78);
      Sexy::StrFormat(L"%d",awStack_68,uVar6 & 0xffffffff);
      TodReplaceString(awStack_60,L"{ZPS_AMT}",awStack_68);
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_50,(wstring *)asStack_58);
      FUN_05476c50(asStack_58);
      FUN_05476c50(awStack_68);
      FUN_05476c50(awStack_60);
      nop();
      std::string::~string(asStack_50);
      nop();
      cVar2 = RiftUtils::IsZombossUnlocked();
      if (cVar2 != '\0') {
        uVar11 = PVZ_T();
        this[0x144] = (AdaptorZPSMeter)0x0;
        *(undefined4 *)(this + 0x128) = uVar11;
      }
      goto LAB_03697da8;
    }
    fVar9 = (float)PVZ_T();
    if (((*(float *)(this + 0x130) <= fVar9) && (this[0x145] == (AdaptorZPSMeter)0x0)) &&
       (this[0x146] == (AdaptorZPSMeter)0x0)) {
      pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar7,"Play_UI_Rift_Zomboss_Meter_Start");
      this[0x145] = (AdaptorZPSMeter)0x1;
    }
    fVar9 = (float)PVZ_T();
    uVar11 = Curve<int>::GetAt((Curve<int> *)(this + 0x130),fVar9);
    uVar6 = convertBetweenCurveValueAndZPS(this,uVar11,*(undefined4 *)(this + 0x148));
    fVar9 = (float)PVZ_T();
    iVar4 = Curve<int>::GetAt((Curve<int> *)(this + 0x130),fVar9);
    setRigToZPSFrame(this,iVar4);
    std::string::string(asStack_50,"ZPSLabel");
    FUN_05478178(awStack_60,L"[RIFT_ZPS_LABEL]",auStack_78);
LAB_0369814c:
    Sexy::StrFormat(L"%d",awStack_68,uVar6 & 0xffffffff);
    TodReplaceString(awStack_60,L"{ZPS_AMT}",awStack_68);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_50,(wstring *)asStack_58);
    FUN_05476c50(asStack_58);
    FUN_05476c50(awStack_68);
    FUN_05476c50(awStack_60);
    nop();
    std::string::~string(asStack_50);
    nop();
  }
LAB_03697da8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZPSMeter::onLoadUIView() */

void __thiscall AdaptorZPSMeter::onLoadUIView(AdaptorZPSMeter *this)

{
  char cVar1;
  HotUIManager *this_00;
  HotUIFile *pHVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  cVar1 = FUN_03696884(*(undefined8 *)(this + 0xf8));
  if (cVar1 == '\0') {
    this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
    std::string::string(asStack_40,"RiftZPSMeter");
    pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
    std::string::~string(asStack_40);
    nop();
    HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  }
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

