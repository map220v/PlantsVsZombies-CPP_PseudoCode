// Class: UINewPlantView_AccessoryPackage


/* UINewPlantView_AccessoryPackage::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPlantView_AccessoryPackage::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlantView_AccessoryPackage::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewPlantView_AccessoryPackage::ScrollTargetReached
          (UINewPlantView_AccessoryPackage *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPlantView_AccessoryPackage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPlantView_AccessoryPackage::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   UINewPlantView_AccessoryPackage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINewPlantView_AccessoryPackage::ScrollTargetInterrupted
          (UINewPlantView_AccessoryPackage *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::GetLayoutName() */

void __thiscall
UINewPlantView_AccessoryPackage::GetLayoutName(UINewPlantView_AccessoryPackage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPlantView_AccessoryPackage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPlantView_AccessoryPackage::OnCloseDialog() */

void UINewPlantView_AccessoryPackage::OnCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* UINewPlantView_AccessoryPackage::closeSuperAccessoryDescription() */

void __thiscall
UINewPlantView_AccessoryPackage::closeSuperAccessoryDescription
          (UINewPlantView_AccessoryPackage *this)

{
  if (*(long *)(this + 0x1c8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x1c8))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1c8));
    *(undefined8 *)(this + 0x1c8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::OnCreate() */

void __thiscall UINewPlantView_AccessoryPackage::OnCreate(UINewPlantView_AccessoryPackage *this)

{
  UIWidgetBackground *pUVar1;
  UITabControl *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  std::string::string(asStack_10,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UITabControl::SetListener(this_00,(TabControlListener *)(this + 0x140));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::SelectSaleItem(AccessorySalePackageItem*) */

void __thiscall
UINewPlantView_AccessoryPackage::SelectSaleItem
          (UINewPlantView_AccessoryPackage *this,AccessorySalePackageItem *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  UIWidgetImage *pUVar4;
  UIWidgetText *pUVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar6;
  PVZ2UIButton *pPVar7;
  PVZ2UIButton *pPVar8;
  AccessorySalePackageItem *pAVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(AccessorySalePackageItem **)(this + 0x188) = param_1;
  if (param_1 == (AccessorySalePackageItem *)0x0) goto LAB_03817760;
  uVar11 = *(undefined8 *)(this + 400);
  lVar10 = 0;
  lVar2 = FUN_03813c80(uVar11,*(undefined8 *)(this + 0x198));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03813c8c(uVar11,lVar10);
      pAVar9 = (AccessorySalePackageItem *)*puVar3;
      pAVar9[0x158] = (AccessorySalePackageItem)0x0;
      if (param_1 == pAVar9) {
        param_1[0x158] = (AccessorySalePackageItem)0x1;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar2);
  }
  std::string::string(asStack_10,"UIImage_SaleFrame");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  UIWidgetImage::SetImage(pUVar4,*(Image **)(param_1 + 0x138));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_SaleImage");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  UIWidgetImage::SetImage(pUVar4,*(Image **)(param_1 + 0x140));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_SaleLevel");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  UIWidgetImage::SetImage(pUVar4,*(Image **)(param_1 + 0x148));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_20,"UIText_SaleName");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  Sexy::ToWString((string *)(param_1 + 0x100));
  TodStringTranslate(awStack_18);
  PuzzleTip::SetTip(pUVar5,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_SaleUse");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  FUN_05478178(awStack_18,L"[ACCESSORY_SOLD_TXT]",auStack_28);
  TodReplaceNumberString(awStack_18,L"{PRICE}",*(int *)(param_1 + 0x130));
  PuzzleTip::SetTip(pUVar5,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_SaleDescription");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  Sexy::ToWString((string *)(param_1 + 0x108));
  TodStringTranslate(awStack_18);
  PuzzleTip::SetTip(pUVar5,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetPlantAccessoryLevelById(this_01,(long)*(int *)(param_1 + 0xd4));
  if (iVar1 == 0) {
    std::string::string(asStack_20,"UIText_SaleBoost");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
    Sexy::ToWString((string *)(param_1 + 0x110));
    TodStringTranslate(awStack_18);
LAB_03817654:
    PuzzleTip::SetTip(pUVar5,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  else if (0 < iVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8));
    uVar6 = FUN_03813c24(*(undefined8 *)(lVar2 + 0x90),*(undefined8 *)(lVar2 + 0x98));
    if ((ulong)(long)iVar1 <= uVar6) {
      std::string::string(asStack_20,"UIText_SaleBoost");
      pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8));
      lVar2 = FUN_03813c38(*(undefined8 *)(lVar2 + 0x90),(long)(iVar1 + -1));
      Sexy::ToWString((string *)(lVar2 + 0x20));
      TodStringTranslate(awStack_18);
      goto LAB_03817654;
    }
  }
  std::string::string(asStack_10,"UIButton_SaleButton");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_SaleReset");
  pPVar8 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar7 + 0x188))(pPVar7,1);
  (**(code **)(*(long *)pPVar8 + 0x188))(pPVar8,1);
  if (param_1[0x159] != (AccessorySalePackageItem)0x0) {
    (**(code **)(*(long *)pPVar7 + 0x188))(pPVar7,0);
    *(undefined4 *)(pPVar7 + 0xd4) = 0x51f;
    if ((0 < iVar1) && (*(int *)(param_1 + 0x120) == 5)) {
      (**(code **)(*(long *)pPVar8 + 0x188))(pPVar8,0);
      *(undefined4 *)(pPVar8 + 0xd4) = 0x520;
    }
  }
LAB_03817760:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::SelectSteadyItem(AccessorySteadyPackageItem*) */

void __thiscall
UINewPlantView_AccessoryPackage::SelectSteadyItem
          (UINewPlantView_AccessoryPackage *this,AccessorySteadyPackageItem *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  UIWidgetImage *pUVar7;
  Image *pIVar8;
  UIWidgetText *pUVar9;
  UIWidgetText *pUVar10;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  UIWidgetText *pUVar14;
  PVZ2UIButton *pPVar15;
  AccessorySteadyPackageItem *pAVar16;
  long lVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  string asStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(AccessorySteadyPackageItem **)(this + 0x1a8) = param_1;
  if (param_1 == (AccessorySteadyPackageItem *)0x0) goto LAB_03817f94;
  uVar19 = *(undefined8 *)(this + 0x1b0);
  lVar17 = 0;
  lVar5 = FUN_03813c94(uVar19,*(undefined8 *)(this + 0x1b8));
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_03813ca0(uVar19,lVar17);
      pAVar16 = (AccessorySteadyPackageItem *)*puVar6;
      pAVar16[0x158] = (AccessorySteadyPackageItem)0x0;
      if (param_1 == pAVar16) {
        param_1[0x158] = (AccessorySteadyPackageItem)0x1;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar5);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8);
  std::string::string(asStack_18,"UIImage_SteadyFrameLeft");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  UIWidgetImage::SetImage(pUVar7,*(Image **)(param_1 + 0x138));
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_SteadyFrameRight");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  UIWidgetImage::SetImage(pUVar7,*(Image **)(param_1 + 0x138));
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_SteadyImageLeft");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  UIWidgetImage::SetImage(pUVar7,*(Image **)(param_1 + 0x140));
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_SteadyImageRight");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  UIWidgetImage::SetImage(pUVar7,*(Image **)(param_1 + 0x140));
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_SteadyLevelLeft");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  UIWidgetImage::SetImage(pUVar7,*(Image **)(param_1 + 0x148));
  std::string::~string(asStack_18);
  nop();
  iVar1 = *(int *)(param_1 + 0xf8) + 1;
  std::string::string(asStack_18,"UIImage_SteadyLevelRight");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  if (5 < iVar1) {
    iVar1 = 5;
  }
  pIVar8 = (Image *)FUN_03813708(iVar1);
  UIWidgetImage::SetImage(pUVar7,pIVar8);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_SteadyBoostLeft");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_SteadyBoostRight");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  iVar1 = PlayerInfo::GetPlantAccessoryLevelById(this_02,(long)*(int *)(param_1 + 0xd4));
  if (iVar1 == 0) {
    uVar22 = 0;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
LAB_0381813c:
    Sexy::ToWString((string *)(lVar5 + 0x20));
    TodStringTranslate(awStack_20);
    PuzzleTip::SetTip(pUVar9,asStack_18);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_20);
LAB_03817a88:
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar11 = FUN_03813c24(*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(lVar5 + 0x98));
    if (uVar11 <= uVar22) goto LAB_03817fd4;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),uVar22);
    Sexy::ToWString((string *)(lVar5 + 0x20));
    TodStringTranslate(awStack_20);
    PuzzleTip::SetTip(pUVar10,asStack_18);
    FUN_05476c50(asStack_18);
    FUN_05476c50(awStack_20);
  }
  else {
    uVar22 = (ulong)iVar1;
    if (0 < iVar1) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      uVar11 = FUN_03813c24(*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(lVar5 + 0x98));
      if (uVar22 <= uVar11) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),(long)(iVar1 + -1));
        goto LAB_0381813c;
      }
      goto LAB_03817a88;
    }
LAB_03817fd4:
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar11 = FUN_03813c24(*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(lVar5 + 0x98));
    if (uVar11 <= uVar22) {
      TodStringTranslate(L"[STEADY_MAX]");
      PuzzleTip::SetTip(pUVar10,asStack_18);
      FUN_05476c50(asStack_18);
    }
  }
  std::string::string(asStack_18,"mat_space_time_crystal");
  uVar2 = PlayerInfo::GetMaterialNum(this_02,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"mat_space_time_dust");
  uVar3 = PlayerInfo::GetMaterialNum(this_02,asStack_18);
  std::string::~string(asStack_18);
  nop();
  uVar4 = PlayerInfo::GetNumCoins(this_02,true);
  if (iVar1 < 0) {
LAB_03817c74:
    uVar22 = 0;
    uVar24 = 0;
    uVar18 = 0;
  }
  else {
    uVar11 = (ulong)iVar1;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar22 = FUN_03813c24(*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(lVar5 + 0x98));
    if (uVar22 <= uVar11) goto LAB_03817c74;
    uVar24 = 0;
    uVar22 = 0;
    uVar18 = 0;
    uVar20 = 0;
    while( true ) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),uVar11);
      uVar12 = FUN_03813c44(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
      if (uVar12 <= uVar20) break;
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),uVar11);
      piVar13 = (int *)FUN_03813c50(*(undefined8 *)(lVar5 + 8),uVar20);
      if (*piVar13 == 0x5a36) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),uVar11);
        lVar5 = FUN_03813c50(*(undefined8 *)(lVar5 + 8),uVar20);
        uVar22 = (ulong)*(uint *)(lVar5 + 4);
        uVar20 = uVar20 + 1;
      }
      else {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),uVar11);
        piVar13 = (int *)FUN_03813c50(*(undefined8 *)(lVar5 + 8),uVar20);
        if (*piVar13 == 0x5a37) {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),uVar11);
          lVar5 = FUN_03813c50(*(undefined8 *)(lVar5 + 8),uVar20);
          uVar24 = (ulong)*(uint *)(lVar5 + 4);
          uVar20 = uVar20 + 1;
        }
        else {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),uVar11);
          piVar13 = (int *)FUN_03813c50(*(undefined8 *)(lVar5 + 8),uVar20);
          if (*piVar13 == 0xfad) {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            lVar5 = FUN_03813c38(*(undefined8 *)(lVar5 + 0x90),uVar11);
            lVar5 = FUN_03813c50(*(undefined8 *)(lVar5 + 8),uVar20);
            uVar18 = *(uint *)(lVar5 + 4);
            uVar20 = uVar20 + 1;
          }
          else {
            uVar20 = uVar20 + 1;
          }
        }
      }
    }
  }
  std::string::string(asStack_18,"UIText_SteadyCrystal");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_SteadyDust");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_SteadyCoin");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  Sexy::StrFormat("%d/%d",awStack_20,(ulong)uVar2,uVar22);
  Sexy::ToWString((string *)awStack_20);
  PuzzleTip::SetTip(pUVar9,asStack_18);
  FUN_05476c50(asStack_18);
  std::string::~string((string *)awStack_20);
  Sexy::StrFormat("%d/%d",awStack_20,(ulong)uVar3,uVar24);
  Sexy::ToWString((string *)awStack_20);
  PuzzleTip::SetTip(pUVar10,asStack_18);
  FUN_05476c50(asStack_18);
  std::string::~string((string *)awStack_20);
  Sexy::StrFormat("%d/%d",awStack_20,(ulong)uVar4,(ulong)uVar18);
  Sexy::ToWString((string *)awStack_20);
  PuzzleTip::SetTip(pUVar14,asStack_18);
  FUN_05476c50(asStack_18);
  std::string::~string((string *)awStack_20);
  iVar23 = (int)uVar24;
  if ((int)uVar2 < (int)uVar22) {
    pcVar21 = *(code **)(*(long *)pUVar9 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,2);
    (*pcVar21)(pUVar9,0,asStack_18);
    if ((int)uVar3 < iVar23) goto LAB_03818054;
LAB_03817e14:
    pcVar21 = *(code **)(*(long *)pUVar10 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,0x66,0x37,0);
    (*pcVar21)(pUVar10,0,asStack_18);
    if ((int)uVar4 < (int)uVar18) goto LAB_03818088;
LAB_03817e50:
    pcVar21 = *(code **)(*(long *)pUVar14 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,0x66,0x37,0);
    (*pcVar21)(pUVar14,0,asStack_18);
  }
  else {
    pcVar21 = *(code **)(*(long *)pUVar9 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,0x66,0x37,0);
    (*pcVar21)(pUVar9,0,asStack_18);
    if (iVar23 <= (int)uVar3) goto LAB_03817e14;
LAB_03818054:
    pcVar21 = *(code **)(*(long *)pUVar10 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,2);
    (*pcVar21)(pUVar10,0,asStack_18);
    if ((int)uVar18 <= (int)uVar4) goto LAB_03817e50;
LAB_03818088:
    pcVar21 = *(code **)(*(long *)pUVar14 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,2);
    (*pcVar21)(pUVar14,0,asStack_18);
  }
  std::string::string(asStack_28,"UIText_SteadyDescription");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::ToWString((string *)(lVar5 + 0x18));
  TodStringTranslate(awStack_20);
  PuzzleTip::SetTip(pUVar9,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_18,"UIButton_SteadyButton");
  pPVar15 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pPVar15 + 0x188))(pPVar15,1);
  if ((iVar23 <= (int)uVar3) && ((int)uVar22 <= (int)uVar2)) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar22 = FUN_03813c24(*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(lVar5 + 0x98));
    if ((ulong)(long)iVar1 < uVar22) {
      (**(code **)(*(long *)pPVar15 + 0x188))(pPVar15,0);
      *(undefined4 *)(pPVar15 + 0xd4) = 0x583;
    }
  }
LAB_03817f94:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UINewPlantView_AccessoryPackage::onNarrationFinished() */

void UINewPlantView_AccessoryPackage::onNarrationFinished(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_03813ad8(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 != 0x1e) {
    return;
  }
  lVar2 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
  FUN_03813adc(lVar2 + 0x10,0x1e);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::showSuperAccessoryDescription() */

void __thiscall
UINewPlantView_AccessoryPackage::showSuperAccessoryDescription
          (UINewPlantView_AccessoryPackage *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1c8) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x1c8) = this_00;
    TodStringTranslate(L"[SUPER_ACCESSORY_STEADY_DES_DESCRIPTION]");
    TodStringTranslate(L"[SUPER_ACCESSORY_STEADY_DES_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x1c8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeSuperAccessoryDescription);
    Sexy::Delegate0::
    Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1c8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1c8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1c8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1c8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::SelectPieceItem(AccessoryPiecesPackageItem*) */

void __thiscall
UINewPlantView_AccessoryPackage::SelectPieceItem
          (UINewPlantView_AccessoryPackage *this,AccessoryPiecesPackageItem *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  UIWidgetImage *pUVar5;
  UIWidgetText *pUVar6;
  PVZ2UIButton *pPVar7;
  ProfileMgr *pPVar8;
  CrazyNPCManager *pCVar9;
  AccessoryPiecesPackageItem *pAVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(AccessoryPiecesPackageItem **)(this + 0x168) = param_1;
  if (param_1 != (AccessoryPiecesPackageItem *)0x0) {
    uVar12 = *(undefined8 *)(this + 0x170);
    lVar11 = 0;
    lVar3 = FUN_03813c6c(uVar12,*(undefined8 *)(this + 0x178));
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_03813c78(uVar12,lVar11);
        pAVar10 = (AccessoryPiecesPackageItem *)*puVar4;
        pAVar10[0x135] = (AccessoryPiecesPackageItem)0x0;
        if (param_1 == pAVar10) {
          param_1[0x135] = (AccessoryPiecesPackageItem)0x1;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar3);
    }
    std::string::string(asStack_50,"UIImage_ExchangeFrame");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_50);
    UIWidgetImage::SetImage(pUVar5,*(Image **)(param_1 + 0x120));
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"UIImage_ExchangeImage");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_50);
    UIWidgetImage::SetImage(pUVar5,*(Image **)(param_1 + 0x128));
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_60,"UIText_ExchangeName");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
    Sexy::ToWString((string *)(param_1 + 0xe8));
    TodStringTranslate(awStack_58);
    PuzzleTip::SetTip(pUVar6,asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    std::string::~string(asStack_60);
    nop();
    std::string::string(asStack_60,"UIText_ExchangeUse");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
    FUN_05478178(awStack_58,L"[REQUIRED_PIECES]",auStack_68);
    TodReplaceNumberString(awStack_58,L"{PIECE_COUNT}",*(int *)(param_1 + 0x110));
    PuzzleTip::SetTip(pUVar6,asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    std::string::string(asStack_60,"UIText_ExchangeBoost");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
    Sexy::ToWString((string *)(param_1 + 0xf8));
    TodStringTranslate(awStack_58);
    PuzzleTip::SetTip(pUVar6,asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    std::string::~string(asStack_60);
    nop();
    std::string::string(asStack_60,"UIText_ExchangeDescription");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
    Sexy::ToWString((string *)(param_1 + 0xf0));
    TodStringTranslate(awStack_58);
    PuzzleTip::SetTip(pUVar6,asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    std::string::~string(asStack_60);
    nop();
    std::string::string(asStack_50,"UIButton_ExchangeButton");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_50);
    std::string::~string(asStack_50);
    nop();
    if (param_1[0x134] == (AccessoryPiecesPackageItem)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x188))(pPVar7,1);
      pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar3 = ProfileMgr::GetCurrentProfile(pPVar8);
      iVar2 = FUN_03813ad8(*(undefined4 *)(lVar3 + 0x40));
    }
    else {
      (**(code **)(*(long *)pPVar7 + 0x188))(pPVar7,0);
      *(undefined4 *)(pPVar7 + 0xd4) = 0x4bb;
      pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar3 = ProfileMgr::GetCurrentProfile(pPVar8);
      iVar2 = FUN_03813ad8(*(undefined4 *)(lVar3 + 0x40));
    }
    if (iVar2 == 0x1e) {
      lVar3 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
      iVar2 = FUN_03813ae4(*(undefined4 *)(lVar3 + 0x10));
      if (iVar2 != 0x1e) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x168) + 0xd8));
        cVar1 = std::operator==((string *)(lVar3 + 0x80),(string *)&DAT_06ab36f0);
        if ((cVar1 != '\0') && (this[0x1d0] == (UINewPlantView_AccessoryPackage)0x0)) {
          this[0x1d0] = (UINewPlantView_AccessoryPackage)0x1;
          LawnApp::KillGameMaskUI(gLawnApp);
          if ((pPVar7 == (PVZ2UIButton *)0x0) || (pPVar7[0x6e] != (PVZ2UIButton)0x0)) {
            pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
            if (pCVar9 != (CrazyNPCManager *)0x0) {
              std::string::string(asStack_60,"TUTORIAL_ACCESSORY1_INTRO");
              Sexy::
              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                        ((ReceivedDataCallback *)this,onNarrationFinished);
              Sexy::Delegate0::
              Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
                        (aDStack_38,asStack_50);
              std::string::string((string *)awStack_58,"");
              CrazyNPCManager::StartNarrativeID(pCVar9,asStack_60,aDStack_38,awStack_58);
              std::string::~string((string *)awStack_58);
              nop();
              std::string::~string(asStack_60);
              nop();
            }
          }
          else {
            std::string::string((string *)awStack_58,"");
            Sexy::Insets::Insets((Insets *)asStack_50);
            GameMaskUI::ShowMask(pPVar7,2,awStack_58,asStack_50);
            std::string::~string((string *)awStack_58);
            nop();
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_AccessoryPackage::RefreshPieces() */

void __thiscall
UINewPlantView_AccessoryPackage::RefreshPieces(UINewPlantView_AccessoryPackage *this)

{
  if (*(AccessoryPiecesPackageItem **)(this + 0x168) != (AccessoryPiecesPackageItem *)0x0) {
    AccessoryPiecesPackageItem::Refresh(*(AccessoryPiecesPackageItem **)(this + 0x168));
    SelectPieceItem(this,*(AccessoryPiecesPackageItem **)(this + 0x168));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::OnExchangeComplete(bool) */

void __thiscall
UINewPlantView_AccessoryPackage::OnExchangeComplete
          (UINewPlantView_AccessoryPackage *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ProfileMgr *pPVar7;
  PlayerInfo *this_00;
  PVZ2UIDialog *pPVar8;
  UITabControl *this_01;
  UITabContent *pUVar9;
  DTimerManager *this_02;
  wstring awStack_78 [8];
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (*(long *)(this + 0x168) != 0) {
      FUN_03813350(asStack_50,*(undefined4 *)(*(long *)(this + 0x168) + 0x108));
      uVar4 = StringHelper::ToImage(asStack_50,false);
      std::string::~string(asStack_50);
      uVar5 = StringHelper::ToImage((string *)(*(long *)(this + 0x168) + 0x100),false);
      pLVar1 = gLawnApp;
      Sexy::ToWString((string *)(*(long *)(this + 0x168) + 0xe8));
      TodStringTranslate(awStack_78);
      Sexy::ToWString((string *)(*(long *)(this + 0x168) + 0xf0));
      TodStringTranslate(awStack_68);
      Sexy::ToWString((string *)(*(long *)(this + 0x168) + 0xf8));
      TodStringTranslate(awStack_58);
      LawnApp::ShowAccessoryAwardDialog(pLVar1,uVar4,uVar5,auStack_70,auStack_60,asStack_50);
      FUN_05476c50(asStack_50);
      FUN_05476c50(awStack_58);
      FUN_05476c50(auStack_60);
      FUN_05476c50(awStack_68);
      FUN_05476c50(auStack_70);
      FUN_05476c50(awStack_78);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x168) + 0xd8));
      FUN_05475d88(awStack_58,lVar6 + 0x80);
      RefreshPieces(this);
      pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar6 = ProfileMgr::GetCurrentProfile(pPVar7);
      iVar3 = FUN_03813ad8(*(undefined4 *)(lVar6 + 0x40));
      if (iVar3 == 0x1e) {
        lVar6 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
        iVar3 = FUN_03813ae4(*(undefined4 *)(lVar6 + 0x10));
        if ((iVar3 != 0x1e) &&
           (cVar2 = std::operator==((string *)awStack_58,(string *)&DAT_06ab36f0), cVar2 != '\0')) {
          LawnApp::KillGameMaskUI(gLawnApp);
          std::string::string(asStack_50,"UITabControl_0");
          this_01 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_50);
          std::string::~string(asStack_50);
          nop();
          if (this_01 != (UITabControl *)0x0) {
            pUVar9 = (UITabContent *)UITabControl::GetTab(this_01,1);
            UITabControl::SetTabSelected(this_01,pUVar9);
          }
          this_02 = (DTimerManager *)DTimerManager::getInstane();
          std::string::string(asStack_50,"AccessoryTutorial");
          FUN_03814f3c((function<bool(Sexy::Touch_const&)> *)aDStack_38);
          DTimerManager::addTimer(this_02,asStack_50,(function *)aDStack_38,0.2,1);
          std::function<bool(Sexy::Touch_const&)>::~function
                    ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
          std::string::~string(asStack_50);
          nop();
        }
      }
      std::string::~string((string *)awStack_58);
    }
  }
  else {
    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
    if ((this_00 != (PlayerInfo *)0x0) && (*(long *)(this + 0x168) != 0)) {
      PlayerInfo::AddCoins(this_00,*(int *)(*(long *)(this + 0x168) + 0x114));
    }
    pLVar1 = gLawnApp;
    FUN_05478178(awStack_58,L"[ACCESSORY_EXCHANGE_FAILED]",awStack_68);
    FUN_05478178((wstring *)asStack_50,L"[ACCESSORY_EXCHANGE_FAILED_TEXT]",auStack_60);
    pPVar8 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::
    Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
              (aDStack_38,(wstring *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar8,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::RefreshOwnNumber() */

void __thiscall
UINewPlantView_AccessoryPackage::RefreshOwnNumber(UINewPlantView_AccessoryPackage *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[NUM_OWNED_ACCESSORY]");
  Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  iVar1 = PlantAccessoryMgr::GetNumOwnedAccessories();
  TodReplaceNumberString(awStack_18,L"{OWNED_COUNT}",iVar1);
  FUN_054766c8(awStack_18,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  iVar1 = PlantAccessoryMgr::GetMaxOwnedAccessories();
  TodReplaceNumberString(awStack_18,L"{TOTAL_COUNT}",iVar1);
  FUN_054766c8(awStack_18,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::string(asStack_10,"UIText_AccNUM");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  PuzzleTip::SetTip(pUVar2,awStack_18);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_AccessoryPackage::ConfirmSaleAccessory(UIMessageBox*, int) */

void __thiscall
UINewPlantView_AccessoryPackage::ConfirmSaleAccessory
          (UINewPlantView_AccessoryPackage *this,UIMessageBox *param_1,int param_2)

{
  PlantAccessoryMgr *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::SoldTargetAccessory
            (this_00,(string *)(*(long *)(this + 0x188) + 0xe8),
             *(int *)(*(long *)(this + 0x188) + 0xd4));
  return;
}


/* UINewPlantView_AccessoryPackage::ConfirmResetAccessory(UIMessageBox*, int) */

void __thiscall
UINewPlantView_AccessoryPackage::ConfirmResetAccessory
          (UINewPlantView_AccessoryPackage *this,UIMessageBox *param_1,int param_2)

{
  PlantAccessoryMgr *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::ResetTargetAccessory
            (this_00,(string *)(*(long *)(this + 0x188) + 0xe8),
             *(int *)(*(long *)(this + 0x188) + 0xd4));
  return;
}


/* UINewPlantView_AccessoryPackage::ConfirmSteady() */

void __thiscall
UINewPlantView_AccessoryPackage::ConfirmSteady(UINewPlantView_AccessoryPackage *this)

{
  PlantAccessoryMgr *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::SteadyTargetAccessory
            (this_00,(string *)(*(long *)(this + 0x1a8) + 0xe8),
             *(int *)(*(long *)(this + 0x1a8) + 0xd4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::UINewPlantView_AccessoryPackage() */

void __thiscall
UINewPlantView_AccessoryPackage::UINewPlantView_AccessoryPackage
          (UINewPlantView_AccessoryPackage *this)

{
  undefined *puVar1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UINewPlantView_AccessoryPackage>::UISingletonDialog
            ((UISingletonDialog<UINewPlantView_AccessoryPackage> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x140));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_066a5060;
  *(undefined **)(this + 0xd8) = &DAT_066a53c8;
  *(undefined ***)(this + 0x138) = &PTR__UINewPlantView_AccessoryPackage_066a5410;
  *(undefined **)(this + 0x140) = &DAT_066a5458;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  *(undefined8 *)(this + 0x168) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  *(undefined8 *)(this + 0x188) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  *(undefined8 *)(this + 0x1a8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  *(undefined8 *)(this + 0x1c8) = 0;
  Set8BytesTo0(this + 0x1d8);
  this[0x1d0] = (UINewPlantView_AccessoryPackage)0x0;
  this[0x1d1] = (UINewPlantView_AccessoryPackage)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnActionComplete);
  Sexy::Delegate0::
  Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ActionComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnExchangeComplete);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(bool)>>
            ((MessageRouter *)puVar1,Message::ExchangeComplete,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSoldTargetAccessory);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(int)>>
            ((MessageRouter *)puVar1,Message::OnSoldTargetAccessory,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnResetSuccess);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(int)>>
            ((MessageRouter *)puVar1,Message::OnResetSuccess,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSteadySuccess);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(int)>>
            ((MessageRouter *)puVar1,Message::OnSteadySuccess,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_AccessoryPackage::~UINewPlantView_AccessoryPackage() */

void __thiscall
UINewPlantView_AccessoryPackage::~UINewPlantView_AccessoryPackage
          (UINewPlantView_AccessoryPackage *this)

{
  *(undefined ***)this = &PTR_GetClass_066a5060;
  *(undefined **)(this + 0x140) = &DAT_066a5458;
  *(undefined **)(this + 0xd8) = &DAT_066a53c8;
  *(undefined ***)(this + 0x138) = &PTR__UINewPlantView_AccessoryPackage_066a5410;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x1d8));
  std::vector<AccessorySteadyPackageItem*,std::allocator<AccessorySteadyPackageItem*>>::~vector
            ((vector<AccessorySteadyPackageItem*,std::allocator<AccessorySteadyPackageItem*>> *)
             (this + 0x1b0));
  std::vector<AccessorySalePackageItem*,std::allocator<AccessorySalePackageItem*>>::~vector
            ((vector<AccessorySalePackageItem*,std::allocator<AccessorySalePackageItem*>> *)
             (this + 400));
  std::vector<AccessoryPiecesPackageItem*,std::allocator<AccessoryPiecesPackageItem*>>::~vector
            ((vector<AccessoryPiecesPackageItem*,std::allocator<AccessoryPiecesPackageItem*>> *)
             (this + 0x170));
  std::vector<AccessoryPackageItem*,std::allocator<AccessoryPackageItem*>>::~vector
            ((vector<AccessoryPackageItem*,std::allocator<AccessoryPackageItem*>> *)(this + 0x150));
  UISingletonDialog<UINewPlantView_AccessoryPackage>::~UISingletonDialog
            ((UISingletonDialog<UINewPlantView_AccessoryPackage> *)this);
  return;
}


/* non-virtual thunk to UINewPlantView_AccessoryPackage::~UINewPlantView_AccessoryPackage() */

void __thiscall
UINewPlantView_AccessoryPackage::~UINewPlantView_AccessoryPackage
          (UINewPlantView_AccessoryPackage *this)

{
  ~UINewPlantView_AccessoryPackage(this + -0x138);
  return;
}


/* UINewPlantView_AccessoryPackage::~UINewPlantView_AccessoryPackage() */

void __thiscall
UINewPlantView_AccessoryPackage::~UINewPlantView_AccessoryPackage
          (UINewPlantView_AccessoryPackage *this)

{
  ~UINewPlantView_AccessoryPackage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPlantView_AccessoryPackage::~UINewPlantView_AccessoryPackage() */

void __thiscall
UINewPlantView_AccessoryPackage::~UINewPlantView_AccessoryPackage
          (UINewPlantView_AccessoryPackage *this)

{
  ~UINewPlantView_AccessoryPackage(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::ButtonDepress(int) */

void __thiscall
UINewPlantView_AccessoryPackage::ButtonDepress(UINewPlantView_AccessoryPackage *this,int param_1)

{
  undefined4 uVar1;
  LawnApp *this_00;
  int iVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  PVZ2UIDialog *pPVar8;
  PlantAccessoryMgr *pPVar9;
  string *psVar10;
  undefined8 uVar11;
  UIMessageBox *pUVar12;
  Image *pIVar13;
  code *pcVar14;
  int iVar15;
  ulong uVar16;
  wstring awStack_80 [8];
  string asStack_78 [8];
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UINewPlantView_AccessoryPackage>::CloseDialog();
  }
  else if (*(long *)(this + 0x148) == 0) {
LAB_0381e698:
    if (((param_1 == 0x4bb) && (*(long *)(this + 0x168) != 0)) &&
       (pUVar12 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
       pUVar12 != (UIMessageBox *)0x0)) {
      UIMessageBox::SetShowType(pUVar12,6);
      TodStringTranslate(L"[EXCHANGE_CONFIRM_TITLE]");
      FUN_05478178(awStack_50,L"[EXCHANGE_CONFIRM_MESSAGE]",awStack_58);
      TodReplaceNumberString(awStack_50,L"{GOLD_COUNT}",*(int *)(*(long *)(this + 0x168) + 0x114));
      FUN_05476c50(awStack_50);
      nop();
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar12,awStack_60,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar13 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(pUVar12,pIVar13);
      std::string::~string((string *)awStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonOK(pUVar12);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ConfirmExchangePieces);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(UIMessageBox*,int)>
                (aDStack_38,awStack_50);
      UIMessageBox::SetCallback(pUVar12,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  else if (param_1 == 0x457) {
    pPVar9 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    uVar1 = *(undefined4 *)(*(long *)(this + 0x148) + 0xf8);
    psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
    PlantAccessoryMgr::BindTargetAccessory(pPVar9,uVar1,(RtWeakPtr<Sexy::ResourceInfo> *)awStack_50)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_50);
  }
  else if (param_1 == 0x458) {
    pPVar9 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::UnbindTargetAccessory(pPVar9,*(int *)(*(long *)(this + 0x148) + 0xf8));
  }
  else {
    if (param_1 != 0x459) goto LAB_0381e698;
    pUVar12 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar12 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar12,6);
      TodStringTranslate(L"[SWITCH_CONFIRM_TITLE]");
      iVar2 = PlantNameMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
      Plant::GetFormattedNameString((Plant *)awStack_70,(RtWeakPtr<Sexy::ResourceInfo> *)awStack_50)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_50);
      TodStringTranslate(L"[SWITCH_CONFIRM_MESSAGE]");
      uVar11 = FUN_054766ec((Plant *)awStack_70);
      FUN_05478178(awStack_58,uVar11,awStack_60);
      TodReplaceString(awStack_68,L"{PLANT_NAME_1}",awStack_58);
      FUN_054766c8(awStack_68,(RtWeakPtr<Sexy::ResourceInfo> *)awStack_50);
      FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)awStack_50);
      FUN_05476c50(awStack_58);
      nop();
      uVar11 = FUN_054766ec((Plant *)awStack_70);
      FUN_05478178(awStack_58,uVar11,awStack_60);
      TodReplaceString(awStack_68,L"{PLANT_NAME_2}",awStack_58);
      FUN_054766c8(awStack_68,(RtWeakPtr<Sexy::ResourceInfo> *)awStack_50);
      FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)awStack_50);
      FUN_05476c50(awStack_58);
      nop();
      FUN_05477b24(awStack_60,awStack_68);
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar12,awStack_60,awStack_80);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar13 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(pUVar12,pIVar13);
      std::string::~string((string *)awStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonOK(pUVar12);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ConfirmSwitchAccessory);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(UIMessageBox*,int)>
                (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)awStack_50);
      UIMessageBox::SetCallback(pUVar12,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
      FUN_05476c50((Plant *)awStack_70);
      std::string::~string(asStack_78);
      FUN_05476c50(awStack_80);
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    if (param_1 == 0x51f) {
      pUVar12 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar12 == (UIMessageBox *)0x0) goto LAB_0381e6d8;
      UIMessageBox::SetShowType(pUVar12,6);
      TodStringTranslate(L"[SALE_CONFIRM_TITLE]");
      TodStringTranslate(L"[SALE_CONFIRM_MESSAGE]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar12,awStack_60,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar13 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(pUVar12,pIVar13);
      std::string::~string((string *)awStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonOK(pUVar12);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
      pcVar14 = ConfirmSaleAccessory;
    }
    else {
      if (param_1 != 0x520) goto LAB_0381e6c0;
      pUVar12 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar12 == (UIMessageBox *)0x0) goto LAB_0381e6d8;
      UIMessageBox::SetShowType(pUVar12,6);
      TodStringTranslate(L"[CONFIRM_RESET_TITLE]");
      TodStringTranslate(L"[CONFIRM_RESET]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar12,awStack_60,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar13 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(pUVar12,pIVar13);
      std::string::~string((string *)awStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonOK(pUVar12);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
      pcVar14 = ConfirmResetAccessory;
    }
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar14);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(UIMessageBox*,int)>
              (aDStack_38,awStack_50);
    UIMessageBox::SetCallback(pUVar12,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
    goto LAB_0381e6d8;
  }
LAB_0381e6c0:
  if ((param_1 != 0x583) || (*(long *)(this + 0x1a8) == 0)) {
    if (param_1 == 0x584) {
      showSuperAccessoryDescription(this);
    }
    goto LAB_0381e6d8;
  }
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  TodStringTranslate(L"[CONFIRM_STEADY]");
  FUN_05478178((string *)awStack_50,L"[MAT_SPACE_TIME_CRYSTAL]",awStack_60);
  TodReplaceString(awStack_58,L"{MAT1}",awStack_50);
  FUN_05476c50((string *)awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  FUN_05478178(awStack_58,L"[MAT_SPACE_TIME_DUST]",awStack_60);
  TodReplaceString(awStack_70,L"{MAT2}",awStack_58);
  FUN_054766c8(awStack_70,(string *)awStack_50);
  FUN_05476c50((string *)awStack_50);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[REWARD_TYPE_COIN]",awStack_60);
  TodReplaceString(awStack_70,L"{MAT3}",awStack_58);
  FUN_054766c8(awStack_70,(string *)awStack_50);
  FUN_05476c50((string *)awStack_50);
  FUN_05476c50(awStack_58);
  nop();
  iVar2 = PlayerInfo::GetPlantAccessoryLevelById
                    (this_02,(long)*(int *)(*(long *)(this + 0x1a8) + 0xd4));
  if (iVar2 < 0) {
LAB_0381ea78:
    iVar2 = 0;
    iVar15 = 0;
    iVar3 = iVar15;
  }
  else {
    uVar16 = (ulong)iVar2;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x1a8) + 0xd8));
    uVar5 = FUN_03813c24(*(undefined8 *)(lVar4 + 0x90),*(undefined8 *)(lVar4 + 0x98));
    if (uVar5 <= uVar16) goto LAB_0381ea78;
    iVar2 = 0;
    iVar15 = 0;
    uVar5 = 0;
    iVar3 = iVar15;
    while( true ) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x1a8) + 0xd8));
      lVar4 = FUN_03813c38(*(undefined8 *)(lVar4 + 0x90),uVar16);
      uVar6 = FUN_03813c44(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
      if (uVar6 <= uVar5) break;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x1a8) + 0xd8));
      lVar4 = FUN_03813c38(*(undefined8 *)(lVar4 + 0x90),uVar16);
      piVar7 = (int *)FUN_03813c50(*(undefined8 *)(lVar4 + 8),uVar5);
      if (*piVar7 == 0x5a36) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x1a8) + 0xd8));
        lVar4 = FUN_03813c38(*(undefined8 *)(lVar4 + 0x90),uVar16);
        lVar4 = FUN_03813c50(*(undefined8 *)(lVar4 + 8),uVar5);
        iVar3 = *(int *)(lVar4 + 4);
        uVar5 = uVar5 + 1;
      }
      else {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x1a8) + 0xd8));
        lVar4 = FUN_03813c38(*(undefined8 *)(lVar4 + 0x90),uVar16);
        piVar7 = (int *)FUN_03813c50(*(undefined8 *)(lVar4 + 8),uVar5);
        if (*piVar7 == 0x5a37) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x1a8) + 0xd8));
          lVar4 = FUN_03813c38(*(undefined8 *)(lVar4 + 0x90),uVar16);
          lVar4 = FUN_03813c50(*(undefined8 *)(lVar4 + 8),uVar5);
          iVar15 = *(int *)(lVar4 + 4);
          uVar5 = uVar5 + 1;
        }
        else {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x1a8) + 0xd8));
          lVar4 = FUN_03813c38(*(undefined8 *)(lVar4 + 0x90),uVar16);
          piVar7 = (int *)FUN_03813c50(*(undefined8 *)(lVar4 + 8),uVar5);
          if (*piVar7 == 0xfad) {
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x1a8) + 0xd8));
            lVar4 = FUN_03813c38(*(undefined8 *)(lVar4 + 0x90),uVar16);
            lVar4 = FUN_03813c50(*(undefined8 *)(lVar4 + 8),uVar5);
            iVar2 = *(int *)(lVar4 + 4);
            uVar5 = uVar5 + 1;
          }
          else {
            uVar5 = uVar5 + 1;
          }
        }
      }
    }
  }
  TodReplaceNumberString(awStack_70,L"{NUM1}",iVar3);
  FUN_054766c8(awStack_70,(string *)awStack_50);
  FUN_05476c50((string *)awStack_50);
  TodReplaceNumberString(awStack_70,L"{NUM2}",iVar15);
  FUN_054766c8(awStack_70,(string *)awStack_50);
  FUN_05476c50((string *)awStack_50);
  TodReplaceNumberString(awStack_70,L"{NUM3}",iVar2);
  FUN_054766c8(awStack_70,(string *)awStack_50);
  FUN_05476c50((string *)awStack_50);
  iVar3 = PlayerInfo::GetNumCoins(this_02,true);
  this_00 = gLawnApp;
  if (iVar3 < iVar2) {
    pUVar12 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar12 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar12,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[COIN_NOT_ENOUGH_DIALOG_TITLE]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar12,awStack_60,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar13 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(pUVar12,pIVar13);
      std::string::~string((string *)awStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(pUVar12);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  else {
    FUN_05478178((string *)awStack_50,L"[CONFIRM_STEADY_TITLE]",awStack_58);
    pPVar8 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_70);
    FUN_05476c50((string *)awStack_50);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_CANCEL]",awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::
    Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
              ((Delegate0 *)aDStack_38,(string *)awStack_50);
    PVZ2UIDialog::AddButton(pPVar8,awStack_58,(Delegate0 *)aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmSteady);
    Sexy::Delegate0::
    Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
              ((Delegate0 *)aDStack_38,(string *)awStack_50);
    PVZ2UIDialog::AddButton(pPVar8,awStack_58,(Delegate0 *)aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  FUN_05476c50(awStack_70);
LAB_0381e6d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPlantView_AccessoryPackage::ButtonDepress(int) */

void __thiscall
UINewPlantView_AccessoryPackage::ButtonDepress(UINewPlantView_AccessoryPackage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::SelectAccessoryItem(AccessoryPackageItem*) */

void __thiscall
UINewPlantView_AccessoryPackage::SelectAccessoryItem
          (UINewPlantView_AccessoryPackage *this,AccessoryPackageItem *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  UIWidgetImage *pUVar6;
  UIWidgetText *pUVar7;
  string *psVar8;
  ProfileMgr *pPVar9;
  PlayerInfo *this_00;
  ulong uVar10;
  PVZ2UIButton *this_01;
  CrazyNPCManager *pCVar11;
  PlantAccessoryMgr *pPVar12;
  wchar_t *pwVar13;
  AccessoryPackageItem *pAVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_78 [8];
  string asStack_70 [8];
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(AccessoryPackageItem **)(this + 0x148) = param_1;
  if (param_1 == (AccessoryPackageItem *)0x0) goto LAB_0381f790;
  uVar16 = *(undefined8 *)(this + 0x150);
  lVar15 = 0;
  lVar4 = FUN_03813c58(uVar16,*(undefined8 *)(this + 0x158));
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03813c64(uVar16,lVar15);
      pAVar14 = (AccessoryPackageItem *)*puVar5;
      pAVar14[0x160] = (AccessoryPackageItem)0x0;
      if (param_1 == pAVar14) {
        param_1[0x160] = (AccessoryPackageItem)0x1;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar4);
  }
  std::string::string(asStack_50,"UIImage_AccessoryFrame");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_50);
  UIWidgetImage::SetImage(pUVar6,*(Image **)(param_1 + 0x140));
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"UIImage_AccessoryImage");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_50);
  UIWidgetImage::SetImage(pUVar6,*(Image **)(param_1 + 0x148));
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"UIImage_AccessoryLevel");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_50);
  UIWidgetImage::SetImage(pUVar6,*(Image **)(param_1 + 0x150));
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_60,"UIText_AccessoryName");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
  Sexy::ToWString((string *)(param_1 + 0x108));
  TodStringTranslate(awStack_58);
  PuzzleTip::SetTip(pUVar7,asStack_50);
  FUN_05476c50(asStack_50);
  FUN_05476c50(awStack_58);
  std::string::~string(asStack_60);
  nop();
  if (*(int *)(param_1 + 0xd8) < 1) {
    std::string::string((string *)awStack_58,"UIText_AccessoryUse");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_58);
    FUN_05476574(asStack_50);
    PuzzleTip::SetTip(pUVar7,asStack_50);
    FUN_05476c50(asStack_50);
    std::string::~string((string *)awStack_58);
    nop();
  }
  else {
    iVar3 = PlantNameMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    FUN_05478178(asStack_50,L"[ACCESSORY_USE_BY_PLANT]",auStack_78);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
    Plant::GetFormattedNameString((Plant *)awStack_58,asStack_60);
    TodReplaceString((wstring *)asStack_50,L"{PLANT}",awStack_58);
    FUN_05476c50(awStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    FUN_05476c50(asStack_50);
    nop();
    std::string::string(asStack_50,"UIText_AccessoryUse");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
    PuzzleTip::SetTip(pUVar7,auStack_68);
    std::string::~string(asStack_50);
    nop();
    FUN_05476c50(auStack_68);
    std::string::~string(asStack_70);
  }
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  iVar3 = PlayerInfo::GetPlantAccessoryLevelById(this_00,(long)*(int *)(param_1 + 0xf8));
  if (iVar3 == 0) {
    std::string::string(asStack_60,"UIText_AccessoryBoost");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
    Sexy::ToWString((string *)(param_1 + 0x118));
    TodStringTranslate(awStack_58);
LAB_0381f570:
    PuzzleTip::SetTip(pUVar7,asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    std::string::~string(asStack_60);
    nop();
  }
  else if (0 < iVar3) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x100));
    uVar10 = FUN_03813c24(*(undefined8 *)(lVar4 + 0x90),*(undefined8 *)(lVar4 + 0x98));
    if ((ulong)(long)iVar3 <= uVar10) {
      std::string::string(asStack_60,"UIText_AccessoryBoost");
      pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x100));
      lVar4 = FUN_03813c38(*(undefined8 *)(lVar4 + 0x90),(long)(iVar3 + -1));
      Sexy::ToWString((string *)(lVar4 + 0x20));
      TodStringTranslate(awStack_58);
      goto LAB_0381f570;
    }
  }
  std::string::string(asStack_60,"UIText_AccessoryDescription");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
  Sexy::ToWString((string *)(param_1 + 0x110));
  TodStringTranslate(awStack_58);
  PuzzleTip::SetTip(pUVar7,asStack_50);
  FUN_05476c50(asStack_50);
  FUN_05476c50(awStack_58);
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_50,"UIButton_AccessoryButton");
  this_01 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (param_1[0x161] == (AccessoryPackageItem)0x0) {
    (**(code **)(*(long *)this_01 + 0x188))(this_01);
    pPVar12 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    uVar1 = *(undefined4 *)(param_1 + 0xf8);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
    iVar3 = PlantAccessoryMgr::CanAccessoryBindTargetPlants(pPVar12,uVar1,asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    if (iVar3 != 0) {
      if (iVar3 == 2) {
        if (*(int *)(param_1 + 0x164) != 2) goto LAB_0381f674;
        pwVar13 = L"[BUTTON_SWITCH]";
        *(undefined4 *)(this_01 + 0xd4) = 0x459;
      }
      else {
        if (iVar3 == 4) {
          if (*(int *)(param_1 + 0x164) != 1) goto LAB_0381f674;
          pwVar13 = L"[BUTTON_UNBIND]";
        }
        else if (iVar3 == 3) {
          (**(code **)(*(long *)this_01 + 0x188))(this_01,1);
          pwVar13 = L"[BUTTON_NOT_ENOUGH_LEVEL]";
        }
        else {
          if ((iVar3 != 5) || (*(int *)(param_1 + 0x164) != 1)) goto LAB_0381f674;
          (**(code **)(*(long *)this_01 + 0x188))(this_01);
          pwVar13 = L"[BUTTON_UNUSEBLE]";
        }
        *(undefined4 *)(this_01 + 0xd4) = 0x458;
      }
      goto LAB_0381f65c;
    }
    if (*(int *)(param_1 + 0x164) == 0) {
      pwVar13 = L"[BUTTON_BIND]";
      *(undefined4 *)(this_01 + 0xd4) = 0x457;
      goto LAB_0381f65c;
    }
  }
  else {
    (**(code **)(*(long *)this_01 + 0x188))(this_01,1);
    pwVar13 = L"[BUTTON_UNUSEBLE]";
LAB_0381f65c:
    TodStringTranslate(pwVar13);
    PVZ2UIButton::SetLabelText(this_01,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
  }
LAB_0381f674:
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(pPVar9);
  iVar3 = FUN_03813ad8(*(undefined4 *)(lVar4 + 0x40));
  if (iVar3 == 0x1e) {
    lVar4 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar3 = FUN_03813ae4(*(undefined4 *)(lVar4 + 0x10));
    if ((((iVar3 != 0x1e) &&
         (cVar2 = std::operator==((string *)(*(long *)(this + 0x148) + 0xe0),(string *)&DAT_06ab36f0
                                 ), cVar2 != '\0')) &&
        (this[0x1d0] != (UINewPlantView_AccessoryPackage)0x0)) &&
       (this[0x1d1] == (UINewPlantView_AccessoryPackage)0x0)) {
      this[0x1d1] = (UINewPlantView_AccessoryPackage)0x1;
      LawnApp::KillGameMaskUI(gLawnApp);
      if ((this_01 == (PVZ2UIButton *)0x0) || (*(int *)(this_01 + 0xd4) != 0x457)) {
        pCVar11 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        if (pCVar11 != (CrazyNPCManager *)0x0) {
          std::string::string(asStack_60,"TUTORIAL_ACCESSORY1_INTRO");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onNarrationFinished);
          Sexy::Delegate0::
          Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
                    (aDStack_38,asStack_50);
          std::string::string((string *)awStack_58,"");
          CrazyNPCManager::StartNarrativeID(pCVar11,asStack_60,aDStack_38,awStack_58);
          std::string::~string((string *)awStack_58);
          nop();
          std::string::~string(asStack_60);
          nop();
        }
      }
      else {
        std::string::string((string *)awStack_58,"");
        Sexy::Insets::Insets((Insets *)asStack_50);
        GameMaskUI::ShowMask(this_01,2,awStack_58,asStack_50);
        std::string::~string((string *)awStack_58);
        nop();
      }
    }
  }
LAB_0381f790:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::ConfirmSwitchAccessory(UIMessageBox*, int) */

void __thiscall
UINewPlantView_AccessoryPackage::ConfirmSwitchAccessory
          (UINewPlantView_AccessoryPackage *this,UIMessageBox *param_1,int param_2)

{
  undefined4 uVar1;
  PlantAccessoryMgr *pPVar2;
  string *psVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    pPVar2 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    uVar1 = *(undefined4 *)(*(long *)(this + 0x148) + 0xf8);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    PlantAccessoryMgr::BindTargetAccessory(pPVar2,uVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_AccessoryPackage::RefreshAccessory() */

void __thiscall
UINewPlantView_AccessoryPackage::RefreshAccessory(UINewPlantView_AccessoryPackage *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x150);
    uVar2 = FUN_03813c58(uVar4,*(undefined8 *)(this + 0x158));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_03813c64(uVar4,uVar3);
    AccessoryPackageItem::Refresh((AccessoryPackageItem *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  SelectAccessoryItem(this,*(AccessoryPackageItem **)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::OnActionComplete() */

void __thiscall
UINewPlantView_AccessoryPackage::OnActionComplete(UINewPlantView_AccessoryPackage *this)

{
  int iVar1;
  NameMapperBase *this_00;
  ProfileMgr *this_01;
  long lVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RefreshAccessory(this);
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_00,(string *)(this + 0x1d8));
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NewPlantView_SwitchAccessory,iVar1);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_01);
  iVar1 = FUN_03813ad8(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x1e) {
    lVar2 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar1 = FUN_03813ae4(*(undefined4 *)(lVar2 + 0x10));
    if (((iVar1 != 0x1e) && (this[0x1d0] != (UINewPlantView_AccessoryPackage)0x0)) &&
       (this[0x1d1] != (UINewPlantView_AccessoryPackage)0x0)) {
      LawnApp::KillGameMaskUI(gLawnApp);
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      if (pCVar3 != (CrazyNPCManager *)0x0) {
        std::string::string(asStack_60,"TUTORIAL_ACCESSORY1_INTRO");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onNarrationFinished);
        Sexy::Delegate0::
        Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
                  (aDStack_38,aCStack_50);
        std::string::string(asStack_58,"");
        CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_60);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_AccessoryPackage::RefreshSteady() */

void __thiscall
UINewPlantView_AccessoryPackage::RefreshSteady(UINewPlantView_AccessoryPackage *this)

{
  AccessorySteadyPackageItem *pAVar1;
  
  pAVar1 = (AccessorySteadyPackageItem *)0x0;
  if (*(AccessorySteadyPackageItem **)(this + 0x1a8) != (AccessorySteadyPackageItem *)0x0) {
    AccessorySteadyPackageItem::Refresh(*(AccessorySteadyPackageItem **)(this + 0x1a8));
    pAVar1 = *(AccessorySteadyPackageItem **)(this + 0x1a8);
  }
  SelectSteadyItem(this,pAVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::OnSteadySuccess(int) */

void UINewPlantView_AccessoryPackage::OnSteadySuccess(int param_1)

{
  LawnApp *this;
  int iVar1;
  ReceivedDataCallback *this_00;
  ProfileMgr *this_01;
  long lVar2;
  PlantNameMapperServerID *this_02;
  PVZ2UIDialog *pPVar3;
  NameMapperBase *this_03;
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (ReceivedDataCallback *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_01);
  if ((lVar2 != 0) && (0 < *(int *)(*(long *)(this_00 + 0x1a8) + 0xe0))) {
    this_02 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_02,*(int *)(*(long *)(this_00 + 0x1a8) + 0xe0));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    std::vector<PlantBoost,std::allocator<PlantBoost>>::clear
              ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar2 + 0xa0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  this = gLawnApp;
  FUN_05478178((wstring *)aRStack_50,L"[DICE_WILL_CLEAR_DIALOG_TITLE]",auStack_60);
  TodStringTranslate(L"[ACCESSORY_STEADY_SUCCESS_TITLE]");
  pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,(wstring *)aRStack_50,awStack_58);
  FUN_05476c50(awStack_58);
  FUN_05476c50((wstring *)aRStack_50);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (this_00,OnCloseDialog);
  Sexy::Delegate0::
  Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
            (aDStack_38,(wstring *)aRStack_50);
  PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  RefreshSteady((UINewPlantView_AccessoryPackage *)this_00);
  this_03 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_03,(string *)(this_00 + 0x1d8));
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NewPlantView_SwitchAccessory,iVar1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::InitAccessory() */

void __thiscall
UINewPlantView_AccessoryPackage::InitAccessory(UINewPlantView_AccessoryPackage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  UIWidgetImage *pUVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  undefined8 uVar6;
  undefined8 uVar7;
  PVZ2UIScrollingWidget *this_03;
  Widget *this_04;
  AccessoryPackageItem *pAVar8;
  PlantAccessoryInfo *pPVar9;
  ulong uVar10;
  UIWidgetText *pUVar11;
  PVZ2UIButton *pPVar12;
  long lVar13;
  ulong uVar14;
  string asStack_28 [8];
  AccessoryPackageItem *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x148) = 0;
  std::vector<AccessoryPackageItem*,std::allocator<AccessoryPackageItem*>>::clear
            ((vector<AccessoryPackageItem*,std::allocator<AccessoryPackageItem*>> *)(this + 0x150));
  iVar3 = 0;
  std::string::string(asStack_18,"UIImage_AccessoryBanner");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)PlayerInfo::GetPlantAccessoryInfos(this_01);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_02);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_02);
  FUN_0382144c(uVar6,uVar7);
  this_03 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_03,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_03814ff8(10);
  iVar2 = FUN_03814ff8(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar1,iVar1,*(int *)(pUVar5 + 0x50) - iVar2,
             *(int *)(pUVar5 + 0x54) - iVar2);
  (**(code **)(*(long *)this_03 + 0x1a0))(this_03,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_03,2);
  this_04 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_04);
  (**(code **)(*(long *)this_04 + 0x198))
            (this_04,0,0,*(undefined4 *)(this_03 + 0x50),*(undefined4 *)(this_03 + 0x54));
  uVar14 = 0;
  while( true ) {
    iVar1 = (int)uVar14;
    uVar10 = FUN_03813c10(*(undefined8 *)this_02,*(undefined8 *)(this_02 + 8));
    if (uVar10 <= uVar14) break;
    pAVar8 = ::operator_new(0x168);
    AccessoryPackageItem::AccessoryPackageItem(pAVar8);
    local_20 = pAVar8;
    iVar3 = FUN_03814ff8(0x46);
    uVar4 = FUN_03814ff8(0x3c);
    (**(code **)(*(long *)pAVar8 + 0x198))
              (pAVar8,iVar3 * (iVar1 % 5),iVar3 * (iVar1 / 5),uVar4,uVar4);
    pAVar8 = local_20;
    pPVar9 = (PlantAccessoryInfo *)FUN_03813c1c(*(undefined8 *)this_02,uVar14);
    AccessoryPackageItem::InitView(pAVar8,iVar1,pPVar9);
    (**(code **)(*(long *)this_04 + 0x60))(this_04,local_20);
    iVar3 = *(int *)(local_20 + 0x4c) + *(int *)(local_20 + 0x54);
    std::vector<AccessoryPackageItem*,std::allocator<AccessoryPackageItem*>>::push_back
              ((vector<AccessoryPackageItem*,std::allocator<AccessoryPackageItem*>> *)(this + 0x150)
               ,&local_20);
    uVar14 = uVar14 + 1;
  }
  lVar13 = *(long *)this_03;
  *(int *)(this_04 + 0x54) = iVar3;
  (**(code **)(lVar13 + 0x60))(this_03,this_04);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_03);
  std::string::string((string *)&local_20,"UIImage_AccessoryFrame");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_AccessoryImage");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_AccessoryLevel");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string(asStack_28,"UIText_AccessoryName");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  FUN_05476574((string *)&local_20);
  PuzzleTip::SetTip(pUVar11,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"UIText_AccessoryUse");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  FUN_05476574((string *)&local_20);
  PuzzleTip::SetTip(pUVar11,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"UIText_AccessoryBoost");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  FUN_05476574((string *)&local_20);
  PuzzleTip::SetTip(pUVar11,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"UIText_AccessoryDescription");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  FUN_05476574((string *)&local_20);
  PuzzleTip::SetTip(pUVar11,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"UIButton_AccessoryButton");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_28);
  TodStringTranslate(L"[BUTTON_UNUSEBLE]");
  PVZ2UIButton::SetLabelText(pPVar12,(wstring *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)&local_20,"UIButton_AccessoryButton");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_20);
  (**(code **)(*(long *)pPVar12 + 0x188))(pPVar12,1);
  std::string::~string((string *)&local_20);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::InitView(std::string const&) */

void UINewPlantView_AccessoryPackage::InitView(string *param_1)

{
  undefined *puVar1;
  int iVar2;
  ProfileMgr *this;
  long lVar3;
  UITabControl *this_00;
  UITabContent *pUVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 0x1d8);
  RefreshOwnNumber((UINewPlantView_AccessoryPackage *)param_1);
  InitAccessory((UINewPlantView_AccessoryPackage *)param_1);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this);
  iVar2 = FUN_03813ad8(*(undefined4 *)(lVar3 + 0x40));
  if (iVar2 == 0x1e) {
    lVar3 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar2 = FUN_03813ae4(*(undefined4 *)(lVar3 + 0x10));
    if (iVar2 != 0x1e) {
      LawnApp::KillGameMaskUI(gLawnApp);
      std::string::string(asStack_10,"UITabControl_0");
      this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)param_1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (this_00 != (UITabControl *)0x0) {
        pUVar4 = (UITabContent *)UITabControl::GetTab(this_00,2);
        UITabControl::SetTabSelected(this_00,pUVar4);
      }
      puVar1 = gMessageRouter;
      FUN_05475d88(asStack_10,&DAT_06ab36f0);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::NewPlantView_NotifyAccessorySelectContent,
                 asStack_10);
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::InitExchange() */

void __thiscall UINewPlantView_AccessoryPackage::InitExchange(UINewPlantView_AccessoryPackage *this)

{
  vector<AccessoryPiecesPackageItem*,std::allocator<AccessoryPiecesPackageItem*>> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  UIWidgetImage *pUVar5;
  ProfileMgr *this_01;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  long lVar6;
  AccessoryPiecesPackageItem *pAVar7;
  RtWeakPtrBase *pRVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  UIWidgetText *pUVar13;
  PVZ2UIButton *pPVar14;
  string *extraout_x1;
  long *plVar15;
  ulong uVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  AccessoryPiecesPackageItem *local_28;
  undefined8 local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<AccessoryPiecesPackageItem*,std::allocator<AccessoryPiecesPackageItem*>> *)
            (this + 0x170);
  *(undefined8 *)(this + 0x168) = 0;
  std::vector<AccessoryPiecesPackageItem*,std::allocator<AccessoryPiecesPackageItem*>>::clear
            (this_00);
  std::string::string(asStack_18,"UIImage_ExchangeBanner");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_01);
  std::string::string(asStack_18,"PvZ2 Accessories");
  Magento::GetStore((Magento *)asStack_18,extraout_x1);
  std::string::~string(asStack_18);
  nop();
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_03814ff8(10);
  iVar3 = FUN_03814ff8(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,
             *(int *)(pUVar5 + 0x54) - iVar3);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar6 + 0x60));
  while( true ) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar6 + 0x60));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_20);
    if (!bVar1) break;
    pAVar7 = ::operator_new(0x138);
    AccessoryPiecesPackageItem::AccessoryPiecesPackageItem(pAVar7);
    local_28 = pAVar7;
    uVar4 = FUN_03814ff8(0x3c);
    (**(code **)(*(long *)pAVar7 + 0x198))(pAVar7,0,0,uVar4,uVar4);
    pAVar7 = local_28;
    pRVar8 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar8);
    AccessoryPiecesPackageItem::InitView(pAVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    std::vector<AccessoryPiecesPackageItem*,std::allocator<AccessoryPiecesPackageItem*>>::push_back
              (this_00,&local_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  iVar2 = 0;
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)this_00);
  FUN_03821674(uVar9,uVar10);
  uVar16 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(this + 0x170);
    uVar12 = FUN_03813c6c(uVar9,*(undefined8 *)(this + 0x178));
    if (uVar12 <= uVar16) break;
    puVar11 = (undefined8 *)FUN_03813c78(uVar9,uVar16);
    plVar15 = (long *)*puVar11;
    iVar2 = FUN_03814ff8(0x46);
    uVar4 = FUN_03814ff8(0x3c);
    (**(code **)(*plVar15 + 0x198))
              (plVar15,iVar2 * ((int)uVar16 % 5),iVar2 * ((int)uVar16 / 5),uVar4,uVar4);
    (**(code **)(*(long *)this_03 + 0x60))(this_03,plVar15);
    iVar2 = *(int *)((long)plVar15 + 0x4c) + *(int *)((long)plVar15 + 0x54);
    uVar16 = uVar16 + 1;
  }
  lVar6 = *(long *)this_02;
  *(int *)(this_03 + 0x54) = iVar2;
  (**(code **)(lVar6 + 0x60))(this_02,this_03);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_02);
  std::string::string((string *)&local_20,"UIImage_ExchangeFrame");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"UIImage_ExchangeImage");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_28,"UIText_ExchangeName");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  FUN_05476574((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  PuzzleTip::SetTip(pUVar13,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIText_ExchangeUse");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  FUN_05476574((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  PuzzleTip::SetTip(pUVar13,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIText_ExchangeBoost");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  FUN_05476574((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  PuzzleTip::SetTip(pUVar13,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIText_ExchangeDescription");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  FUN_05476574((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  PuzzleTip::SetTip(pUVar13,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIButton_ExchangeButton");
  pPVar14 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_28);
  TodStringTranslate(L"[BUTTON_EXCHANGE]");
  PVZ2UIButton::SetLabelText(pPVar14,(wstring *)&local_20);
  FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_20,"UIButton_ExchangeButton");
  pPVar14 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_20);
  (**(code **)(*(long *)pPVar14 + 0x188))(pPVar14,1);
  std::string::~string((string *)&local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::InitSale() */

void __thiscall UINewPlantView_AccessoryPackage::InitSale(UINewPlantView_AccessoryPackage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  UIWidgetImage *pUVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar6;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  AccessorySalePackageItem *pAVar7;
  PlantAccessoryInfo *pPVar8;
  ulong uVar9;
  UIWidgetText *pUVar10;
  PVZ2UIButton *pPVar11;
  long lVar12;
  ulong uVar13;
  string asStack_40 [8];
  AccessorySalePackageItem *local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x188) = 0;
  std::vector<AccessorySalePackageItem*,std::allocator<AccessorySalePackageItem*>>::clear
            ((vector<AccessorySalePackageItem*,std::allocator<AccessorySalePackageItem*>> *)
             (this + 400));
  iVar3 = 0;
  std::string::string((string *)&local_20,"UIImage_SaleBanner");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar6 = (vector *)PlayerInfo::GetPlantAccessoryInfos(this_01);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_20,pvVar6);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_03814ff8(10);
  iVar2 = FUN_03814ff8(0x14);
  Sexy::Insets::Insets
            (aIStack_30,iVar1,iVar1,*(int *)(pUVar5 + 0x50) - iVar2,*(int *)(pUVar5 + 0x54) - iVar2)
  ;
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_30);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  uVar13 = 0;
  while( true ) {
    iVar1 = (int)uVar13;
    uVar9 = FUN_03813c10(local_20,local_18);
    if (uVar9 <= uVar13) break;
    pAVar7 = ::operator_new(0x160);
    AccessorySalePackageItem::AccessorySalePackageItem(pAVar7);
    local_38 = pAVar7;
    iVar3 = FUN_03814ff8(0x46);
    uVar4 = FUN_03814ff8(0x3c);
    (**(code **)(*(long *)pAVar7 + 0x198))
              (pAVar7,iVar3 * (iVar1 % 5),iVar3 * (iVar1 / 5),uVar4,uVar4);
    pAVar7 = local_38;
    pPVar8 = (PlantAccessoryInfo *)FUN_03813c1c(local_20,uVar13);
    AccessorySalePackageItem::InitView(pAVar7,iVar1,pPVar8);
    (**(code **)(*(long *)this_03 + 0x60))(this_03,local_38);
    iVar3 = *(int *)(local_38 + 0x4c) + *(int *)(local_38 + 0x54);
    std::vector<AccessorySalePackageItem*,std::allocator<AccessorySalePackageItem*>>::push_back
              ((vector<AccessorySalePackageItem*,std::allocator<AccessorySalePackageItem*>> *)
               (this + 400),&local_38);
    uVar13 = uVar13 + 1;
  }
  lVar12 = *(long *)this_02;
  *(int *)(this_03 + 0x54) = iVar3;
  (**(code **)(lVar12 + 0x60))(this_02,this_03);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_02);
  std::string::string((string *)&local_38,"UIImage_SaleFrame");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_38);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIImage_SaleImage");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_38);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIImage_SaleLevel");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_38);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string((string *)&local_38);
  nop();
  std::string::string(asStack_40,"UIText_SaleName");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  FUN_05476574((string *)&local_38);
  PuzzleTip::SetTip(pUVar10,(string *)&local_38);
  FUN_05476c50((string *)&local_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIText_SaleUse");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  FUN_05476574((string *)&local_38);
  PuzzleTip::SetTip(pUVar10,(string *)&local_38);
  FUN_05476c50((string *)&local_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIText_SaleBoost");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  FUN_05476574((string *)&local_38);
  PuzzleTip::SetTip(pUVar10,(string *)&local_38);
  FUN_05476c50((string *)&local_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIText_SaleDescription");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  FUN_05476574((string *)&local_38);
  PuzzleTip::SetTip(pUVar10,(string *)&local_38);
  FUN_05476c50((string *)&local_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string((string *)&local_38,"UIButton_SaleButton");
  pPVar11 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_38);
  (**(code **)(*(long *)pPVar11 + 0x188))(pPVar11,1);
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIButton_SaleReset");
  pPVar11 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_38);
  (**(code **)(*(long *)pPVar11 + 0x188))(pPVar11,1);
  std::string::~string((string *)&local_38);
  nop();
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::~vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::OnSoldTargetAccessory(int) */

void __thiscall
UINewPlantView_AccessoryPackage::OnSoldTargetAccessory
          (UINewPlantView_AccessoryPackage *this,int param_1)

{
  LawnApp *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PlantNameMapperServerID *this_03;
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    PlayerInfo::AddCoins(this_02,*(int *)(*(long *)(this + 0x188) + 0x130));
    if (0 < *(int *)(*(long *)(this + 0x188) + 0xe0)) {
      this_03 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_03,*(int *)(*(long *)(this + 0x188) + 0xe0));
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      std::vector<PlantBoost,std::allocator<PlantBoost>>::clear
                ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar1 + 0xa0));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    }
    puVar2 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_02);
    if (((-1 < param_1) && (uVar3 = FUN_03813c10(*puVar2,puVar2[1]), (ulong)(long)param_1 < uVar3))
       || ((param_1 = *(int *)(*(long *)(this + 0x188) + 0xd4), -1 < param_1 &&
           (uVar3 = FUN_03813c10(*puVar2,puVar2[1]), (ulong)(long)param_1 < uVar3)))) {
      PlayerInfo::RemovePlantAccessoryInfos(this_02,param_1);
    }
  }
  TodStringTranslate(L"[SALE_SUCCESS_MESSAGE]");
  TodReplaceNumberString
            ((wstring *)aRStack_50,L"{GOLD_COUNT}",*(int *)(*(long *)(this + 0x188) + 0x130));
  FUN_05476c50((wstring *)aRStack_50);
  this_00 = gLawnApp;
  FUN_05478178((wstring *)aRStack_50,L"[SALE_SUCCESS_TITLE]",auStack_58);
  pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,(wstring *)aRStack_50,awStack_60);
  FUN_05476c50((wstring *)aRStack_50);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCloseDialog);
  Sexy::Delegate0::
  Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
            (aDStack_38,(wstring *)aRStack_50);
  PVZ2UIDialog::AddButton(pPVar4,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  InitSale(this);
  FUN_05476c50(awStack_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::OnResetSuccess(int) */

void UINewPlantView_AccessoryPackage::OnResetSuccess(int param_1)

{
  LawnApp *this;
  ReceivedDataCallback *this_00;
  ProfileMgr *this_01;
  long lVar1;
  PlantNameMapperServerID *this_02;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (ReceivedDataCallback *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_01);
  if ((lVar1 != 0) && (0 < *(int *)(*(long *)(this_00 + 0x188) + 0xe0))) {
    this_02 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_02,*(int *)(*(long *)(this_00 + 0x188) + 0xe0));
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    std::vector<PlantBoost,std::allocator<PlantBoost>>::clear
              ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar1 + 0xa0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  this = gLawnApp;
  FUN_05478178((wstring *)aRStack_50,L"[RESET_SUCCESS_TITLE]",auStack_60);
  TodStringTranslate(L"[RESET_SUCCESS_MESSAGE]");
  pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,(wstring *)aRStack_50,awStack_58);
  FUN_05476c50(awStack_58);
  FUN_05476c50((wstring *)aRStack_50);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (this_00,OnCloseDialog);
  Sexy::Delegate0::
  Delegate0<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)()>
            (aDStack_38,(wstring *)aRStack_50);
  PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  InitSale((UINewPlantView_AccessoryPackage *)this_00);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::InitSteady() */

void __thiscall UINewPlantView_AccessoryPackage::InitSteady(UINewPlantView_AccessoryPackage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  UIWidgetImage *pUVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar6;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  ulong uVar7;
  string *psVar8;
  long lVar9;
  AccessorySteadyPackageItem *pAVar10;
  PlantAccessoryInfo *pPVar11;
  UIWidgetText *pUVar12;
  PVZ2UIButton *pPVar13;
  int iVar14;
  ulong uVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  AccessorySteadyPackageItem *local_60;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  Insets aIStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar14 = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  std::vector<AccessorySteadyPackageItem*,std::allocator<AccessorySteadyPackageItem*>>::clear
            ((vector<AccessorySteadyPackageItem*,std::allocator<AccessorySteadyPackageItem*>> *)
             (this + 0x1b0));
  std::string::string(asStack_28,"UIImage_SteadyBanner");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar6 = (vector *)PlayerInfo::GetPlantAccessoryInfos(this_01);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_40,pvVar6);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_03814ff8(10);
  iVar2 = FUN_03814ff8(0x14);
  Sexy::Insets::Insets
            (aIStack_50,iVar1,iVar1,*(int *)(pUVar5 + 0x50) - iVar2,*(int *)(pUVar5 + 0x54) - iVar2)
  ;
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_50);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  iVar1 = iVar14;
  for (uVar15 = 0; uVar7 = FUN_03813c10(local_40,local_38), uVar15 < uVar7; uVar15 = uVar15 + 1) {
    psVar8 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    FUN_03813c1c(local_40,uVar15);
    PlantAccessoryMgr::GetAccessoryByType(psVar8);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    if (*(int *)(lVar9 + 0x80) == 5) {
      pAVar10 = ::operator_new(0x160);
      AccessorySteadyPackageItem::AccessorySteadyPackageItem(pAVar10);
      local_60 = pAVar10;
      iVar3 = FUN_03814ff8(0x46);
      iVar2 = iVar14 / 5;
      iVar1 = iVar14 % 5;
      iVar14 = iVar14 + 1;
      uVar4 = FUN_03814ff8(0x3c);
      (**(code **)(*(long *)pAVar10 + 0x198))(pAVar10,iVar3 * iVar1,iVar3 * iVar2,uVar4,uVar4);
      pAVar10 = local_60;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_68);
      pPVar11 = (PlantAccessoryInfo *)FUN_03813c1c(local_40,uVar15);
      PlantAccessoryInfo::PlantAccessoryInfo((PlantAccessoryInfo *)asStack_28,pPVar11);
      AccessorySteadyPackageItem::InitView(pAVar10,uVar15 & 0xffffffff,aRStack_58,asStack_28);
      PakRecord::~PakRecord((PakRecord *)asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      (**(code **)(*(long *)this_03 + 0x60))(this_03,local_60);
      iVar1 = *(int *)(local_60 + 0x4c) + *(int *)(local_60 + 0x54);
      std::vector<AccessorySteadyPackageItem*,std::allocator<AccessorySteadyPackageItem*>>::
      push_back((vector<AccessorySteadyPackageItem*,std::allocator<AccessorySteadyPackageItem*>> *)
                (this + 0x1b0),&local_60);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
  lVar9 = *(long *)this_02;
  *(int *)(this_03 + 0x54) = iVar1;
  (**(code **)(lVar9 + 0x60))(this_02,this_03);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_02);
  std::string::string(asStack_28,"UIImage_SteadyFrameLeft");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_28);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"UIImage_SteadyImageLeft");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_28);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"UIImage_SteadyLevelLeft");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_28);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_58,"UIText_SteadyBoostLeft");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aRStack_58);
  FUN_05476574(asStack_28);
  PuzzleTip::SetTip(pUVar12,asStack_28);
  FUN_05476c50(asStack_28);
  std::string::~string((string *)aRStack_58);
  nop();
  std::string::string(asStack_28,"UIImage_SteadyFrameRight");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_28);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"UIImage_SteadyImageRight");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_28);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"UIImage_SteadyLevelRight");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_28);
  UIWidgetImage::SetImage(pUVar5,(Image *)0x0);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_58,"UIText_SteadyBoostRight");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aRStack_58);
  FUN_05476574(asStack_28);
  PuzzleTip::SetTip(pUVar12,asStack_28);
  FUN_05476c50(asStack_28);
  std::string::~string((string *)aRStack_58);
  nop();
  std::string::string((string *)aRStack_58,"UIText_SteadyDescription");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aRStack_58);
  FUN_05476574(asStack_28);
  PuzzleTip::SetTip(pUVar12,asStack_28);
  FUN_05476c50(asStack_28);
  std::string::~string((string *)aRStack_58);
  nop();
  std::string::string((string *)aRStack_58,"UIText_SteadyCrystal");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aRStack_58);
  FUN_05476574(asStack_28);
  PuzzleTip::SetTip(pUVar12,asStack_28);
  FUN_05476c50(asStack_28);
  std::string::~string((string *)aRStack_58);
  nop();
  std::string::string((string *)aRStack_58,"UIText_SteadyDust");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aRStack_58);
  FUN_05476574(asStack_28);
  PuzzleTip::SetTip(pUVar12,asStack_28);
  FUN_05476c50(asStack_28);
  std::string::~string((string *)aRStack_58);
  nop();
  std::string::string((string *)aRStack_58,"UIText_SteadyCoin");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aRStack_58);
  FUN_05476574(asStack_28);
  PuzzleTip::SetTip(pUVar12,asStack_28);
  FUN_05476c50(asStack_28);
  std::string::~string((string *)aRStack_58);
  nop();
  std::string::string(asStack_28,"UIButton_SteadyButton");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_28);
  (**(code **)(*(long *)pPVar13 + 0x188))(pPVar13,1);
  std::string::~string(asStack_28);
  nop();
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::~vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_AccessoryPackage::TabSelectionChanged(int) */

void __thiscall
UINewPlantView_AccessoryPackage::TabSelectionChanged
          (UINewPlantView_AccessoryPackage *this,int param_1)

{
  if (param_1 == 1) {
    InitAccessory(this);
    return;
  }
  if (param_1 == 2) {
    InitExchange(this);
    return;
  }
  if (param_1 == 3) {
    InitSale(this);
    return;
  }
  if (param_1 != 4) {
    return;
  }
  InitSteady(this);
  return;
}


/* non-virtual thunk to UINewPlantView_AccessoryPackage::TabSelectionChanged(int) */

void __thiscall
UINewPlantView_AccessoryPackage::TabSelectionChanged
          (UINewPlantView_AccessoryPackage *this,int param_1)

{
  TabSelectionChanged(this + -0x140,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_AccessoryPackage::ConfirmExchangePieces(UIMessageBox*, int) */

void __thiscall
UINewPlantView_AccessoryPackage::ConfirmExchangePieces
          (UINewPlantView_AccessoryPackage *this,UIMessageBox *param_1,int param_2)

{
  long lVar1;
  char *__s;
  TGALogMgr *this_00;
  PlantAccessoryMgr *this_01;
  size_t __n;
  undefined4 local_5c;
  string asStack_58 [16];
  TGAPlantWarsData aTStack_48 [16];
  undefined1 auStack_38 [16];
  string asStack_28 [32];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    TGAPlantWarsData::TGAPlantWarsData(aTStack_48);
    local_5c = 3;
    FUN_03813954(asStack_58,&local_5c);
    FUN_05474278(aTStack_48,asStack_58);
    std::string::~string(asStack_58);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x168) + 0xd8));
    thunk_FUN_05475e00(auStack_38,lVar1 + 0x80);
    DString::DString((DString *)asStack_58,*(int *)(*(long *)(this + 0x168) + 0x114));
    __s = (char *)DString::c_str((DString *)asStack_58);
    std::string::append(asStack_28,__s,__n);
    DString::~DString((DString *)asStack_58);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogDecorateData(this_00,(TGALogPlantDecorate *)aTStack_48);
    this_01 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x168) + 0xd8));
    PlantAccessoryMgr::ExchangeTargetAccessory(this_01,(string *)(lVar1 + 0x80));
    TGAPlantWarsData::~TGAPlantWarsData(aTStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

