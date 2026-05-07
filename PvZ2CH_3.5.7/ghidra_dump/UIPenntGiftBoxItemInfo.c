// Class: UIPenntGiftBoxItemInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPenntGiftBoxItemInfo::OnCreate() */

void __thiscall UIPenntGiftBoxItemInfo::OnCreate(UIPenntGiftBoxItemInfo *this)

{
  bool bVar1;
  UIWidgetBackground *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPenntGiftBoxItemInfo::GetLayoutName() */

void __thiscall UIPenntGiftBoxItemInfo::GetLayoutName(UIPenntGiftBoxItemInfo *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICarnivalBundleInfo");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPenntGiftBoxItemInfo::~UIPenntGiftBoxItemInfo() */

void __thiscall UIPenntGiftBoxItemInfo::~UIPenntGiftBoxItemInfo(UIPenntGiftBoxItemInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_069e8d50;
  *(undefined **)(this + 0xd8) = &DAT_069e90a0;
  UISingletonDialog<UIPenntGiftBoxItemInfo>::~UISingletonDialog
            ((UISingletonDialog<UIPenntGiftBoxItemInfo> *)this);
  return;
}


/* UIPenntGiftBoxItemInfo::~UIPenntGiftBoxItemInfo() */

void __thiscall UIPenntGiftBoxItemInfo::~UIPenntGiftBoxItemInfo(UIPenntGiftBoxItemInfo *this)

{
  ~UIPenntGiftBoxItemInfo(this);
  AK::FreeHook(this);
  return;
}


/* UIPenntGiftBoxItemInfo::ButtonDepress(int) */

void __thiscall UIPenntGiftBoxItemInfo::ButtonDepress(UIPenntGiftBoxItemInfo *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIPenntGiftBoxItemInfo>::CloseDialog();
  return;
}


/* non-virtual thunk to UIPenntGiftBoxItemInfo::ButtonDepress(int) */

void __thiscall UIPenntGiftBoxItemInfo::ButtonDepress(UIPenntGiftBoxItemInfo *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPenntGiftBoxItemInfo::InitView(PennyGiftBoxGrowData const&) */

void __thiscall
UIPenntGiftBoxItemInfo::InitView(UIPenntGiftBoxItemInfo *this,PennyGiftBoxGrowData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetText *pUVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  Widget *pWVar9;
  UIWidgetImage *pUVar10;
  ulong uVar11;
  code *__n;
  undefined8 uVar12;
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  wstring awStack_48 [8];
  string asStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [40];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"UIText_Description");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
  FUN_05478178(awStack_48,L"[DAILY_SALE_PACKET]",auStack_58);
  piVar6 = (int *)FUN_04e76e4c(*(undefined8 *)(param_1 + 8),0);
  GetGameItemInfo(*piVar6,0x7fffffff,0);
  TodReplaceString(awStack_48,L"{ITEM}",awStack_10);
  PuzzleTip::SetTip(pUVar5,asStack_40);
  FUN_05476c50(asStack_40);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  FUN_05476c50(awStack_48);
  nop();
  std::string::~string(asStack_50);
  nop();
  uVar12 = *(undefined8 *)(param_1 + 8);
  lVar7 = FUN_04e76e98(uVar12,*(undefined8 *)(param_1 + 0x10));
  if (lVar7 != 0) {
    piVar6 = (int *)FUN_04e76e4c(uVar12,0);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],true);
    uVar1 = FUN_04e790b0(0);
    uVar2 = FUN_04e790b0(0x46);
    (**(code **)(*plVar8 + 0x198))(plVar8,uVar1,uVar1,uVar2,uVar2);
    std::string::string((string *)aGStack_38,"Widget_Bonus1");
    pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)aGStack_38);
    (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,plVar8);
    std::string::~string((string *)aGStack_38);
    nop();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  lVar7 = FUN_04e76e98(uVar12,*(undefined8 *)(param_1 + 0x30));
  if (lVar7 == 0) {
    std::string::string((string *)aGStack_38,"UIImage_Add1");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aGStack_38);
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
    std::string::~string((string *)aGStack_38);
    nop();
  }
  else {
    piVar6 = (int *)FUN_04e76e4c(uVar12,0);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],true);
    uVar1 = FUN_04e790b0(0);
    uVar2 = FUN_04e790b0(0x46);
    (**(code **)(*plVar8 + 0x198))(plVar8,uVar1,uVar1,uVar2,uVar2);
    std::string::string((string *)aGStack_38,"Widget_Bonus2");
    pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)aGStack_38);
    (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,plVar8);
    std::string::~string((string *)aGStack_38);
    nop();
  }
  std::string::string((string *)awStack_48,"Widget_Bonus3");
  nop();
  std::string::string((string *)aGStack_38,"UIImage_Add2");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aGStack_38);
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  std::string::~string((string *)aGStack_38);
  nop();
  lVar7 = FUN_04e76e98(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  if (lVar7 != 0) {
    std::string::string((string *)aGStack_38,"Widget_Bonus3");
    pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)aGStack_38);
    std::string::~string((string *)aGStack_38);
    nop();
    piVar6 = (int *)FUN_04e76e4c(*(undefined8 *)(param_1 + 0x50),0);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,0,true);
    uVar1 = FUN_04e790b0(0);
    uVar2 = FUN_04e790b0(0x46);
    (**(code **)(*plVar8 + 0x198))(plVar8,uVar1,uVar1,uVar2,uVar2);
    (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,plVar8);
    lVar7 = FUN_04e76e4c(*(undefined8 *)(param_1 + 0x50),0);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar7 + 4));
    Sexy::ToWString(asStack_40);
    pUVar5 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar5,(wstring *)aGStack_38);
    FUN_05476c50(aGStack_38);
    std::string::~string(asStack_40);
    uVar1 = FUN_04e790b0(0);
    uVar2 = FUN_04e790b0(0x2d);
    uVar3 = FUN_04e790b0(0x46);
    uVar4 = FUN_04e790b0(0x19);
    (**(code **)(*(long *)pUVar5 + 0x198))(pUVar5,uVar1,uVar2,uVar3,uVar4);
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    FUN_04e76c78(pUVar5 + 0xe8,uVar12);
    FUN_04e76c80(pUVar5 + 0xe0,5);
    __n = *(code **)(*(long *)pWVar9 + 0x60);
    (*__n)(pWVar9,pUVar5);
    std::string::append((string *)awStack_48,"Widget_Bonus4",(size_t)__n);
    std::string::string((string *)aGStack_38,"UIImage_Add2");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aGStack_38);
    (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
    std::string::~string((string *)aGStack_38);
    nop();
    uVar11 = FUN_04e76e98(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    if (1 < uVar11) {
      pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)awStack_48);
      piVar6 = (int *)FUN_04e76e4c(*(undefined8 *)(param_1 + 0x50),1);
      plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,0,true);
      uVar1 = FUN_04e790b0(0);
      uVar2 = FUN_04e790b0(0x46);
      (**(code **)(*plVar8 + 0x198))(plVar8,uVar1,uVar1,uVar2,uVar2);
      (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,plVar8);
    }
  }
  std::string::~string((string *)awStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPenntGiftBoxItemInfo::UIPenntGiftBoxItemInfo() */

void __thiscall UIPenntGiftBoxItemInfo::UIPenntGiftBoxItemInfo(UIPenntGiftBoxItemInfo *this)

{
  UISingletonDialog<UIPenntGiftBoxItemInfo>::UISingletonDialog
            ((UISingletonDialog<UIPenntGiftBoxItemInfo> *)this);
  *(undefined ***)this = &PTR_GetClass_069e8d50;
  *(undefined **)(this + 0xd8) = &DAT_069e90a0;
  return;
}

