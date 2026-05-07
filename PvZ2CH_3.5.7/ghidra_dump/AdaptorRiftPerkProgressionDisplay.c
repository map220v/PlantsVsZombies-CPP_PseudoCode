// Class: AdaptorRiftPerkProgressionDisplay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::StaticClassInit() */

void AdaptorRiftPerkProgressionDisplay::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftPerkProgressionDisplay");
    (*pcVar2)(plVar1,asStack_10,FUN_0366b074,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftPerkProgressionDisplay::StaticGetClass() */

long * AdaptorRiftPerkProgressionDisplay::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftPerkProgressionDisplay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftPerkProgressionDisplay::GetClass() const */

long * AdaptorRiftPerkProgressionDisplay::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftPerkProgressionDisplay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftPerkProgressionDisplay::startEntryAnimation(AdaptorRiftPerkProgressionDisplayEntry*)
    */

void __thiscall
AdaptorRiftPerkProgressionDisplay::startEntryAnimation
          (AdaptorRiftPerkProgressionDisplay *this,AdaptorRiftPerkProgressionDisplayEntry *param_1)

{
  AdaptorRiftPerkProgressionDisplayEntry::SetAppearObtained(param_1,false);
  return;
}


/* AdaptorRiftPerkProgressionDisplay::finishEntryAnimation(AdaptorRiftPerkProgressionDisplayEntry*)
    */

void __thiscall
AdaptorRiftPerkProgressionDisplay::finishEntryAnimation
          (AdaptorRiftPerkProgressionDisplay *this,AdaptorRiftPerkProgressionDisplayEntry *param_1)

{
  AdaptorRiftPerkProgressionDisplayEntry::PlayEntryEarnedAnimation(param_1);
  return;
}


/* AdaptorRiftPerkProgressionDisplay::AdaptorRiftPerkProgressionDisplay() */

void __thiscall
AdaptorRiftPerkProgressionDisplay::AdaptorRiftPerkProgressionDisplay
          (AdaptorRiftPerkProgressionDisplay *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_06676da0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06677100;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06677148;
  this[0x124] = (AdaptorRiftPerkProgressionDisplay)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  return;
}


/* AdaptorRiftPerkProgressionDisplay::StaticNew() */

AdaptorRiftPerkProgressionDisplay * AdaptorRiftPerkProgressionDisplay::StaticNew(void)

{
  AdaptorRiftPerkProgressionDisplay *this;
  
  this = ::operator_new(0x180);
  AdaptorRiftPerkProgressionDisplay(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::~AdaptorRiftPerkProgressionDisplay() */

void __thiscall
AdaptorRiftPerkProgressionDisplay::~AdaptorRiftPerkProgressionDisplay
          (AdaptorRiftPerkProgressionDisplay *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06676da0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06677100;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06677148;
  this_01 = (HotUIFile *)FUN_0366add4(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"PerkEntryList");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*(long *)pHVar2 + 0x80))(pHVar2,0,0);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::
  vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
  ::clear((vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
           *)this_00);
  std::
  vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
  ::~vector((vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
             *)(this + 0x168));
  std::
  vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
  ::~vector((vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
             *)this_00);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftPerkProgressionDisplay::~AdaptorRiftPerkProgressionDisplay() */

void __thiscall
AdaptorRiftPerkProgressionDisplay::~AdaptorRiftPerkProgressionDisplay
          (AdaptorRiftPerkProgressionDisplay *this)

{
  ~AdaptorRiftPerkProgressionDisplay(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::GetSizeOfPerkRegion() */

void AdaptorRiftPerkProgressionDisplay::GetSizeOfPerkRegion(void)

{
  ulong uVar1;
  float fVar2;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  RiftUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  RiftUtils::GetCurrentEventPerkProgression(___stack_chk_guard);
  fVar2 = (float)FUN_0366aeb4();
  uVar1 = FUN_0366ae08(local_20,local_18);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_28,fVar2 * (float)uVar1 + -2.0 + (float)(uVar1 - 1) * 100.0,0.0);
  std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::~vector
            ((vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28 & 0xffffffff,(int)(local_28 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::getWidgetXLocations() */

void AdaptorRiftPerkProgressionDisplay::getWidgetXLocations(void)

{
  bool bVar1;
  long in_x0;
  HotUISeedPacketList *pHVar2;
  long *plVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::string::string((string *)&local_10,"PerkEntryList");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                     (*(HotUIFile **)(in_x0 + 0xf8),(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = FUN_0366b224(*(undefined8 *)(pHVar2 + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(pHVar2 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    local_1c = *(int *)(pHVar2 + 0x48) + *(int *)(*plVar3 + 0x48) + *(int *)(*plVar3 + 0x50) / 2;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)in_x8,&local_1c);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::GetScrollPoint() */

void AdaptorRiftPerkProgressionDisplay::GetScrollPoint(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  ProfileMgr *this;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  Point *in_x8;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_60 [3];
  GachaRewardUI aGStack_48 [4];
  int local_44;
  GachaRewardUI aGStack_28 [4];
  int local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getWidgetXLocations();
  uVar7 = 0;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar6 = 0;
  ProfileMgr::GetCurrentProfile(this);
  uVar8 = *(undefined8 *)(in_x0 + 0x150);
  lVar3 = FUN_0366adec(uVar8,*(undefined8 *)(in_x0 + 0x158));
  iVar2 = 0;
  if (lVar3 != 0) {
    do {
      iVar6 = iVar2;
      FUN_0366adf8(uVar8,uVar7);
      AdaptorRiftPerkProgressionDisplayEntry::GetData();
      iVar2 = local_24;
      iVar1 = GridItemRenaiStatue::GetCantPlantReason();
      GachaRewardUI::~GachaRewardUI(aGStack_28);
      if (iVar2 <= iVar1) {
        if (uVar7 == 0) {
          iVar6 = 0;
        }
        else {
          FUN_0366adf8(*(undefined8 *)(in_x0 + 0x150),uVar7 - 1);
          AdaptorRiftPerkProgressionDisplayEntry::GetData();
          iVar2 = local_44;
          FUN_0366adf8(*(undefined8 *)(in_x0 + 0x150),uVar7);
          AdaptorRiftPerkProgressionDisplayEntry::GetData();
          iVar1 = local_24;
          GachaRewardUI::~GachaRewardUI(aGStack_28);
          GachaRewardUI::~GachaRewardUI(aGStack_48);
          if (iVar2 != iVar1) {
            iVar6 = (int)uVar7;
          }
        }
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(in_x0 + 0x150);
      uVar4 = FUN_0366adec(uVar8,*(undefined8 *)(in_x0 + 0x158));
      iVar2 = iVar6;
    } while (uVar7 < uVar4);
  }
  iVar2 = FUN_0366aea0();
  piVar5 = (int *)FUN_0366ae00(local_60[0],(long)iVar6);
  Sexy::Point::Point(in_x8,iVar2 + *piVar5,0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::positionProgressBar(float) */

void __thiscall
AdaptorRiftPerkProgressionDisplay::positionProgressBar
          (AdaptorRiftPerkProgressionDisplay *this,float param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  HotUIFile *this_00;
  RiftUtils *this_01;
  long lVar4;
  long lVar5;
  HotUISeedPacketList *pHVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  string asStack_50 [8];
  int local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366add4(*(undefined8 *)(this + 0xf8));
  this_01 = (RiftUtils *)getWidgetXLocations();
  RiftUtils::GetCurrentEventPerkProgression(this_01);
  cVar3 = std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::empty
                    ((vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> *)
                     &local_20);
  uVar2 = local_20;
  if (cVar3 == '\0') {
    lVar4 = FUN_0366ae08(local_20,local_18);
    lVar7 = 0;
    do {
      lVar9 = lVar7;
      if (lVar9 == lVar4) {
        std::string::string((string *)&local_48,"ProgressBar");
        pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_48);
        std::string::~string((string *)&local_48);
        nop();
        (**(code **)(*(long *)pHVar6 + 0x48))((string *)&local_48,pHVar6);
        lVar7 = FUN_0366ade0(local_38,local_30);
        piVar8 = (int *)FUN_0366ae00(local_38,lVar7 + -1);
        fVar11 = (float)*piVar8;
        iVar10 = local_48;
        goto LAB_0366bc14;
      }
      lVar5 = FUN_0366ae14(uVar2,lVar9);
      lVar7 = lVar9 + 1;
    } while ((float)*(int *)(lVar5 + 0xc) <= param_1);
    std::string::string((string *)&local_48,"ProgressBar");
    pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_48);
    std::string::~string((string *)&local_48);
    nop();
    (**(code **)(*(long *)pHVar6 + 0x48))((string *)&local_48,pHVar6);
    if ((int)lVar9 == 0) {
      fVar11 = 0.0;
      iVar10 = local_48;
    }
    else {
      lVar4 = (long)((int)lVar9 + -1);
      lVar7 = FUN_0366ae14(local_20,lVar4);
      fVar11 = (float)*(int *)(lVar7 + 0xc);
      piVar8 = (int *)FUN_0366ae00(local_38,lVar4);
      iVar10 = local_48;
      local_48 = *piVar8;
    }
    lVar7 = FUN_0366ae14(local_20,lVar9);
    iVar1 = *(int *)(lVar7 + 0xc);
    piVar8 = (int *)FUN_0366ae00(local_38,lVar9);
    fVar11 = (float)local_48 +
             ((param_1 - fVar11) / ((float)iVar1 - fVar11)) * ((float)*piVar8 - (float)local_48);
LAB_0366bc14:
    (**(code **)(*(long *)pHVar6 + 0x198))(pHVar6,iVar10,local_44,(int)fVar11,local_3c);
    HotUIWidget::MarkAnchorDirty((HotUIWidget *)pHVar6);
    (**(code **)(*(long *)pHVar6 + 0xb0))(pHVar6,this);
    std::string::string(asStack_50,"ProgressMarker");
    pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
    std::string::~string(asStack_50);
    nop();
    HotUIWidget::MarkAnchorDirty((HotUIWidget *)pHVar6);
  }
  std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::~vector
            ((vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> *)&local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::onLinkToUIViewCreated() */

void __thiscall
AdaptorRiftPerkProgressionDisplay::onLinkToUIViewCreated(AdaptorRiftPerkProgressionDisplay *this)

{
  bool bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  RiftUtils *this_01;
  GroupInfo *pGVar3;
  AdaptorRiftPerkProgressionDisplayEntry *this_02;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_88;
  undefined8 local_80;
  AdaptorRiftPerkProgressionDisplayEntry *local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  wstring awStack_68 [8];
  GroupInfo aGStack_60 [8];
  undefined4 local_58;
  int local_54;
  RtName aRStack_50 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_40 [24];
  string local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366add4(*(undefined8 *)(this + 0xf8));
  std::string::string(local_28,"PerkEntryList");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,local_28);
  std::string::~string(local_28);
  nop();
  ProfileUtils::Profile();
  this_01 = (RiftUtils *)GridItemRenaiStatue::GetCantPlantReason();
  RiftUtils::GetCurrentEventPerkProgression(this_01);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_40);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_40);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    pGVar3 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(aGStack_60,pGVar3);
    this_02 = ::operator_new(0x158);
    memset(this_02,0,0x158);
    AdaptorRiftPerkProgressionDisplayEntry::AdaptorRiftPerkProgressionDisplayEntry(this_02);
    local_78 = this_02;
    std::string::string(local_28,"RiftPerkProgressionDisplayEntry");
    HotUIAdaptor::SetParentAndFile((HotUIAdaptor *)this_02,(HotUIWidget *)pHVar2,local_28);
    std::string::~string(local_28);
    nop();
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_78);
    std::
    vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
    ::push_back((vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
                 *)(this + 0x150),&local_78);
    RiftPerkDisplayEntryData::RiftPerkDisplayEntryData((RiftPerkDisplayEntryData *)local_28);
    local_24 = local_54;
    local_20 = local_58;
    local_28[0] = (string)(local_54 <= (int)this_01);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString((string *)aGStack_60);
    Sexy::RtName::RtName(aRStack_50,awStack_68);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_70,uVar4,0x73,aRStack_50);
    Sexy::RtName::~RtName(aRStack_50);
    FUN_05476c50(awStack_68);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    thunk_FUN_05475e00(auStack_18,lVar5 + 0x10);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    thunk_FUN_05475e00(auStack_10,lVar5 + 0x28);
    AdaptorRiftPerkProgressionDisplayEntry::SetData(local_78,(RiftPerkDisplayEntryData *)local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    GachaRewardUI::~GachaRewardUI((GachaRewardUI *)local_28);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aGStack_60);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_88);
  }
  std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::~vector
            ((vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> *)avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::ShowProgressAnimation() */

void __thiscall
AdaptorRiftPerkProgressionDisplay::ShowProgressAnimation(AdaptorRiftPerkProgressionDisplay *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_00;
  long lVar5;
  AdaptorRiftPerkProgressionDisplayEntry *extraout_x0;
  ulong uVar6;
  string *extraout_x1;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  Curve<float> *pCVar10;
  Curve<int> *pCVar11;
  Sexy aSStack_58 [8];
  AdaptorRiftPerkProgressionDisplayEntry *local_50;
  GachaRewardUI aGStack_48 [4];
  int local_44;
  undefined4 local_28;
  int iStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = GridItemRenaiStatue::GetCantPlantReason();
  iVar2 = RiftUtils::GetPennyTechRewardForCurrentLevel();
  uVar8 = *(undefined8 *)(this + 0x150);
  iVar1 = iVar1 - iVar2;
  lVar5 = FUN_0366adec(uVar8,*(undefined8 *)(this + 0x158));
  if (lVar5 != 0) {
    do {
      FUN_0366adf8(uVar8,uVar7);
      nop();
      local_50 = extraout_x0;
      AdaptorRiftPerkProgressionDisplayEntry::GetData();
      if (iVar1 < local_44) {
        AdaptorRiftPerkProgressionDisplayEntry::GetData();
        iVar2 = iStack_24;
        iVar4 = GridItemRenaiStatue::GetCantPlantReason();
        GachaRewardUI::~GachaRewardUI((GachaRewardUI *)&local_28);
        GachaRewardUI::~GachaRewardUI(aGStack_48);
        if (iVar2 <= iVar4) {
          startEntryAnimation(this,local_50);
          std::
          vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
          ::push_back((vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
                       *)(this + 0x168),&local_50);
        }
      }
      else {
        GachaRewardUI::~GachaRewardUI(aGStack_48);
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(this + 0x150);
      uVar6 = FUN_0366adec(uVar8,*(undefined8 *)(this + 0x158));
    } while (uVar7 < uVar6);
  }
  pCVar10._0_4_ = (Curve<float> *)PVZ_T();
  fVar9 = (float)PVZ_T();
  iVar2 = GridItemRenaiStatue::GetCantPlantReason();
  Curve<float>::Curve(pCVar10._0_4_,fVar9 + 2.0,(float)iVar1,(float)iVar2,(DString *)&local_28,1);
  *(undefined4 *)(this + 0x138) = local_18;
  *(ulong *)(this + 0x128) = CONCAT44(iStack_24,local_28);
  *(undefined8 *)(this + 0x130) = uStack_20;
  pCVar11._0_4_ = (Curve<int> *)PVZ_T();
  fVar9 = (float)PVZ_T();
  uVar3 = GridItemRenaiStatue::GetCantPlantReason();
  Curve<int>::Curve(pCVar11._0_4_,fVar9 + 2.0,(DString *)&local_28,iVar1,uVar3,1);
  *(undefined4 *)(this + 0x14c) = local_18;
  *(ulong *)(this + 0x13c) = CONCAT44(iStack_24,local_28);
  *(undefined8 *)(this + 0x144) = uStack_20;
  std::string::string((string *)aGStack_48,"ProgressBarLabel");
  DString::DString((DString *)&local_28,iVar1);
  DString::operator_cast_to_string((DString *)&local_28);
  Sexy::UTF8StringToWString(aSStack_58,extraout_x1);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)aGStack_48,(wstring *)&local_50);
  FUN_05476c50((wstring *)&local_50);
  std::string::~string((string *)aSStack_58);
  DString::~DString((DString *)&local_28);
  std::string::~string((string *)aGStack_48);
  nop();
  this[0x124] = (AdaptorRiftPerkProgressionDisplay)0x1;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::refresh() */

void __thiscall AdaptorRiftPerkProgressionDisplay::refresh(AdaptorRiftPerkProgressionDisplay *this)

{
  int iVar1;
  ProfileMgr *this_00;
  HotUIFile *this_01;
  HotUISeedPacketList *this_02;
  string *extraout_x1;
  code *pcVar2;
  Sexy aSStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = GridItemRenaiStatue::GetCantPlantReason();
  this_01 = (HotUIFile *)FUN_0366add4(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_18,"ProgressBarLabel");
  this_02 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pcVar2 = *(code **)(*(long *)this_02 + 0x360);
  DString::DString((DString *)asStack_18,iVar1);
  DString::operator_cast_to_string((DString *)asStack_18);
  Sexy::UTF8StringToWString(aSStack_28,extraout_x1);
  (*pcVar2)(this_02,auStack_20);
  FUN_05476c50(auStack_20);
  std::string::~string((string *)aSStack_28);
  DString::~DString((DString *)asStack_18);
  HotUIWidget::MarkAnchorDirty((HotUIWidget *)this_02);
  positionProgressBar(this,(float)iVar1);
  *(int *)(this + 0x120) = iVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressionDisplay::Update() */

void __thiscall AdaptorRiftPerkProgressionDisplay::Update(AdaptorRiftPerkProgressionDisplay *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  HotUIFile *this_01;
  HotUISeedPacketList *this_02;
  undefined8 *puVar4;
  ulong uVar5;
  string *extraout_x1;
  string *extraout_x1_00;
  ulong uVar6;
  undefined8 uVar7;
  AdaptorRiftPerkProgressionDisplayEntry *pAVar8;
  code *pcVar9;
  float fVar10;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x124] == (AdaptorRiftPerkProgressionDisplay)0x0) {
    refresh(this);
  }
  else {
    this_01 = (HotUIFile *)FUN_0366add4(*(undefined8 *)(this + 0xf8));
    std::string::string((string *)&local_28,"ProgressBarLabel");
    this_02 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,(string *)&local_28);
    std::string::~string((string *)&local_28);
    nop();
    fVar10 = (float)PVZ_T();
    if (fVar10 < *(float *)(this + 300)) {
      fVar10 = (float)PVZ_T();
      fVar10 = (float)Curve<float>::GetAt((Curve<float> *)(this + 0x128),fVar10);
      positionProgressBar(this,fVar10);
      pcVar9 = *(code **)(*(long *)this_02 + 0x360);
      fVar10 = (float)PVZ_T();
      iVar2 = Curve<int>::GetAt((Curve<int> *)(this + 0x13c),fVar10);
      DString::DString((DString *)&local_28,iVar2);
      DString::operator_cast_to_string((DString *)&local_28);
      Sexy::UTF8StringToWString((Sexy *)&local_38,extraout_x1_00);
      (*pcVar9)(this_02,(exception_ptr *)&local_30);
      FUN_05476c50((exception_ptr *)&local_30);
      std::string::~string((string *)&local_38);
      DString::~DString((DString *)&local_28);
      HotUIWidget::MarkAnchorDirty((HotUIWidget *)this_02);
      uVar6 = 0;
      while( true ) {
        uVar7 = *(undefined8 *)(this + 0x168);
        uVar5 = FUN_0366adec(uVar7,*(undefined8 *)(this + 0x170));
        if (uVar5 <= uVar6) break;
        puVar4 = (undefined8 *)FUN_0366adf8(uVar7,uVar6);
        pAVar8 = (AdaptorRiftPerkProgressionDisplayEntry *)*puVar4;
        AdaptorRiftPerkProgressionDisplayEntry::GetData();
        iVar2 = local_28._4_4_;
        fVar10 = (float)PVZ_T();
        iVar3 = Curve<int>::GetAt((Curve<int> *)(this + 0x13c),fVar10);
        GachaRewardUI::~GachaRewardUI((GachaRewardUI *)&local_28);
        if (iVar3 < iVar2) {
          uVar6 = uVar6 + 1;
        }
        else {
          finishEntryAnimation(this,pAVar8);
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x168));
          local_30 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_38,uVar6);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_28,(__normal_iterator *)&local_30);
          std::
          vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
          ::erase((vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
                   *)(this + 0x168),local_28);
          uVar6 = uVar6 + 1;
        }
      }
    }
    else {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x168);
      positionProgressBar(this,*(float *)(this + 0x134));
      pcVar9 = *(code **)(*(long *)this_02 + 0x360);
      DString::DString((DString *)&local_28,*(int *)(this + 0x148));
      DString::operator_cast_to_string((DString *)&local_28);
      Sexy::UTF8StringToWString((Sexy *)&local_38,extraout_x1);
      (*pcVar9)(this_02,(exception_ptr *)&local_30);
      FUN_05476c50((exception_ptr *)&local_30);
      std::string::~string((string *)&local_38);
      DString::~DString((DString *)&local_28);
      HotUIWidget::MarkAnchorDirty((HotUIWidget *)this_02);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        finishEntryAnimation(this,(AdaptorRiftPerkProgressionDisplayEntry *)*puVar4);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::
      vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
      ::clear((vector<AdaptorRiftPerkProgressionDisplayEntry*,std::allocator<AdaptorRiftPerkProgressionDisplayEntry*>>
               *)this_00);
      this[0x124] = (AdaptorRiftPerkProgressionDisplay)0x0;
    }
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x150));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x150));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    (**(code **)(*(long *)*puVar4 + 0x108))((long *)*puVar4);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

