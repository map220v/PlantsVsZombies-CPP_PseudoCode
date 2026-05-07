// Class: UIRechargeReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRechargeReward::GetLayoutName() */

void __thiscall UIRechargeReward::GetLayoutName(UIRechargeReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRechargeRewardWoldMap");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRechargeReward::showGemStore() */

void UIRechargeReward::showGemStore(void)

{
  GameStateMgr *pGVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar3 < 0x43) || (iVar3 = LawnApp::GetPlatform(gLawnApp), 0xb2 < iVar3)) {
    iVar3 = LawnApp::GetPlatform(gLawnApp);
    if ((0xe < iVar3) && (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 < 0x3a)) goto LAB_0397bf9c;
    cVar2 = LawnApp::HasSpecialGemOffer(gLawnApp);
    if (cVar2 != '\0') {
      pcVar4 = "GemsExtra";
      goto LAB_0397bfd0;
    }
    pcVar4 = "Gems";
  }
  else {
LAB_0397bf9c:
    cVar2 = LawnApp::HasSpecialGemOffer(gLawnApp);
    if (cVar2 != '\0') {
      pcVar4 = "GemsFor360Extra";
LAB_0397bfd0:
      pGVar1 = gGameStateMgr;
      std::string::string(asStack_10,pcVar4);
      GameStateMgr::ShowStore(pGVar1,asStack_10,0,0);
      std::string::~string(asStack_10);
      nop();
      goto LAB_0397bf64;
    }
    pcVar4 = "GemsFor360";
  }
  pGVar1 = gGameStateMgr;
  std::string::string(asStack_10,pcVar4);
  GameStateMgr::ShowStore(pGVar1,asStack_10,0,0);
  std::string::~string(asStack_10);
  nop();
LAB_0397bf64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRechargeReward::UpdateTimeLabel() */

void __thiscall UIRechargeReward::UpdateTimeLabel(UIRechargeReward *this)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar2 = 0x15180 - (lVar2 + 0x1c200) % 0x15180;
  iVar1 = (int)(lVar2 / 0x3c);
  Sexy::StrFormat(L"%02d: %02d: %02d",auStack_10,lVar2 / 0xe10 & 0xffffffff,
                  (ulong)(uint)(iVar1 + (int)((lVar2 / 0x3c) / 0x3c) * -0x3c),
                  (ulong)(uint)((int)lVar2 + iVar1 * -0x3c));
  FUN_054766c8(this + 0x1a8,auStack_10);
  FUN_05476c50(auStack_10);
  if (*(long *)(this + 0x1c8) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x1c8),this + 0x1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRechargeReward::Update() */

void __thiscall UIRechargeReward::Update(UIRechargeReward *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Background_0");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((plVar1 != (long *)0x0) && (*(char *)((long)plVar1 + 0x6c) == '\0')) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  UpdateTimeLabel(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRechargeReward::ButtonDepress(int) */

void __thiscall UIRechargeReward::ButtonDepress(UIRechargeReward *this,int param_1)

{
  if (param_1 == 0) {
    UISingletonDialog<UIRechargeReward>::CloseDialog();
    return;
  }
  if (param_1 == 1) {
    UISingletonDialog<UIRechargeReward>::CloseDialog();
    showGemStore();
    return;
  }
  return;
}


/* non-virtual thunk to UIRechargeReward::ButtonDepress(int) */

void __thiscall UIRechargeReward::ButtonDepress(UIRechargeReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRechargeReward::clearPLantChipUI() */

void __thiscall UIRechargeReward::clearPLantChipUI(UIRechargeReward *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*plVar2 != 0) {
      (**(code **)(*(long *)this + 0x68))(this);
      *plVar2 = 0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<NDRechargeRewardContent*,std::allocator<NDRechargeRewardContent*>>::clear
            ((vector<NDRechargeRewardContent*,std::allocator<NDRechargeRewardContent*>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRechargeReward::UIRechargeReward() */

void __thiscall UIRechargeReward::UIRechargeReward(UIRechargeReward *this)

{
  UISingletonDialog<UIRechargeReward>::UISingletonDialog
            ((UISingletonDialog<UIRechargeReward> *)this);
  *(undefined ***)this = &PTR_GetClass_066da3f0;
  *(undefined **)(this + 0xd8) = &DAT_066da740;
  Sexy::Insets::Insets((Insets *)(this + 0x134));
  Sexy::Insets::Insets((Insets *)(this + 0x144));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  NDRechargeRewardConfig::NDRechargeRewardConfig((NDRechargeRewardConfig *)(this + 0x168));
  Sexy::Color::Color((Color *)(this + 0x198),1);
  FUN_05476574(this + 0x1a8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  *(undefined8 *)(this + 0x1c8) = 0;
  return;
}


/* UIRechargeReward::~UIRechargeReward() */

void __thiscall UIRechargeReward::~UIRechargeReward(UIRechargeReward *this)

{
  *(undefined ***)this = &PTR_GetClass_066da3f0;
  *(undefined **)(this + 0xd8) = &DAT_066da740;
  std::vector<NDRechargeRewardContent*,std::allocator<NDRechargeRewardContent*>>::~vector
            ((vector<NDRechargeRewardContent*,std::allocator<NDRechargeRewardContent*>> *)
             (this + 0x1b0));
  FUN_05476c50(this + 0x1a8);
  NDRechargeRewardConfig::~NDRechargeRewardConfig((NDRechargeRewardConfig *)(this + 0x168));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  UISingletonDialog<UIRechargeReward>::~UISingletonDialog
            ((UISingletonDialog<UIRechargeReward> *)this);
  return;
}


/* UIRechargeReward::~UIRechargeReward() */

void __thiscall UIRechargeReward::~UIRechargeReward(UIRechargeReward *this)

{
  ~UIRechargeReward(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRechargeReward::loadData() */

void __thiscall UIRechargeReward::loadData(UIRechargeReward *this)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_0397ba94(local_80);
  uVar3 = 1;
  if (cVar1 != '\0') {
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x168));
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = local_70;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRechargeReward::updateUIData() */

void __thiscall UIRechargeReward::updateUIData(UIRechargeReward *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetText *pUVar5;
  UIWidgetImage *pUVar6;
  long lVar7;
  NameMapperBase *pNVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  RechargeRewardData *pRVar11;
  NDRechargeRewardContent *this_00;
  PVZ2UIButton *pPVar12;
  string *extraout_x1;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[TODAY_SURPRISE_REWARD]");
  std::string::string(asStack_10,"UIText_1");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar5,auStack_40);
  TodStringTranslate(L"[CAN_BE_OBTAINED]");
  std::string::string(asStack_10,"UIText_2");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar5,auStack_38);
  TodStringTranslate(L"[DAILY_SINGLE_RECHARGE_REWARD]");
  std::string::string(asStack_10,"UIText_3");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar5,auStack_30);
  TodStringTranslate(L"30");
  std::string::string(asStack_10,"UIText_4");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar5,auStack_28);
  std::string::string(asStack_10,"UIImage_3");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = loadData(this);
  if (cVar1 == '\0') {
    iVar2 = 0x1b1ca;
  }
  else {
    lVar7 = FUN_0397bbf8(*(undefined8 *)(this + 0x180),0);
    iVar2 = *(int *)(lVar7 + 4);
  }
  Sexy::StrFormat("IMAGE_UI_CHILDRENDAY_TIME_LEFT",asStack_18);
  GetImageByNameWithUIFallback(asStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x160),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  std::string::string(asStack_20,"");
  nop();
  pNVar8 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar8,iVar2);
  if (cVar1 == '\0') {
    pNVar8 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar8,iVar2);
    if (cVar1 == '\0') goto LAB_0397e3c4;
    iVar2 = PlantChipNameMapperServerID::GetInstance();
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
  }
  NameMapperBase::GetNameForId(iVar2);
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
LAB_0397e3c4:
  cVar1 = FUN_0547419c(asStack_20);
  if (cVar1 == '\0') {
    Sexy::StringToUpper((Sexy *)asStack_20,extraout_x1);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_10);
    std::string::~string(asStack_10);
    UIWidgetImage::SetImage(pUVar6,asStack_18);
    std::string::~string(asStack_18);
  }
  lVar7 = 0;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdfc0);
  LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdfc0);
  SalesProgressBar::GetCurrentLevel(pSVar10);
  std::string::string(asStack_10,"UIText_ActivityTime");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x1c8) = pUVar5;
  std::string::~string(asStack_10);
  nop();
  UpdateTimeLabel(this);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
  LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar2 = FUN_0397bc00(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
  clearPLantChipUI(this);
  if (0 < iVar2) {
    do {
      pRVar11 = (RechargeRewardData *)FUN_0397bbf8(*(undefined8 *)(this + 0x180),lVar7);
      this_00 = ::operator_new(0xe0);
      NDRechargeRewardContent::NDRechargeRewardContent(this_00,pRVar11);
      if (lVar7 == 0) {
        std::string::string(asStack_10,"UIImage_Plant");
        pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
        std::string::~string(asStack_10);
        nop();
        pcVar14 = *(code **)(*(long *)this_00 + 0x198);
        pLVar9 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
        uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
        uVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
        (*pcVar14)(this_00,0,0,uVar3,uVar4);
        lVar13 = *(long *)pUVar6;
        this_00[0x59] = (NDRechargeRewardContent)0x0;
        (**(code **)(lVar13 + 0x60))(pUVar6,this_00);
      }
      else if ((int)lVar7 == 1) {
        std::string::string(asStack_10,"UIImage_Avatar");
        pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
        std::string::~string(asStack_10);
        nop();
        pcVar14 = *(code **)(*(long *)this_00 + 0x198);
        pLVar9 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
        uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe000);
        uVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
        (*pcVar14)(this_00,0,0,uVar3,uVar4);
        lVar13 = *(long *)pUVar6;
        this_00[0x59] = (NDRechargeRewardContent)0x0;
        (**(code **)(lVar13 + 0x60))(pUVar6,this_00);
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < iVar2);
  }
  std::string::string(asStack_10,"UIImage_4");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar6 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,0);
  }
  if (*(int *)(this + 0x170) < 1) {
    std::string::string(asStack_10,"UIButton_2");
    pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pPVar12 != (PVZ2UIButton *)0x0) {
      TodStringTranslate(L"[WECHAT_ALREADY_GOT_REWARD]");
      FUN_054766c8(pPVar12 + 0xd8,asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)pPVar12 + 0x188))(pPVar12,1);
    }
  }
  std::string::~string(asStack_20);
  FUN_05476c50(auStack_28);
  FUN_05476c50(auStack_30);
  FUN_05476c50(auStack_38);
  FUN_05476c50(auStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRechargeReward::OnCreate() */

void __thiscall UIRechargeReward::OnCreate(UIRechargeReward *this)

{
  char *__s;
  TGALogMgr *pTVar1;
  TGALuckyChestData *__n;
  TGALuckyChestData aTStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  __n = aTStack_78;
  std::string::string(asStack_40,"Background_0");
  UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  updateUIData(this);
  TGALuckyChestData::TGALuckyChestData(aTStack_78);
  DString::DString((DString *)asStack_40,1);
  __s = (char *)DString::c_str((DString *)asStack_40);
  std::string::append((string *)aTStack_78,__s,(size_t)__n);
  DString::~DString((DString *)asStack_40);
  pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
            ((TGAPlantSpecialOfferData *)asStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
  TGALogMgr::LogDailyRechargeReward(pTVar1,asStack_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_40);
  TGALuckyChestData::~TGALuckyChestData(aTStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

