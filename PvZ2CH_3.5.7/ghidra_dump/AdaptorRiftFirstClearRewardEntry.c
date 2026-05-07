// Class: AdaptorRiftFirstClearRewardEntry


/* AdaptorRiftFirstClearRewardEntry::~AdaptorRiftFirstClearRewardEntry() */

void __thiscall
AdaptorRiftFirstClearRewardEntry::~AdaptorRiftFirstClearRewardEntry
          (AdaptorRiftFirstClearRewardEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_0667df30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667e290;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667e2d8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRiftFirstClearRewardEntry::~AdaptorRiftFirstClearRewardEntry() */

void __thiscall
AdaptorRiftFirstClearRewardEntry::~AdaptorRiftFirstClearRewardEntry
          (AdaptorRiftFirstClearRewardEntry *this)

{
  ~AdaptorRiftFirstClearRewardEntry(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorRiftFirstClearRewardEntry::AdaptorRiftFirstClearRewardEntry() */

void __thiscall
AdaptorRiftFirstClearRewardEntry::AdaptorRiftFirstClearRewardEntry
          (AdaptorRiftFirstClearRewardEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  this[0x128] = (AdaptorRiftFirstClearRewardEntry)0x0;
  *(undefined ***)this = &PTR_GetClass_0667df30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667e290;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667e2d8;
  return;
}


/* AdaptorRiftFirstClearRewardEntry::StaticNew() */

AdaptorRiftFirstClearRewardEntry * AdaptorRiftFirstClearRewardEntry::StaticNew(void)

{
  AdaptorRiftFirstClearRewardEntry *this;
  
  this = ::operator_new(0x138);
  AdaptorRiftFirstClearRewardEntry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftFirstClearRewardEntry::StaticClassInit() */

void AdaptorRiftFirstClearRewardEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftFirstClearRewardEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_03698638,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftFirstClearRewardEntry::StaticGetClass() */

long * AdaptorRiftFirstClearRewardEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftFirstClearRewardEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftFirstClearRewardEntry::GetClass() const */

long * AdaptorRiftFirstClearRewardEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftFirstClearRewardEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftFirstClearRewardEntry::refresh() */

void __thiscall AdaptorRiftFirstClearRewardEntry::refresh(AdaptorRiftFirstClearRewardEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  HotUISeedPacketList *pHVar2;
  CachedUIResourcePtr *this_01;
  char *__s;
  undefined1 auStack_30 [16];
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x120) == 0) goto LAB_03698964;
  this_00 = (HotUIFile *)FUN_03698488(*(undefined8 *)(this + 0xf8));
  __s = "CheckmarkShade";
  std::string::string(asStack_10,"RewardShade");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CheckmarkShade");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (this[0x130] == (AdaptorRiftFirstClearRewardEntry)0x0) {
    std::string::string(asStack_10,"GlowyRays");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    if (this[0x128] == (AdaptorRiftFirstClearRewardEntry)0x0) {
      std::string::string(asStack_10,"RewardShade");
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      goto LAB_03698b10;
    }
  }
  else {
    std::string::string(asStack_10,"FirstClearRewardBackground");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aac418);
    HotUIImageBorder::SetBorderImage((HotUIImageBorder *)pHVar1,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    __s = "GlowyRays";
LAB_03698b10:
    std::string::string(asStack_10,__s);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
  }
  std::string::string(asStack_10,"FirstClearRewardAmount");
  FUN_05478178(awStack_20,&DAT_05705950,auStack_30);
  TodReplaceNumberString(awStack_20,L"{AMT}",*(int *)(*(long *)(this + 0x120) + 0x28));
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,(wstring *)aRStack_18);
  FUN_05476c50(aRStack_18);
  FUN_05476c50(awStack_20);
  nop();
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FirstClearIcon");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FirstClearSeedPacket");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  RewardImageFactory::GetImageForReward((LevelOfTheDay_RewardItemType *)awStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,1);
  (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,0);
LAB_03698964:
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)awStack_20);
  if (*(int *)(this + 300) == 0) {
    if (this[0x128] == (AdaptorRiftFirstClearRewardEntry)0x0) {
      this_01 = (CachedUIResourcePtr *)&DAT_06aac480;
    }
    else {
      this_01 = (CachedUIResourcePtr *)&DAT_06aac450;
    }
  }
  else if (*(int *)(this + 300) == 1) {
    if (this[0x128] == (AdaptorRiftFirstClearRewardEntry)0x0) {
      this_01 = (CachedUIResourcePtr *)&DAT_06aac3f0;
    }
    else {
      this_01 = (CachedUIResourcePtr *)&DAT_06aac390;
    }
  }
  else if (this[0x128] == (AdaptorRiftFirstClearRewardEntry)0x0) {
    this_01 = (CachedUIResourcePtr *)&DAT_06aac340;
  }
  else {
    this_01 = (CachedUIResourcePtr *)&DAT_06aac368;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)awStack_20,(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string((string *)aRStack_18,"DifficultyIcon");
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)awStack_20);
  HotUIAdaptor::setImageWidgetImage
            ((HotUIAdaptor *)this,(string *)aRStack_18,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::string(asStack_10,"ClearCheckmark");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,(bool)this[0x128]);
  std::string::~string(asStack_10);
  nop();
  if (this[0x128] != (AdaptorRiftFirstClearRewardEntry)0x0) {
    std::string::string((string *)aRStack_18,"FirstClearRewardBackground");
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aac3b8);
    HotUIAdaptor::setImageWidgetImage
              ((HotUIAdaptor *)this,(string *)aRStack_18,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_10
              );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AdaptorRiftFirstClearRewardEntry::SetReward(LevelOfTheDay_RewardItemType*, bool, int, bool) */

void __thiscall
AdaptorRiftFirstClearRewardEntry::SetReward
          (AdaptorRiftFirstClearRewardEntry *this,LevelOfTheDay_RewardItemType *param_1,bool param_2
          ,int param_3,bool param_4)

{
  *(LevelOfTheDay_RewardItemType **)(this + 0x120) = param_1;
  this[0x128] = (AdaptorRiftFirstClearRewardEntry)param_2;
  *(int *)(this + 300) = param_3;
  this[0x130] = (AdaptorRiftFirstClearRewardEntry)param_4;
  refresh(this);
  return;
}

