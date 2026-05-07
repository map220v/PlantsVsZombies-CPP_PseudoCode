// Class: WeeklyRechargeRewardPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WeeklyRechargeRewardPage::GetLayoutName() */

void __thiscall WeeklyRechargeRewardPage::GetLayoutName(WeeklyRechargeRewardPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIWeeklyRechargeRewardPage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WeeklyRechargeRewardPage::~WeeklyRechargeRewardPage() */

void __thiscall WeeklyRechargeRewardPage::~WeeklyRechargeRewardPage(WeeklyRechargeRewardPage *this)

{
  *(undefined ***)this = &PTR_GetClass_0671f120;
  *(undefined **)(this + 0xd8) = &DAT_0671f470;
  FUN_05476c50(this + 0x140);
  UISingletonDialog<WeeklyRechargeRewardPage>::~UISingletonDialog
            ((UISingletonDialog<WeeklyRechargeRewardPage> *)this);
  return;
}


/* WeeklyRechargeRewardPage::~WeeklyRechargeRewardPage() */

void __thiscall WeeklyRechargeRewardPage::~WeeklyRechargeRewardPage(WeeklyRechargeRewardPage *this)

{
  ~WeeklyRechargeRewardPage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WeeklyRechargeRewardPage::defalutUI() */

void __thiscall WeeklyRechargeRewardPage::defalutUI(WeeklyRechargeRewardPage *this)

{
  uint uVar1;
  int iVar2;
  Image *this_00;
  char *__s;
  UIWidgetImage *pUVar3;
  uint uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Image *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
  iVar2 = ImageLib::Image::GetWidth(this_00);
  if (0 < *(int *)(this + 0x134)) {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + 1;
      Sexy::StrFormat("UIImage_Mask%d",asStack_18,(ulong)uVar1);
      __s = (char *)FUN_0547429c(asStack_18);
      std::string::string(asStack_10,__s);
      pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,(int)uVar4 <= iVar2);
      std::string::~string(asStack_18);
      uVar4 = uVar1;
    } while ((int)uVar1 < *(int *)(this + 0x134));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WeeklyRechargeRewardPage::WeeklyRechargeRewardPage() */

void __thiscall WeeklyRechargeRewardPage::WeeklyRechargeRewardPage(WeeklyRechargeRewardPage *this)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<WeeklyRechargeRewardPage>::UISingletonDialog
            ((UISingletonDialog<WeeklyRechargeRewardPage> *)this);
  *(undefined4 *)(this + 0x134) = 5;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0671f120;
  *(undefined **)(this + 0xd8) = &DAT_0671f470;
  FUN_05478178(this + 0x140,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Color::Color((Color *)(this + 0x148),1);
  *(undefined4 *)(this + 0x158) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WeeklyRechargeRewardPage::Update() */

void __thiscall WeeklyRechargeRewardPage::Update(WeeklyRechargeRewardPage *this)

{
  WeeklyRechargeRewardPage *pWVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  UIWidgetText *pUVar7;
  NewYearChargeManager *this_00;
  UIWidgetImage *pUVar8;
  UIWidgetImage *pUVar9;
  ProfileMgr *this_01;
  BaseResStreamsDriver *this_02;
  Image *this_03;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_c8 [8];
  string asStack_c0 [8];
  wstring awStack_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  iVar3 = ActiveItem::GetLeftDays(aAStack_88);
  lVar6 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar6 = 0x15180 - (lVar6 + 0x1c200) % 0x15180;
  if (iVar3 < 1) {
    iVar3 = (int)(lVar6 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",awStack_b8,lVar6 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar3 + (int)((lVar6 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar6 + iVar3 * -0x3c));
    FUN_054766c8(this + 0x140,awStack_b8);
    FUN_05476c50(awStack_b8);
  }
  else {
    pWVar1 = this + 0x140;
    FUN_05478178(awStack_b8,L"[TOTAL_LOGIN_DAYS]",auStack_c8);
    TodReplaceNumberString(awStack_b8,L"{DAY_COUNT}",iVar3);
    FUN_05476c50(awStack_b8);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_b8,lVar6 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar6 / 0x3c) + (int)((lVar6 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pWVar1,awStack_b8);
    FUN_05476c50(awStack_b8);
    FUN_0342e660(awStack_b8,asStack_c0,pWVar1);
    FUN_054766c8(pWVar1,awStack_b8);
    FUN_05476c50(awStack_b8);
    FUN_05476c50(asStack_c0);
  }
  if (*(long *)(this + 0x138) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x138),this + 0x140);
  }
  defalutUI(this);
  std::string::string((string *)awStack_b8,"UIText_RechargeValue");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_b8);
  std::string::~string((string *)awStack_b8);
  nop();
  NewYearChargeConfig::NewYearChargeConfig((NewYearChargeConfig *)awStack_b8);
  this_00 = (NewYearChargeManager *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
  cVar2 = NewYearChargeManager::GetConfig(this_00,(NewYearChargeConfig *)awStack_b8);
  if (cVar2 == '\0') {
    fVar13 = 0.0;
    uVar4 = 0;
  }
  else {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_01);
    this_02 = (BaseResStreamsDriver *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
    uVar4 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(this_02);
    this_03 = (Image *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
    iVar5 = ImageLib::Image::GetWidth(this_03);
    iVar3 = iVar5 + 1;
    fVar13 = 1.0;
    uVar10 = FUN_03ac2090(local_a0,local_98);
    if ((ulong)(long)iVar3 < uVar10) {
      fVar12 = 1.0 / (float)*(int *)(this + 0x134);
      if (iVar5 < 0) {
        piVar11 = (int *)FUN_03ac20a4(local_a0,0);
        fVar13 = ((float)(int)uVar4 / (float)*piVar11) * fVar12;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar13 = fVar13 + (float)iVar3 * fVar12;
      }
      else {
        piVar11 = (int *)FUN_03ac20a4(local_a0,(long)iVar5);
        iVar5 = *piVar11;
        piVar11 = (int *)FUN_03ac20a4(local_a0,(long)iVar3);
        fVar13 = ((float)(int)(uVar4 - iVar5) / (float)(*piVar11 - iVar5)) * fVar12;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar13 = fVar13 + (float)iVar3 * fVar12;
      }
    }
  }
  Sexy::StrFormat(L"%d",auStack_c8,(ulong)uVar4);
  PuzzleTip::SetTip(pUVar7,auStack_c8);
  std::string::string(asStack_c0,"UIImage_bar");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  std::string::string(asStack_c0,"UIImage_barBG");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  *(int *)(pUVar8 + 0x50) = (int)(fVar13 * (float)*(int *)(pUVar9 + 0x50));
  FUN_05476c50(auStack_c8);
  NewYearChargeConfig::~NewYearChargeConfig((NewYearChargeConfig *)awStack_b8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WeeklyRechargeRewardPage::InitView() */

void __thiscall WeeklyRechargeRewardPage::InitView(WeeklyRechargeRewardPage *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  BaseTaskResource *this_00;
  NameMapperBase *this_01;
  UIWidgetText *pUVar6;
  NewYearChargeManager *this_02;
  char *pcVar7;
  long lVar8;
  UIRewardFrame *pUVar9;
  ProfileMgr *this_03;
  BaseResStreamsDriver *this_04;
  Image *this_05;
  ulong uVar10;
  int *piVar11;
  UIWidgetImage *pUVar12;
  TGALogMgr *pTVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  string *extraout_x1;
  size_t __n;
  int iVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  string asStack_138 [8];
  undefined1 auStack_130 [8];
  NewYearChargeConfig aNStack_128 [24];
  undefined8 local_110;
  undefined8 local_108;
  string asStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [24];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [56];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  defalutUI(this);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  std::string::string(asStack_c0,"UImage_icon");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  std::string::string(asStack_138,"");
  nop();
  this_00 = (BaseTaskResource *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
  iVar2 = Sexy::BaseTaskResource::GetType(this_00);
  this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_01,iVar2);
  if (cVar1 != '\0') {
    iVar17 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar17);
    FUN_05474278(asStack_138,asStack_c0);
    std::string::~string(asStack_c0);
  }
  cVar1 = FUN_0547419c(asStack_138);
  if (cVar1 == '\0') {
    std::string::string(asStack_f8,"IMAGE_UI_NATIONALCENTER_RECHARGEPAGE_");
    Sexy::StringToUpper((Sexy *)asStack_138,extraout_x1);
    std::operator+(asStack_f8,asStack_c0);
    std::string::~string(asStack_c0);
    std::string::~string(asStack_f8);
    nop();
    uVar14 = FUN_0547429c((string *)aNStack_128);
    Sexy::OutputDebugStrF((wchar_t *)"WeeklyRechargeRewardPage::InitView, image path : %s",uVar14);
    UIWidgetImage::SetImage(pUVar5,(string *)aNStack_128);
    std::string::~string((string *)aNStack_128);
  }
  std::string::string(asStack_c0,"UIText_ActivityTime");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_c0);
  *(UIWidgetText **)(this + 0x138) = pUVar6;
  std::string::~string(asStack_c0);
  nop();
  std::string::string(asStack_c0,"UIText_RechargeValue");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  NewYearChargeConfig::NewYearChargeConfig(aNStack_128);
  this_02 = (NewYearChargeManager *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
  cVar1 = NewYearChargeManager::GetConfig(this_02,aNStack_128);
  if (cVar1 == '\0') {
    fVar20 = 0.0;
    uVar18 = 0;
  }
  else {
    if (0 < *(int *)(this + 0x134)) {
      lVar19 = 0;
      do {
        uVar3 = (int)lVar19 + 1;
        Sexy::StrFormat("UIImage_Reward%d",asStack_f8,(ulong)uVar3);
        pcVar7 = (char *)FUN_0547429c(asStack_f8);
        std::string::string(asStack_c0,pcVar7);
        pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_c0);
        std::string::~string(asStack_c0);
        nop();
        lVar8 = FUN_03ac20a4(local_110,lVar19);
        uVar15 = 3;
        if (*(int *)(lVar8 + 4) == 0) {
          uVar15 = 4;
        }
        pUVar9 = ::operator_new(0x148);
        UIRewardFrame::UIRewardFrame(pUVar9,uVar15,asStack_138,0,0);
        iVar17 = (int)((float)*(int *)(pUVar5 + 0x54) * 0.95);
        (**(code **)(*(long *)pUVar9 + 0x198))
                  (pUVar9,(int)((float)*(int *)(pUVar5 + 0x50) * 0.13),
                   (int)((float)*(int *)(pUVar5 + 0x54) * 0.025),iVar17,iVar17);
        lVar8 = *(long *)pUVar5;
        pUVar9[0x59] = (UIRewardFrame)0x0;
        (**(code **)(lVar8 + 0x60))(pUVar5,pUVar9);
        std::string::~string(asStack_f8);
        lVar19 = lVar19 + 1;
      } while ((int)uVar3 < *(int *)(this + 0x134));
    }
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_03);
    this_04 = (BaseResStreamsDriver *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
    uVar3 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(this_04);
    uVar18 = (ulong)uVar3;
    this_05 = (Image *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
    iVar4 = ImageLib::Image::GetWidth(this_05);
    iVar17 = iVar4 + 1;
    uVar10 = FUN_03ac2090(local_110,local_108);
    if ((ulong)(long)iVar17 < uVar10) {
      fVar21 = 1.0 / (float)*(int *)(this + 0x134);
      if (iVar4 < 0) {
        piVar11 = (int *)FUN_03ac20a4(local_110,0);
        fVar20 = ((float)(int)uVar3 / (float)*piVar11) * fVar21;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar20 = fVar20 + (float)iVar17 * fVar21;
      }
      else {
        piVar11 = (int *)FUN_03ac20a4(local_110,(long)iVar4);
        iVar4 = *piVar11;
        piVar11 = (int *)FUN_03ac20a4(local_110,(long)iVar17);
        fVar20 = ((float)(int)(uVar3 - iVar4) / (float)(*piVar11 - iVar4)) * fVar21;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar20 = fVar20 + (float)iVar17 * fVar21;
      }
    }
    else {
      fVar20 = 1.0;
    }
  }
  Sexy::StrFormat(L"%d",auStack_130,uVar18);
  PuzzleTip::SetTip(pUVar6,auStack_130);
  std::string::string(asStack_c0,"UIImage_bar");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  std::string::string(asStack_c0,"UIImage_barBG");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  __n = (size_t)(uint)(int)(fVar20 * (float)*(int *)(pUVar12 + 0x50));
  *(int *)(pUVar5 + 0x50) = (int)(fVar20 * (float)*(int *)(pUVar12 + 0x50));
  *(int *)(this + 0x158) = iVar2;
  *(int *)(this + 0x15c) = (int)uVar18;
  if (fVar20 < 1.0) {
    if (0.8 <= fVar20) {
      uVar16 = 0x19;
      uVar15 = 0xe10;
    }
    else if (0.6 <= fVar20) {
      uVar16 = 0xf;
      uVar15 = 0x640;
    }
    else if (0.4 <= fVar20) {
      uVar16 = 10;
      uVar15 = 600;
    }
    else if (fVar20 < 0.2) {
      uVar16 = 0;
      uVar15 = 0;
    }
    else {
      uVar16 = 5;
      uVar15 = 100;
    }
  }
  else {
    uVar16 = 0x28;
    uVar15 = 0x19c8;
  }
  *(undefined4 *)(this + 0x160) = uVar15;
  *(undefined4 *)(this + 0x164) = uVar16;
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)asStack_f8);
  DString::DString((DString *)asStack_c0,*(int *)(this + 0x158));
  pcVar7 = (char *)DString::c_str((DString *)asStack_c0);
  std::string::append(asStack_f8,pcVar7,__n);
  DString::~DString((DString *)asStack_c0);
  DString::DString((DString *)asStack_c0,*(int *)(this + 0x15c));
  pcVar7 = (char *)DString::c_str((DString *)asStack_c0);
  std::string::append(asStack_f0,pcVar7,__n);
  DString::~DString((DString *)asStack_c0);
  DString::DString((DString *)asStack_c0,*(int *)(this + 0x160));
  pcVar7 = (char *)DString::c_str((DString *)asStack_c0);
  std::string::append(asStack_e8,pcVar7,__n);
  DString::~DString((DString *)asStack_c0);
  DString::DString((DString *)asStack_c0,*(int *)(this + 0x158));
  pcVar7 = (char *)DString::c_str((DString *)asStack_c0);
  std::string::append(asStack_d0,pcVar7,__n);
  DString::~DString((DString *)asStack_c0);
  DString::DString((DString *)asStack_c0,*(int *)(this + 0x164));
  pcVar7 = (char *)DString::c_str((DString *)asStack_c0);
  std::string::append(asStack_c8,pcVar7,__n);
  DString::~DString((DString *)asStack_c0);
  pTVar13 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
            ((TGAPlantSpecialOfferData *)asStack_c0,(TGAPlantSpecialOfferData *)asStack_f8);
  TGALogMgr::LogRechargeReward(pTVar13,1,asStack_c0);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_c0);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_f8);
  FUN_05476c50(auStack_130);
  NewYearChargeConfig::~NewYearChargeConfig(aNStack_128);
  std::string::~string(asStack_138);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WeeklyRechargeRewardPage::OnCreate() */

char __thiscall WeeklyRechargeRewardPage::OnCreate(WeeklyRechargeRewardPage *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WeeklyRechargeRewardPage::showGemStore() */

void __thiscall WeeklyRechargeRewardPage::showGemStore(WeeklyRechargeRewardPage *this)

{
  char *pcVar1;
  TGALogMgr *pTVar2;
  size_t __n;
  string asStack_80 [8];
  TGALuckyChestData aTStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  string asStack_50 [8];
  string asStack_48 [8];
  DString aDStack_40 [56];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  LawnApp::ShowCoinStore(gLawnApp,2);
  TGALuckyChestData::TGALuckyChestData(aTStack_78);
  DString::DString(aDStack_40,*(int *)(this + 0x158));
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::append((string *)aTStack_78,pcVar1,__n);
  DString::~DString(aDStack_40);
  DString::DString(aDStack_40,*(int *)(this + 0x15c));
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::append(asStack_70,pcVar1,__n);
  DString::~DString(aDStack_40);
  DString::DString(aDStack_40,*(int *)(this + 0x160));
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::append(asStack_68,pcVar1,__n);
  DString::~DString(aDStack_40);
  DString::DString(aDStack_40,*(int *)(this + 0x158));
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::append(asStack_50,pcVar1,__n);
  DString::~DString(aDStack_40);
  DString::DString(aDStack_40,*(int *)(this + 0x164));
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::append(asStack_48,pcVar1,__n);
  DString::~DString(aDStack_40);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
            ((TGAPlantSpecialOfferData *)aDStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
  TGALogMgr::LogRechargeReward(pTVar2,2,aDStack_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aDStack_40);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  std::string::string((string *)aDStack_40,"CHECK");
  TGALogMgr::LogSegments(pTVar2,3,0,(string *)aDStack_40);
  std::string::~string((string *)aDStack_40);
  nop();
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  DString::DString(aDStack_40,*(int *)(this + 0x158));
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::string(asStack_80,pcVar1);
  TGALogMgr::LogSegments(pTVar2,3,1,asStack_80);
  std::string::~string(asStack_80);
  nop();
  DString::~DString(aDStack_40);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  DString::DString(aDStack_40,*(int *)(this + 0x15c));
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::string(asStack_80,pcVar1);
  TGALogMgr::LogSegments(pTVar2,3,2,asStack_80);
  std::string::~string(asStack_80);
  nop();
  DString::~DString(aDStack_40);
  TGALuckyChestData::~TGALuckyChestData(aTStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WeeklyRechargeRewardPage::ButtonDepress(int) */

void __thiscall WeeklyRechargeRewardPage::ButtonDepress(WeeklyRechargeRewardPage *this,int param_1)

{
  if (param_1 != 0x1f7) {
    return;
  }
  showGemStore(this);
  return;
}


/* non-virtual thunk to WeeklyRechargeRewardPage::ButtonDepress(int) */

void __thiscall WeeklyRechargeRewardPage::ButtonDepress(WeeklyRechargeRewardPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

