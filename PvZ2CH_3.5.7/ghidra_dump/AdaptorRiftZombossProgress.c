// Class: AdaptorRiftZombossProgress


/* AdaptorRiftZombossProgress::AdaptorRiftZombossProgress() */

void __thiscall
AdaptorRiftZombossProgress::AdaptorRiftZombossProgress(AdaptorRiftZombossProgress *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0667d150;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667d4b0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667d4f8;
  AdaptorRiftZombossProgressParams::AdaptorRiftZombossProgressParams
            ((AdaptorRiftZombossProgressParams *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  this[0x228] = (AdaptorRiftZombossProgress)0x0;
  return;
}


/* AdaptorRiftZombossProgress::SetParams(AdaptorRiftZombossProgressParams&) */

void __thiscall
AdaptorRiftZombossProgress::SetParams
          (AdaptorRiftZombossProgress *this,AdaptorRiftZombossProgressParams *param_1)

{
  AdaptorRiftZombossProgressParams::operator=
            ((AdaptorRiftZombossProgressParams *)(this + 0x120),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossProgress::StaticClassInit() */

void AdaptorRiftZombossProgress::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftZombossProgress");
    (*pcVar2)(plVar1,asStack_10,FUN_03691d24,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftZombossProgress::StaticGetClass() */

long * AdaptorRiftZombossProgress::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftZombossProgress",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftZombossProgress::GetClass() const */

long * AdaptorRiftZombossProgress::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftZombossProgress",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossProgress::clearRewardList() */

void __thiscall AdaptorRiftZombossProgress::clearRewardList(AdaptorRiftZombossProgress *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  HotUIFile *this_01;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1f8);
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_03691a2c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"RewardList");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  std::string::~string((string *)&local_10);
  nop();
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
  std::vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>>::clear
            ((vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>> *)this_00)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftZombossProgress::StaticNew() */

AdaptorRiftZombossProgress * AdaptorRiftZombossProgress::StaticNew(void)

{
  AdaptorRiftZombossProgress *this;
  
  this = ::operator_new(0x230);
  AdaptorRiftZombossProgress(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossProgress::updateRewardList() */

void __thiscall AdaptorRiftZombossProgress::updateRewardList(AdaptorRiftZombossProgress *this)

{
  HotUISeedPacketList *pHVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  Curve<int> *this_00;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  string asStack_28 [16];
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"RewardList");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_28);
  std::string::~string(asStack_28);
  nop();
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x1f8);
    uVar3 = FUN_03691a4c(uVar6,*(undefined8 *)(this + 0x200));
    if (uVar3 <= uVar5) break;
    FUN_03691a58(uVar6,uVar5);
    AdaptorMultiPurchaseItem::GetConfig();
    fVar7 = (float)PVZ_T();
    lVar4 = FUN_03691a60(*(undefined8 *)(this + 0x210),uVar5);
    if (*(float *)(lVar4 + 4) <= fVar7) {
      local_18 = *(undefined4 *)(lVar4 + 0xc);
      this[0x228] = (AdaptorRiftZombossProgress)0x0;
    }
    else {
      fVar7 = (float)PVZ_T();
      this_00 = (Curve<int> *)FUN_03691a60(*(undefined8 *)(this + 0x210),uVar5);
      if (*(float *)this_00 <= fVar7) {
        fVar7 = (float)PVZ_T();
        local_18 = Curve<int>::GetAt(this_00,fVar7);
      }
    }
    puVar2 = (undefined8 *)FUN_03691a58(*(undefined8 *)(this + 0x1f8),uVar5);
    AdaptorMultiPurchaseItem::Configure
              ((AdaptorMultiPurchaseItem *)*puVar2,(WidgetContainer *)pHVar1,
               (AdaptorMultiPurchaseItemConfig *)asStack_28);
    PakRecord::~PakRecord((PakRecord *)asStack_28);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftZombossProgress::doAccept() */

void __thiscall AdaptorRiftZombossProgress::doAccept(AdaptorRiftZombossProgress *this)

{
  int iVar1;
  RtInvokeVariant *pRVar2;
  
  pRVar2 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x130));
  if (pRVar2 != (RtInvokeVariant *)0x0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
  }
  iVar1 = FUN_03691a10(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 400));
  if (iVar1 != 0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x178));
  }
  AdaptorJoustLeagueInfoScreen::onClose((AdaptorJoustLeagueInfoScreen *)this);
  return;
}


/* AdaptorRiftZombossProgress::ButtonDepress(int) */

void __thiscall
AdaptorRiftZombossProgress::ButtonDepress(AdaptorRiftZombossProgress *this,int param_1)

{
  if ((param_1 != 0) && (param_1 != 1)) {
    return;
  }
  doAccept(this);
  return;
}


/* non-virtual thunk to AdaptorRiftZombossProgress::ButtonDepress(int) */

void __thiscall
AdaptorRiftZombossProgress::ButtonDepress(AdaptorRiftZombossProgress *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorRiftZombossProgress::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorRiftZombossProgress::OnBackButtonPressed(AdaptorRiftZombossProgress *this)

{
  doAccept(this);
  return 1;
}


/* AdaptorRiftZombossProgress::~AdaptorRiftZombossProgress() */

void __thiscall
AdaptorRiftZombossProgress::~AdaptorRiftZombossProgress(AdaptorRiftZombossProgress *this)

{
  *(undefined ***)this = &PTR_GetClass_0667d150;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667d4b0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667d4f8;
  clearRewardList(this);
  std::vector<Curve<int>,std::allocator<Curve<int>>>::clear
            ((vector<Curve<int>,std::allocator<Curve<int>>> *)(this + 0x210));
  std::vector<Curve<int>,std::allocator<Curve<int>>>::~vector
            ((vector<Curve<int>,std::allocator<Curve<int>>> *)(this + 0x210));
  std::vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>>::~vector
            ((vector<AdaptorMultiPurchaseItem*,std::allocator<AdaptorMultiPurchaseItem*>> *)
             (this + 0x1f8));
  AdaptorRiftZombossProgressParams::~AdaptorRiftZombossProgressParams
            ((AdaptorRiftZombossProgressParams *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRiftZombossProgress::~AdaptorRiftZombossProgress() */

void __thiscall
AdaptorRiftZombossProgress::~AdaptorRiftZombossProgress(AdaptorRiftZombossProgress *this)

{
  ~AdaptorRiftZombossProgress(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossProgress::onLoadUIView() */

void __thiscall AdaptorRiftZombossProgress::onLoadUIView(AdaptorRiftZombossProgress *this)

{
  char cVar1;
  undefined8 uVar2;
  string *this_00;
  HotUIManager *this_01;
  HotUIFile *pHVar3;
  char *pcVar4;
  bool *__n;
  undefined1 auVar5 [16];
  bool local_63;
  bool local_62;
  bool local_61;
  bool abStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  undefined1 local_38 [3] [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<bool,std::allocator<bool>>::empty
                    ((vector<bool,std::allocator<bool>> *)(this + 0x1a8));
  if (cVar1 == '\0') {
    local_38[0] = FUN_03691afc(*(undefined8 *)(this + 0x1a8),0);
    local_63 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    auVar5 = FUN_03691afc(*(undefined8 *)(this + 0x1a8),1);
    local_38[0] = auVar5;
    local_62 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
    auVar5 = FUN_03691afc(*(undefined8 *)(this + 0x1a8),2);
    local_38[0] = auVar5;
    local_61 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_38);
  }
  else {
    RiftUtils::GetZombossWinLossData(0,abStack_60,&local_63,(int *)asStack_48);
    RiftUtils::GetZombossWinLossData(1,(bool *)asStack_58,&local_62,(int *)asStack_40);
    RiftUtils::GetZombossWinLossData(2,(bool *)asStack_50,&local_61,(int *)local_38);
  }
  if (local_63 == false) {
    std::string::string(asStack_58,"POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_X_MARK_ANIM");
    nop();
  }
  else {
    std::string::string(asStack_58,"POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_CHECK_MARK_ANIM");
    nop();
  }
  if (local_62 == false) {
    std::string::string(asStack_50,"POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_X_MARK_ANIM");
    nop();
  }
  else {
    std::string::string(asStack_50,"POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_CHECK_MARK_ANIM");
    nop();
  }
  if (local_61 == false) {
    pcVar4 = "POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_X_MARK_ANIM";
  }
  else {
    pcVar4 = "POPANIM_UI_PENNY_PURSUITS_ZOMBOSS_ENDSCREEN_CHECK_MARK_ANIM";
  }
  __n = abStack_60;
  std::string::string(asStack_48,pcVar4);
  nop();
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)local_38);
  std::string::string(asStack_40,"$PROGRESS_ANIM1");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)local_38,asStack_40);
  thunk_FUN_05475e00(uVar2,asStack_58);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"$PROGRESS_ANIM2");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)local_38,asStack_40);
  thunk_FUN_05475e00(uVar2,asStack_50);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"$PROGRESS_ANIM3");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)local_38,asStack_40);
  thunk_FUN_05475e00(uVar2,asStack_48);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"$PRIZETITLE");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)local_38,asStack_40);
  if (this[0x128] == (AdaptorRiftZombossProgress)0x0) {
    pcVar4 = "[RIFT_ZOMBOSS_PROGRESS_PRIZE_LOSS]";
  }
  else {
    pcVar4 = "[RIFT_ZOMBOSS_PROGRESS_PRIZE_WIN]";
  }
  std::string::append(this_00,pcVar4,(size_t)__n);
  std::string::~string(asStack_40);
  nop();
  this_01 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"RiftZombossProgress");
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIFile(this_01,asStack_40,(map *)local_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)local_38);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossProgress::addRewardList() */

void AdaptorRiftZombossProgress::addRewardList(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long in_x0;
  HotUISeedPacketList *pHVar6;
  vector *pvVar7;
  undefined8 uVar8;
  int *piVar9;
  long *plVar10;
  int in_w3;
  ulong uVar11;
  undefined8 local_70;
  undefined8 local_68;
  GeneralAwardSet aGStack_58 [32];
  GeneralAwardSet aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GeneralAwardSet::GeneralAwardSet(aGStack_58);
  if (*(byte *)(in_x0 + 0x12a) == 0) {
    RiftUtils::CalcZombossTotalAwardSet
              ((RiftUtils *)(ulong)*(uint *)(in_x0 + 0x120),(uint)*(byte *)(in_x0 + 0x128),
               SUB41(*(undefined4 *)(in_x0 + 0x124),0),in_w3);
    GeneralAwardSet::operator=(aGStack_58,aGStack_38);
    GeneralAwardSet::~GeneralAwardSet(aGStack_38);
  }
  else {
    RiftUtils::CalcCurrentZombossEventEndPrize((RiftUtils *)(ulong)*(byte *)(in_x0 + 0x12a));
    RiftUtils::ConvertZombossRewardSetToAwardSet((RiftZombossRewardDifficultyEntry *)&local_70);
    GeneralAwardSet::operator=(aGStack_58,aGStack_38);
    GeneralAwardSet::~GeneralAwardSet(aGStack_38);
    std::
    _Destroy<std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>>
              ((vector *)&local_70);
  }
  std::string::string((string *)aGStack_38,"RewardList");
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                     (*(HotUIFile **)(in_x0 + 0xf8),(string *)aGStack_38);
  std::string::~string((string *)aGStack_38);
  nop();
  pvVar7 = (vector *)RiftUtils::GetLevelEndBonusRewards();
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_70,pvVar7);
  uVar8 = local_70;
  iVar1 = FUN_03691a38(local_70,local_68);
  iVar2 = FUN_03691a28(*(undefined4 *)(pHVar6 + 0x50));
  iVar3 = FUN_03691b58(0x50);
  iVar4 = FUN_03691b58(0x1e);
  uVar5 = FUN_03691b58(0x2d);
  if (0 < iVar1) {
    uVar11 = 0;
    iVar2 = (iVar2 + (1 - iVar1) * (iVar3 + iVar4)) / 2;
    while( true ) {
      piVar9 = (int *)FUN_03691a44(uVar8,uVar11);
      plVar10 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar9,piVar9[1],true);
      (**(code **)(*plVar10 + 0x198))(plVar10,iVar2,uVar5,iVar3,iVar3);
      (**(code **)(*(long *)pHVar6 + 0x60))(pHVar6,plVar10);
      piVar9 = (int *)FUN_03691a44(local_70,uVar11);
      ProfileChangeItemAmount(*piVar9,piVar9[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aGStack_38);
      if (uVar11 == iVar1 - 1) break;
      uVar11 = uVar11 + 1;
      uVar8 = local_70;
      iVar2 = iVar2 + iVar3 + iVar4;
    }
  }
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_70);
  GeneralAwardSet::~GeneralAwardSet(aGStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftZombossProgress::onLinkToUIViewCreated() */

void __thiscall AdaptorRiftZombossProgress::onLinkToUIViewCreated(AdaptorRiftZombossProgress *this)

{
  char *pcVar1;
  char cVar2;
  HotUIFile *this_00;
  Widget *pWVar3;
  HotUISeedPacketList *pHVar4;
  HotUISeedPacketList *pHVar5;
  HotUISeedPacketList *pHVar6;
  wchar_t *pwVar7;
  undefined1 auVar8 [16];
  bool local_82;
  bool local_81;
  bool local_80;
  bool local_7f;
  bool local_7e;
  bool local_7d;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [8];
  undefined1 local_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03691a2c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_48,"RiftZombossProgress");
  pWVar3 = (Widget *)HotUIFile::GetWidgetByName(this_00,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),pWVar3);
  std::string::string((string *)local_48,"AcceptButton");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,(string *)local_48,1,false,false);
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"BackButton");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,(string *)local_48,0,false,false);
  std::string::~string((string *)local_48);
  nop();
  cVar2 = std::vector<bool,std::allocator<bool>>::empty
                    ((vector<bool,std::allocator<bool>> *)(this + 0x1a8));
  if (cVar2 == '\0') {
    local_48 = FUN_03691afc(*(undefined8 *)(this + 0x1d0),0);
    local_7f = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
    auVar8 = FUN_03691afc(*(undefined8 *)(this + 0x1d0),1);
    local_48 = auVar8;
    local_7e = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
    auVar8 = FUN_03691afc(*(undefined8 *)(this + 0x1d0),2);
    local_48 = auVar8;
    local_7d = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
    auVar8 = FUN_03691afc(*(undefined8 *)(this + 0x1a8),0);
    local_48 = auVar8;
    local_82 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
    auVar8 = FUN_03691afc(*(undefined8 *)(this + 0x1a8),1);
    local_48 = auVar8;
    local_81 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
    auVar8 = FUN_03691afc(*(undefined8 *)(this + 0x1a8),2);
    local_48 = auVar8;
    local_80 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
  }
  else {
    RiftUtils::GetZombossWinLossData(0,&local_7f,&local_82,&iStack_7c);
    RiftUtils::GetZombossWinLossData(1,&local_7e,&local_81,&iStack_78);
    RiftUtils::GetZombossWinLossData(2,&local_7d,&local_80,&iStack_74);
  }
  std::string::string((string *)local_48,"ProgressBox1");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)local_48,local_82);
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"ProgressBox2");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)local_48,local_81);
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"ProgressBox3");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)local_48,local_80);
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"ProgressBox1_X");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)local_48,(bool)(local_82 ^ 1));
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"ProgressBox2_X");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)local_48,(bool)(local_81 ^ 1));
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"ProgressBox3_X");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)local_48,(bool)(local_80 ^ 1));
  std::string::~string((string *)local_48);
  nop();
  pcVar1 = "ProgressBox1";
  if (local_82 == false) {
    pcVar1 = "ProgressBox1_X";
  }
  std::string::string((string *)local_48,pcVar1);
  pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  pcVar1 = "ProgressBox2";
  if (local_81 == false) {
    pcVar1 = "ProgressBox2_X";
  }
  std::string::string((string *)local_48,pcVar1);
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  pcVar1 = "ProgressBox3";
  if (local_80 == false) {
    pcVar1 = "ProgressBox3_X";
  }
  std::string::string((string *)local_48,pcVar1);
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  std::string::string(asStack_70,"CHECK_ANIM");
  nop();
  std::string::string(asStack_68,"CHECK_ANIM");
  nop();
  std::string::string(asStack_60,"CHECK_ANIM");
  nop();
  ZombossProgressDisplayData::GetNumWins();
  FUN_05476574(awStack_58);
  if (this[0x129] == (AdaptorRiftZombossProgress)0x0) {
    FUN_054772c4(awStack_58,L"[RIFT_ZOMBOSS_PROGRESS_TITLE]");
  }
  else {
    if (((local_82 == false) && (local_81 == false)) && (local_80 == false)) {
      pwVar7 = L"[RIFT_ZOMBOSS_PROGRESS_LOSE_TITLE]";
    }
    else {
      pwVar7 = L"[RIFT_ZOMBOSS_PROGRESS_WIN_TITLE]";
    }
    FUN_054772c4(awStack_58,pwVar7);
  }
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  HotUIAnim::PlayAndStop((HotUIAnim *)pHVar4,asStack_70,0,aDStack_38);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  HotUIAnim::PlayAndStop((HotUIAnim *)pHVar5,asStack_68,0,aDStack_38);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  HotUIAnim::PlayAndStop((HotUIAnim *)pHVar6,asStack_60,0,aDStack_38);
  std::string::string((string *)local_48,"DialogTitle");
  TodStringTranslate(awStack_58);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)local_48,awStack_50);
  FUN_05476c50(awStack_50);
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"AcceptButton");
  TodStringTranslate(L"[CONTINUE_BUTTON]");
  HotUIAdaptor::setButtonWidgetText((HotUIAdaptor *)this,(string *)local_48,awStack_50);
  FUN_05476c50(awStack_50);
  std::string::~string((string *)local_48);
  nop();
  addRewardList();
  FUN_05476c50(awStack_58);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

