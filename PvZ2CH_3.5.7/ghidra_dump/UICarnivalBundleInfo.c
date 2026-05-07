// Class: UICarnivalBundleInfo


/* UICarnivalBundleInfo::~UICarnivalBundleInfo() */

void __thiscall UICarnivalBundleInfo::~UICarnivalBundleInfo(UICarnivalBundleInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_066e6950;
  *(undefined **)(this + 0xd8) = &DAT_066e6ca0;
  UISingletonDialog<UICarnivalBundleInfo>::~UISingletonDialog
            ((UISingletonDialog<UICarnivalBundleInfo> *)this);
  return;
}


/* UICarnivalBundleInfo::~UICarnivalBundleInfo() */

void __thiscall UICarnivalBundleInfo::~UICarnivalBundleInfo(UICarnivalBundleInfo *this)

{
  ~UICarnivalBundleInfo(this);
  AK::FreeHook(this);
  return;
}


/* UICarnivalBundleInfo::ButtonDepress(int) */

void __thiscall UICarnivalBundleInfo::ButtonDepress(UICarnivalBundleInfo *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UICarnivalBundleInfo>::CloseDialog();
  return;
}


/* non-virtual thunk to UICarnivalBundleInfo::ButtonDepress(int) */

void __thiscall UICarnivalBundleInfo::ButtonDepress(UICarnivalBundleInfo *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UICarnivalBundleInfo::UICarnivalBundleInfo() */

void __thiscall UICarnivalBundleInfo::UICarnivalBundleInfo(UICarnivalBundleInfo *this)

{
  UISingletonDialog<UICarnivalBundleInfo>::UISingletonDialog
            ((UISingletonDialog<UICarnivalBundleInfo> *)this);
  *(undefined ***)this = &PTR_GetClass_066e6950;
  *(undefined **)(this + 0xd8) = &DAT_066e6ca0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnivalBundleInfo::InitView(int, CarnivalBundleData const&) */

void __thiscall
UICarnivalBundleInfo::InitView(UICarnivalBundleInfo *this,int param_1,CarnivalBundleData *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UIWidgetText *pUVar7;
  int *piVar8;
  long lVar9;
  UIWidgetImage *pUVar10;
  Widget *pWVar11;
  long *plVar12;
  ulong uVar13;
  code *__n;
  undefined8 uVar14;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  wstring awStack_48 [8];
  string asStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [40];
  wstring awStack_10 [8];
  long local_8;
  
  iVar2 = *(int *)param_2;
  local_8 = ___stack_chk_guard;
  if (iVar2 == 1) {
    cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_2 + 0x18));
    if (cVar1 != '\0') {
      iVar2 = *(int *)param_2;
      goto LAB_039b07ec;
    }
    std::string::string(asStack_50,"UIText_Description");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
    FUN_05478178(awStack_48,L"[LIMITED_FLASH_SALE_PACKET]",asStack_58);
    piVar8 = (int *)FUN_039ab050(*(undefined8 *)(param_2 + 0x18),0);
    iVar2 = *piVar8;
LAB_039b0860:
    GetGameItemInfo(iVar2,0x7fffffff,0);
    TodReplaceString(awStack_48,L"{ITEM}",awStack_10);
    PuzzleTip::SetTip(pUVar7,asStack_40);
    FUN_05476c50(asStack_40);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
    FUN_05476c50(awStack_48);
    nop();
    std::string::~string(asStack_50);
    nop();
  }
  else {
LAB_039b07ec:
    if (iVar2 != 2) {
      std::string::string(asStack_50,"UIText_Description");
      pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
      FUN_05478178(awStack_48,L"[DAILY_SALE_PACKET]",asStack_58);
      piVar8 = (int *)FUN_039ab050(*(undefined8 *)(param_2 + 0x18),0);
      iVar2 = *piVar8;
      goto LAB_039b0860;
    }
    std::string::string(asStack_40,"UIText_Description");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    TodStringTranslate(L"[SUPER_LUCKY_PACKET]");
    PuzzleTip::SetTip(pUVar7,aGStack_38);
    FUN_05476c50(aGStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  lVar9 = FUN_039ab03c(uVar14,*(undefined8 *)(param_2 + 0x20));
  if (lVar9 != 0) {
    piVar8 = (int *)FUN_039ab050(uVar14,0);
    plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],true);
    uVar3 = FUN_039ac220(0);
    uVar4 = FUN_039ac220(0x46);
    (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar3,uVar4,uVar4);
    std::string::string((string *)aGStack_38,"Widget_Bonus1");
    pWVar11 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)aGStack_38);
    (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,plVar12);
    std::string::~string((string *)aGStack_38);
    nop();
    uVar14 = *(undefined8 *)(param_2 + 0x18);
    uVar13 = FUN_039ab03c(uVar14,*(undefined8 *)(param_2 + 0x20));
    if (1 < uVar13) {
      piVar8 = (int *)FUN_039ab050(uVar14,1);
      plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],true);
      uVar3 = FUN_039ac220(0);
      uVar4 = FUN_039ac220(0x46);
      (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar3,uVar4,uVar4);
      std::string::string((string *)aGStack_38,"Widget_Bonus2");
      pWVar11 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)aGStack_38);
      (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,plVar12);
      std::string::~string((string *)aGStack_38);
      nop();
      goto LAB_039b090c;
    }
  }
  std::string::string((string *)aGStack_38,"UIImage_Add1");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aGStack_38);
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  std::string::~string((string *)aGStack_38);
  nop();
LAB_039b090c:
  std::string::string(asStack_60,"Widget_Bonus3");
  nop();
  std::string::string((string *)aGStack_38,"UIImage_Add2");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aGStack_38);
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  std::string::~string((string *)aGStack_38);
  nop();
  lVar9 = FUN_039ab03c(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
  if (lVar9 != 0) {
    std::string::string((string *)aGStack_38,"Widget_Bonus3");
    pWVar11 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)aGStack_38);
    std::string::~string((string *)aGStack_38);
    nop();
    piVar8 = (int *)FUN_039ab050(*(undefined8 *)(param_2 + 0x48),0);
    plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,0,true);
    uVar3 = FUN_039ac220(0);
    uVar4 = FUN_039ac220(0x46);
    (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,plVar12);
    lVar9 = FUN_039ab050(*(undefined8 *)(param_2 + 0x48),0);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar9 + 4));
    Sexy::ToWString(asStack_40);
    pUVar7 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar7,(wstring *)aGStack_38);
    FUN_05476c50((string *)aGStack_38);
    std::string::~string(asStack_40);
    uVar3 = FUN_039ac220(0);
    uVar4 = FUN_039ac220(0x2d);
    uVar5 = FUN_039ac220(0x46);
    uVar6 = FUN_039ac220(0x19);
    (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,uVar3,uVar4,uVar5,uVar6);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    FUN_039aae4c(pUVar7 + 0xe8,uVar14);
    FUN_039aae54(pUVar7 + 0xe0,5);
    __n = *(code **)(*(long *)pWVar11 + 0x60);
    (*__n)(pWVar11,pUVar7);
    std::string::append(asStack_60,"Widget_Bonus4",(size_t)__n);
    std::string::string((string *)aGStack_38,"UIImage_Add2");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aGStack_38);
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,1);
    std::string::~string((string *)aGStack_38);
    nop();
  }
  lVar9 = FUN_039ab05c(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38));
  if (lVar9 != 0) {
    pWVar11 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_60);
    piVar8 = (int *)FUN_039ab354(*(undefined8 *)(param_2 + 0x30));
    plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,0,true);
    uVar3 = FUN_039ac220(0);
    uVar4 = FUN_039ac220(0x46);
    (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,plVar12);
    lVar9 = FUN_039ab354(*(undefined8 *)(param_2 + 0x30));
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar9 + 4));
    std::operator+(asStack_58,"-");
    lVar9 = FUN_039ab354(*(undefined8 *)(param_2 + 0x30));
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar9 + 8));
    std::operator+(asStack_50,(string *)awStack_48);
    Sexy::ToWString(asStack_40);
    pUVar7 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar7,(wstring *)aGStack_38);
    FUN_05476c50((string *)aGStack_38);
    std::string::~string(asStack_40);
    std::string::~string((string *)awStack_48);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    uVar3 = FUN_039ac220(0);
    uVar4 = FUN_039ac220(0x2d);
    uVar5 = FUN_039ac220(0x46);
    uVar6 = FUN_039ac220(0x19);
    (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,uVar3,uVar4,uVar5,uVar6);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    FUN_039aae4c(pUVar7 + 0xe8,uVar14);
    FUN_039aae54(pUVar7 + 0xe0,5);
    (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,pUVar7);
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

