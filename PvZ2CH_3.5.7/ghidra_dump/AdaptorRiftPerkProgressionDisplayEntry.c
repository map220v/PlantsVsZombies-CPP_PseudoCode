// Class: AdaptorRiftPerkProgressionDisplayEntry


/* AdaptorRiftPerkProgressionDisplayEntry::~AdaptorRiftPerkProgressionDisplayEntry() */

void __thiscall
AdaptorRiftPerkProgressionDisplayEntry::~AdaptorRiftPerkProgressionDisplayEntry
          (AdaptorRiftPerkProgressionDisplayEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_066769d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06676d38;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06676d80;
  GachaRewardUI::~GachaRewardUI((GachaRewardUI *)(this + 0x138));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRiftPerkProgressionDisplayEntry::~AdaptorRiftPerkProgressionDisplayEntry() */

void __thiscall
AdaptorRiftPerkProgressionDisplayEntry::~AdaptorRiftPerkProgressionDisplayEntry
          (AdaptorRiftPerkProgressionDisplayEntry *this)

{
  ~AdaptorRiftPerkProgressionDisplayEntry(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorRiftPerkProgressionDisplayEntry::AdaptorRiftPerkProgressionDisplayEntry() */

void __thiscall
AdaptorRiftPerkProgressionDisplayEntry::AdaptorRiftPerkProgressionDisplayEntry
          (AdaptorRiftPerkProgressionDisplayEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066769d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06676d38;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06676d80;
  RiftPerkDisplayEntryData::RiftPerkDisplayEntryData((RiftPerkDisplayEntryData *)(this + 0x138));
  return;
}


/* AdaptorRiftPerkProgressionDisplayEntry::StaticNew() */

AdaptorRiftPerkProgressionDisplayEntry * AdaptorRiftPerkProgressionDisplayEntry::StaticNew(void)

{
  AdaptorRiftPerkProgressionDisplayEntry *this;
  
  this = ::operator_new(0x158);
  AdaptorRiftPerkProgressionDisplayEntry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplayEntry::StaticClassInit() */

void AdaptorRiftPerkProgressionDisplayEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftPerkProgressionDisplayEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_0366a670,0x158,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftPerkProgressionDisplayEntry::StaticGetClass() */

long * AdaptorRiftPerkProgressionDisplayEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftPerkProgressionDisplayEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftPerkProgressionDisplayEntry::GetClass() const */

long * AdaptorRiftPerkProgressionDisplayEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftPerkProgressionDisplayEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftPerkProgressionDisplayEntry::SetData(RiftPerkDisplayEntryData const&) */

void __thiscall
AdaptorRiftPerkProgressionDisplayEntry::SetData
          (AdaptorRiftPerkProgressionDisplayEntry *this,RiftPerkDisplayEntryData *param_1)

{
  RiftPerkDisplayEntryData::operator=((RiftPerkDisplayEntryData *)(this + 0x138),param_1);
  (**(code **)(*(long *)this + 0x350))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplayEntry::SetAppearObtained(bool) */

void __thiscall
AdaptorRiftPerkProgressionDisplayEntry::SetAppearObtained
          (AdaptorRiftPerkProgressionDisplayEntry *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  code *pcVar2;
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  string asStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color(aCStack_28,0xaa,0xaa,0xaa);
  if (param_1) {
    Sexy::Color::Color((Color *)aIStack_18,1);
  }
  else {
    Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_28);
  }
  std::string::string(asStack_30,"ThresholdLabel");
  HotUIAdaptor::setLabelWidgetTextColor((HotUIAdaptor *)this,asStack_30,(Color *)aIStack_18);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UpgradeIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_30,!param_1);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"PerkBackground");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_30,param_1);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"ThresholdGlow");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_30,param_1);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"ThresholdLabel");
  Sexy::StrFormat(L"%d",awStack_38,(ulong)*(uint *)(this + 0x13c));
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_30,awStack_38);
  FUN_05476c50(awStack_38);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"LevelLabel");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_30,param_1);
  std::string::~string(asStack_30);
  nop();
  if (param_1) {
    this_00 = (HotUIFile *)FUN_0366a3e4(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_30,"LevelLabel");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_30);
    std::string::~string(asStack_30);
    nop();
    if (pHVar1 != (HotUISeedPacketList *)0x0) {
      HotUILabel::GetText();
      pcVar2 = *(code **)(*(long *)pHVar1 + 0x360);
      Sexy::StrFormat(L"%d",awStack_38,(ulong)(*(int *)(this + 0x140) + 1));
      TodReplaceString(awStack_40,L"{X}",awStack_38);
      (*pcVar2)(pHVar1,asStack_30);
      FUN_05476c50(asStack_30);
      FUN_05476c50(awStack_38);
      FUN_05476c50(awStack_40);
    }
  }
  std::string::string(asStack_30,"PerkGlowrays");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_30,false);
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplayEntry::refresh() */

void __thiscall
AdaptorRiftPerkProgressionDisplayEntry::refresh(AdaptorRiftPerkProgressionDisplayEntry *this)

{
  char cVar1;
  char *__s;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_28,this + 0x148);
  cVar1 = FUN_0547419c(asStack_28);
  if (cVar1 == '\0') {
    __s = (char *)FUN_0547429c(this + 0x150);
    std::string::string(asStack_10,__s);
    GetUIResource<Sexy::Image>(asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_18,"PerkIcon");
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
    HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_18,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    SetAppearObtained(this,(bool)this[0x138]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplayEntry::Update() */

void __thiscall
AdaptorRiftPerkProgressionDisplayEntry::Update(AdaptorRiftPerkProgressionDisplayEntry *this)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  undefined8 uVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  uVar3 = *(undefined8 *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0366a3d8(uVar3);
  if (cVar1 != '\0') {
    this_00 = (HotUIFile *)FUN_0366a3e4(uVar3);
    std::string::string(asStack_10,"PerkGlowrays");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pHVar2[0x6c] != (HotUISeedPacketList)0x0) {
      fVar4 = (float)PVZ_T();
      Curve<float>::GetAt((Curve<float> *)(this + 0x120),fVar4);
      FUN_0366a3e8(pHVar2 + 0x27c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplayEntry::PlayEntryEarnedAnimation() */

void __thiscall
AdaptorRiftPerkProgressionDisplayEntry::PlayEntryEarnedAnimation
          (AdaptorRiftPerkProgressionDisplayEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  char *pcVar2;
  float fVar3;
  Curve<float> *pCVar4;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetAppearObtained(this,true);
  this_00 = (HotUIFile *)FUN_0366a3e4(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_20,"PerkGlowrays");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,1);
  FUN_0366a3e8(0x3f000000,pHVar1 + 0x27c);
  pCVar4._0_4_ = (Curve<float> *)PVZ_T();
  fVar3 = (float)PVZ_T();
  Curve<float>::Curve(pCVar4._0_4_,fVar3 + 0.5,0x3f000000,0x3f800000,(string *)&local_20,7);
  *(undefined4 *)(this + 0x130) = local_10;
  *(undefined8 *)(this + 0x120) = local_20;
  *(undefined8 *)(this + 0x128) = uStack_18;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Rift_Perk_Update");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftPerkProgressionDisplayEntry::GetData() */

RiftPerkDisplayEntryData * AdaptorRiftPerkProgressionDisplayEntry::GetData(void)

{
  long in_x0;
  RiftPerkDisplayEntryData *in_x8;
  
  RiftPerkDisplayEntryData::RiftPerkDisplayEntryData
            (in_x8,(RiftPerkDisplayEntryData *)(in_x0 + 0x138));
  return in_x8;
}

