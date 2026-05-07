// Class: AdaptorJoustWinStreakDisplayEntry


/* AdaptorJoustWinStreakDisplayEntry::HandleSuperFSMAction_WinstreakEntryState(WinstreakEntryState,
   StateAction) */

void AdaptorJoustWinStreakDisplayEntry::HandleSuperFSMAction_WinstreakEntryState(void)

{
  return;
}


/* AdaptorJoustWinStreakDisplayEntry::setState_WinstreakEntryState(WinstreakEntryState) */

void __thiscall
AdaptorJoustWinStreakDisplayEntry::setState_WinstreakEntryState
          (AdaptorJoustWinStreakDisplayEntry *this,int param_2)

{
  if (*(int *)(this + 0x1a8) != -1) {
    (**(code **)(*(long *)this + 0x350))(this,*(int *)(this + 0x1a8),3);
  }
  *(int *)(this + 0x1a8) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0x350))(this,param_2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplayEntry::StaticClassInit() */

void AdaptorJoustWinStreakDisplayEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustWinStreakDisplayEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_038764f8,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustWinStreakDisplayEntry::StaticGetClass() */

long * AdaptorJoustWinStreakDisplayEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustWinStreakDisplayEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustWinStreakDisplayEntry::GetClass() const */

long * AdaptorJoustWinStreakDisplayEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustWinStreakDisplayEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustWinStreakDisplayEntry::AdaptorJoustWinStreakDisplayEntry() */

void __thiscall
AdaptorJoustWinStreakDisplayEntry::AdaptorJoustWinStreakDisplayEntry
          (AdaptorJoustWinStreakDisplayEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066ad790;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066adaf8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066adb40;
  JoustWinStreakDisplayEntryData::JoustWinStreakDisplayEntryData
            ((JoustWinStreakDisplayEntryData *)(this + 0x120));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x178));
  return;
}


/* AdaptorJoustWinStreakDisplayEntry::StaticNew() */

AdaptorJoustWinStreakDisplayEntry * AdaptorJoustWinStreakDisplayEntry::StaticNew(void)

{
  AdaptorJoustWinStreakDisplayEntry *this;
  
  this = ::operator_new(0x1b0);
  AdaptorJoustWinStreakDisplayEntry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplayEntry::HandleStateMachine_WinstreakEntryState(WinstreakEntryState,
   StateAction) */

void __thiscall
AdaptorJoustWinStreakDisplayEntry::HandleStateMachine_WinstreakEntryState
          (AdaptorJoustWinStreakDisplayEntry *this,uint param_2,int param_3)

{
  long *plVar1;
  CurveSequence<Sexy::SexyVector2> *pCVar2;
  HotUIFile *pHVar3;
  HotUISeedPacketList *pHVar4;
  HotUISeedPacketList *pHVar5;
  HotUISeedPacketList *pHVar6;
  float fVar7;
  undefined4 uVar8;
  FastCurve aFStack_90 [12];
  int local_84;
  string asStack_80 [24];
  Delegate2<WinstreakEntryState,StateAction> aDStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_WinstreakEntryState);
  Sexy::Delegate2<WinstreakEntryState,StateAction>::
  Delegate2<AdaptorJoustWinStreakDisplayEntry,void(AdaptorJoustWinStreakDisplayEntry::*)(WinstreakEntryState,StateAction)>
            (aDStack_68,asStack_80);
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar8 = PVZ_RealT();
      *(undefined4 *)(this + 0x170) = uVar8;
      if (this[0x121] != (AdaptorJoustWinStreakDisplayEntry)0x0) {
        pHVar3 = (HotUIFile *)FUN_038762c8(*(undefined8 *)(this + 0xf8));
        std::string::string(asStack_80,"FadeOutReward");
        pCVar2 = (CurveSequence<Sexy::SexyVector2> *)
                 CurveSequenceCollection<Sexy::SexyVector2>::Get
                           ((CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x178),asStack_80)
        ;
        std::string::~string(asStack_80);
        nop();
        fVar7 = *(float *)(this + 0x170);
        Sexy::FastCurve::SetOutRange((FastCurve *)asStack_80,255.0,255.0);
        CurveSequence<Sexy::SexyVector2>::StartSequence
                  (pCVar2,fVar7 + 1.0,(SexyVector2 *)asStack_80);
        Sexy::FastCurve::SetOutRange(aFStack_90,255.0,255.0);
        Sexy::FastCurve::SetOutRange((FastCurve *)asStack_80,0.0,0.0);
        CurveSequence<Sexy::SexyVector2>::AddCurve
                  ((CurveSequence<Sexy::SexyVector2> *)0x3f000000,pCVar2,aFStack_90,asStack_80,1);
        std::string::string(asStack_80,"ScaleInCheck");
        pCVar2 = (CurveSequence<Sexy::SexyVector2> *)
                 CurveSequenceCollection<Sexy::SexyVector2>::Get
                           ((CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x178),asStack_80)
        ;
        std::string::~string(asStack_80);
        nop();
        fVar7 = *(float *)(this + 0x170);
        Sexy::FastCurve::SetOutRange((FastCurve *)asStack_80,0.0,0.0);
        CurveSequence<Sexy::SexyVector2>::StartSequence
                  (pCVar2,fVar7 + 1.0,(SexyVector2 *)asStack_80);
        Sexy::FastCurve::SetOutRange(aFStack_90,0.0,0.0);
        Sexy::FastCurve::SetOutRange((FastCurve *)asStack_80,1.5,1.5);
        CurveSequence<Sexy::SexyVector2>::AddCurve
                  ((CurveSequence<Sexy::SexyVector2> *)0x3f000000,pCVar2,aFStack_90,asStack_80,1);
        std::string::string(asStack_80,"Checkmark");
        pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,asStack_80);
        std::string::~string(asStack_80);
        nop();
        HotUIAnim::SetScaleOverride((HotUIAnim *)pHVar4,0.0);
      }
      goto LAB_03876768;
    }
    if (param_3 == 0) goto LAB_03876768;
    if (param_3 == 2) {
      fVar7 = (float)PVZ_RealT();
      if (1.0 < fVar7 - *(float *)(this + 0x170)) {
        setState_WinstreakEntryState(this,1);
      }
      goto LAB_03876768;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 1) {
      uVar8 = PVZ_RealT();
      *(undefined4 *)(this + 0x170) = uVar8;
      if (this[0x121] != (AdaptorJoustWinStreakDisplayEntry)0x0) {
        pHVar3 = (HotUIFile *)FUN_038762c8(*(undefined8 *)(this + 0xf8));
        std::string::string(asStack_80,"CheckmarkContainer");
        plVar1 = (long *)HotUIFile::GetWidgetByName(pHVar3,asStack_80);
        std::string::~string(asStack_80);
        nop();
        std::string::string(asStack_80,"Checkmark");
        pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,asStack_80);
        std::string::~string(asStack_80);
        nop();
        (**(code **)(*plVar1 + 0x158))(plVar1,1);
        std::string::string(asStack_80,"check_anim");
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
        HotUIAnim::PlayAndStop((HotUIAnim *)pHVar4,asStack_80,0,aDStack_38);
        std::string::~string(asStack_80);
        nop();
      }
      goto LAB_03876768;
    }
    if (param_3 == 0) goto LAB_03876768;
    if (param_3 == 2) {
      if (this[0x121] != (AdaptorJoustWinStreakDisplayEntry)0x0) {
        std::string::string(asStack_80,"FadeOutReward");
        pCVar2 = (CurveSequence<Sexy::SexyVector2> *)
                 CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x178));
        fVar7 = (float)PVZ_RealT();
        fVar7 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar2,fVar7);
        std::string::~string(asStack_80);
        nop();
        Sexy::Color::Color((Color *)aFStack_90,1);
        local_84 = (int)fVar7;
        pHVar3 = (HotUIFile *)FUN_038762c8(*(undefined8 *)(this + 0xf8));
        std::string::string(asStack_80,"RewardImage");
        pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,asStack_80);
        std::string::~string(asStack_80);
        nop();
        std::string::string(asStack_80,"RewardSeedPacket");
        pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,asStack_80);
        std::string::~string(asStack_80);
        nop();
        std::string::string(asStack_80,"RewardTextLabel");
        pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,asStack_80);
        std::string::~string(asStack_80);
        nop();
        Sexy::Insets::Insets((Insets *)asStack_80,(Insets *)aFStack_90);
        HotUIImage::SetImageColor((HotUIImage *)pHVar4,asStack_80);
        Sexy::Insets::Insets((Insets *)asStack_80,(Insets *)aFStack_90);
        HotUISeedPacket::SetPacketColor((HotUISeedPacket *)pHVar5,asStack_80);
        (**(code **)(*(long *)pHVar6 + 0x368))(pHVar6,(Insets *)aFStack_90);
        std::string::string(asStack_80,"ScaleInCheck");
        pCVar2 = (CurveSequence<Sexy::SexyVector2> *)
                 CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x178));
        fVar7 = (float)PVZ_RealT();
        fVar7 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar2,fVar7);
        std::string::~string(asStack_80);
        nop();
        std::string::string(asStack_80,"Checkmark");
        pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,asStack_80);
        std::string::~string(asStack_80);
        nop();
        HotUIAnim::SetScaleOverride((HotUIAnim *)pHVar4,fVar7);
      }
      fVar7 = (float)PVZ_RealT();
      if (0.5 < fVar7 - *(float *)(this + 0x170)) {
        setState_WinstreakEntryState(this,2);
      }
      goto LAB_03876768;
    }
  }
  else if ((param_2 == 0xffffffff) && (param_3 == 0)) goto LAB_03876768;
  Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_68,(char *)(ulong)param_2);
LAB_03876768:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplayEntry::refresh() */

void __thiscall AdaptorJoustWinStreakDisplayEntry::refresh(AdaptorJoustWinStreakDisplayEntry *this)

{
  uint uVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  HotUISeedPacketList *pHVar3;
  long *plVar4;
  long *plVar5;
  HotUIWidget *this_01;
  code *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  LevelOfTheDay_RewardItemType aLStack_68 [8];
  undefined1 auStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [40];
  uint local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  setState_WinstreakEntryState(this,0);
  uVar1 = *(uint *)(this + 0x124);
  this_00 = (HotUIFile *)FUN_038762c8(*(undefined8 *)(this + 0xf8));
  Sexy::StrFormat(L"%d",auStack_60,(ulong)uVar1);
  std::string::string(asStack_48,"WinNumberLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
  std::string::~string(asStack_48);
  nop();
  (**(code **)(*(long *)pHVar2 + 0x360))(pHVar2,auStack_60);
  if ((int)uVar1 < 0x32) {
    if ((this[0x120] == (AdaptorJoustWinStreakDisplayEntry)0x0) ||
       (this[0x121] != (AdaptorJoustWinStreakDisplayEntry)0x0)) {
      uVar7 = 0;
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48,
                 (LevelOfTheDay_RewardItemType *)(this + 0x130));
      uVar8 = 1;
      std::string::string(asStack_50,"RewardImage");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"RewardSeedPacket");
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      RewardImageFactory::GetImageForReward(aLStack_68);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_58);
      HotUIImage::SetImage((HotUIImage *)pHVar2,asStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
      std::string::string(asStack_50,"RewardTextLabel");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      pcVar6 = *(code **)(*(long *)pHVar2 + 0x360);
      Sexy::StrFormat(L"x%d",asStack_50,(ulong)local_20);
      (*pcVar6)(pHVar2,asStack_50);
      FUN_05476c50(asStack_50);
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1 < (int)local_20);
      std::string::string(asStack_50,"WinNumberLabel");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      (**(code **)(*(long *)pHVar2 + 0x360))(pHVar2,auStack_60);
      goto LAB_03876f44;
    }
  }
  else {
    pcVar6 = *(code **)(*(long *)pHVar2 + 0x360);
    FUN_05478178(asStack_48,&DAT_056f11a8,asStack_50);
    (*pcVar6)(pHVar2,asStack_48);
    FUN_05476c50(asStack_48);
    nop();
    if (this[0x120] == (AdaptorJoustWinStreakDisplayEntry)0x0) {
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48,
                 (LevelOfTheDay_RewardItemType *)(this + 0x130));
      uVar7 = 0;
      uVar8 = 0;
      goto LAB_03876f44;
    }
    if (this[0x121] != (AdaptorJoustWinStreakDisplayEntry)0x0) {
      uVar7 = 0;
      uVar8 = 0;
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48,
                 (LevelOfTheDay_RewardItemType *)(this + 0x130));
      goto LAB_03876f44;
    }
  }
  uVar8 = 0;
  uVar7 = 1;
  LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)asStack_48,
             (LevelOfTheDay_RewardItemType *)(this + 0x130));
LAB_03876f44:
  std::string::string(asStack_50,"RewardsRoot");
  plVar4 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"CheckmarkContainer");
  plVar5 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  (**(code **)(*plVar5 + 0x158))(plVar5,uVar7);
  (**(code **)(*plVar4 + 0x158))(plVar4,uVar8);
  this_01 = (HotUIWidget *)HotUIFile::GetEntryPointWidget(this_00);
  HotUIWidget::MarkLayoutDirty(this_01);
  LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)asStack_48);
  FUN_05476c50(auStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDisplayEntry::onLinkToUIViewCreated() */

void __thiscall
AdaptorJoustWinStreakDisplayEntry::onLinkToUIViewCreated(AdaptorJoustWinStreakDisplayEntry *this)

{
  uint uVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  HotUISeedPacketList *pHVar3;
  long *plVar4;
  long *plVar5;
  HotUIWidget *this_01;
  code *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  LevelOfTheDay_RewardItemType aLStack_68 [8];
  undefined1 auStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [40];
  uint uStack_20;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  setState_WinstreakEntryState(this,0);
  uVar1 = *(uint *)(this + 0x124);
  this_00 = (HotUIFile *)FUN_038762c8(*(undefined8 *)(this + 0xf8));
  Sexy::StrFormat(L"%d",auStack_60,(ulong)uVar1);
  std::string::string(asStack_48,"WinNumberLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_48);
  std::string::~string(asStack_48);
  nop();
  (**(code **)(*(long *)pHVar2 + 0x360))(pHVar2,auStack_60);
  if ((int)uVar1 < 0x32) {
    if ((this[0x120] == (AdaptorJoustWinStreakDisplayEntry)0x0) ||
       (this[0x121] != (AdaptorJoustWinStreakDisplayEntry)0x0)) {
      uVar7 = 0;
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48,
                 (LevelOfTheDay_RewardItemType *)(this + 0x130));
      uVar8 = 1;
      std::string::string(asStack_50,"RewardImage");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"RewardSeedPacket");
      pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      RewardImageFactory::GetImageForReward(aLStack_68);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_58);
      HotUIImage::SetImage((HotUIImage *)pHVar2,asStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
      std::string::string(asStack_50,"RewardTextLabel");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      pcVar6 = *(code **)(*(long *)pHVar2 + 0x360);
      Sexy::StrFormat(L"x%d",asStack_50,(ulong)uStack_20);
      (*pcVar6)(pHVar2,asStack_50);
      FUN_05476c50(asStack_50);
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1 < (int)uStack_20);
      std::string::string(asStack_50,"WinNumberLabel");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
      std::string::~string(asStack_50);
      nop();
      (**(code **)(*(long *)pHVar2 + 0x360))(pHVar2,auStack_60);
      goto LAB_03876f44;
    }
  }
  else {
    pcVar6 = *(code **)(*(long *)pHVar2 + 0x360);
    FUN_05478178(asStack_48,&DAT_056f11a8,asStack_50);
    (*pcVar6)(pHVar2,asStack_48);
    FUN_05476c50(asStack_48);
    nop();
    if (this[0x120] == (AdaptorJoustWinStreakDisplayEntry)0x0) {
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48,
                 (LevelOfTheDay_RewardItemType *)(this + 0x130));
      uVar7 = 0;
      uVar8 = 0;
      goto LAB_03876f44;
    }
    if (this[0x121] != (AdaptorJoustWinStreakDisplayEntry)0x0) {
      uVar7 = 0;
      uVar8 = 0;
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
                ((LevelOfTheDay_RewardItemType *)asStack_48,
                 (LevelOfTheDay_RewardItemType *)(this + 0x130));
      goto LAB_03876f44;
    }
  }
  uVar8 = 0;
  uVar7 = 1;
  LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)asStack_48,
             (LevelOfTheDay_RewardItemType *)(this + 0x130));
LAB_03876f44:
  std::string::string(asStack_50,"RewardsRoot");
  plVar4 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"CheckmarkContainer");
  plVar5 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  (**(code **)(*plVar5 + 0x158))(plVar5,uVar7);
  (**(code **)(*plVar4 + 0x158))(plVar4,uVar8);
  this_01 = (HotUIWidget *)HotUIFile::GetEntryPointWidget(this_00);
  HotUIWidget::MarkLayoutDirty(this_01);
  LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)asStack_48);
  FUN_05476c50(auStack_60);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustWinStreakDisplayEntry::SetData(JoustWinStreakDisplayEntryData const&) */

void __thiscall
AdaptorJoustWinStreakDisplayEntry::SetData
          (AdaptorJoustWinStreakDisplayEntry *this,JoustWinStreakDisplayEntryData *param_1)

{
  JoustWinStreakDisplayEntryData::operator=
            ((JoustWinStreakDisplayEntryData *)(this + 0x120),param_1);
  refresh(this);
  return;
}


/* AdaptorJoustWinStreakDisplayEntry::~AdaptorJoustWinStreakDisplayEntry() */

void __thiscall
AdaptorJoustWinStreakDisplayEntry::~AdaptorJoustWinStreakDisplayEntry
          (AdaptorJoustWinStreakDisplayEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_066ad790;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066adaf8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066adb40;
  CurveSequenceCollection<Sexy::SexyVector2>::~CurveSequenceCollection
            ((CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x178));
  JoustWinStreakDisplayEntryData::~JoustWinStreakDisplayEntryData
            ((JoustWinStreakDisplayEntryData *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustWinStreakDisplayEntry::~AdaptorJoustWinStreakDisplayEntry() */

void __thiscall
AdaptorJoustWinStreakDisplayEntry::~AdaptorJoustWinStreakDisplayEntry
          (AdaptorJoustWinStreakDisplayEntry *this)

{
  ~AdaptorJoustWinStreakDisplayEntry(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorJoustWinStreakDisplayEntry::Update() */

void __thiscall AdaptorJoustWinStreakDisplayEntry::Update(AdaptorJoustWinStreakDisplayEntry *this)

{
  undefined4 uVar1;
  
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  uVar1 = FUN_038762d8(*(undefined4 *)(this + 0x1a8));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,2);
  return;
}

