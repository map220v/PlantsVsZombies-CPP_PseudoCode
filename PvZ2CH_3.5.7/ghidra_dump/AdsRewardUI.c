// Class: AdsRewardUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsRewardUI::GetLayoutName() */

void __thiscall AdsRewardUI::GetLayoutName(AdsRewardUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"AdsRewardUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* AdsRewardUI::~AdsRewardUI() */

void __thiscall AdsRewardUI::~AdsRewardUI(AdsRewardUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06980290;
  *(undefined **)(this + 0xd8) = &DAT_069805e0;
  UISingletonDialog<AdsRewardUI>::~UISingletonDialog((UISingletonDialog<AdsRewardUI> *)this);
  return;
}


/* AdsRewardUI::~AdsRewardUI() */

void __thiscall AdsRewardUI::~AdsRewardUI(AdsRewardUI *this)

{
  ~AdsRewardUI(this);
  AK::FreeHook(this);
  return;
}


/* AdsRewardUI::AdsRewardUI() */

void __thiscall AdsRewardUI::AdsRewardUI(AdsRewardUI *this)

{
  UISingletonDialog<AdsRewardUI>::UISingletonDialog((UISingletonDialog<AdsRewardUI> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06980290;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined **)(this + 0xd8) = &DAT_069805e0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsRewardUI::OnCreate() */

void __thiscall AdsRewardUI::OnCreate(AdsRewardUI *this)

{
  char cVar1;
  UIWidgetAnim *pUVar2;
  PopAnimRig *pPVar3;
  Widget *pWVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_40,"Light");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pPVar3 = (PopAnimRig *)FUN_04c0109c(*(undefined8 *)(pUVar2 + 0xd8));
    std::string::string(asStack_40,"anim");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"Dialog");
    pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
    UI::Dialog::setWindowCenter((Dialog *)this,pWVar4);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* AdsRewardUI::ButtonDepress(int) */

void __thiscall AdsRewardUI::ButtonDepress(AdsRewardUI *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<AdsRewardUI>::CloseDialog();
  return;
}


/* non-virtual thunk to AdsRewardUI::ButtonDepress(int) */

void __thiscall AdsRewardUI::ButtonDepress(AdsRewardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsRewardUI::setTitleShow(bool) */

void __thiscall AdsRewardUI::setTitleShow(AdsRewardUI *this,bool param_1)

{
  UIWidgetImage *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Title");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsRewardUI::setQuantity(int) */

void __thiscall AdsRewardUI::setQuantity(AdsRewardUI *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  Widget *this_00;
  UIWidgetImage *this_01;
  LotteryResultProgressBar *this_02;
  int *piVar8;
  ulong uVar9;
  string *__n;
  code *pcVar10;
  ulong uVar11;
  int iVar12;
  int local_34 [3];
  int local_28 [2];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34[0] = param_1;
  std::string::string(asStack_18,"Dialog");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  iVar12 = 0;
  pcVar10 = *(code **)(*plVar6 + 0x68);
  __n = asStack_20;
  std::string::string((string *)local_10,"Quantity");
  uVar7 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_10);
  (*pcVar10)(plVar6,uVar7);
  std::string::~string((string *)local_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  std::string::append((string *)(this_00 + 0xc0),"Quantity",(size_t)__n);
  std::string::append((string *)(this_00 + 200),"UIImage",(size_t)__n);
  std::string::string((string *)local_10,"Dialog");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_10);
  (**(code **)(*plVar6 + 0x60))(plVar6,this_00);
  std::string::~string((string *)local_10);
  nop();
  local_28[0] = 0;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_34);
  uVar11 = 0;
  while( true ) {
    uVar9 = FUN_05474184(asStack_20);
    iVar3 = local_28[0];
    if (uVar9 <= uVar11) break;
    FUN_05475ffc(asStack_18,asStack_20,uVar11);
    FUN_031f5e7c((string *)local_10,"IMAGE_UI_ADS_NUM",asStack_18);
    this_01 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_01,(string *)local_10);
    std::string::~string((string *)local_10);
    this_02 = (LotteryResultProgressBar *)
              PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)this_01);
    pcVar10 = *(code **)(*(long *)this_01 + 0x198);
    uVar1 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    uVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
    (*pcVar10)(this_01,iVar12,0,uVar1,uVar2);
    (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar12 = iVar12 + iVar3;
    local_10[0] = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
    piVar8 = eastl::max_alt<int>(local_28,(int *)local_10);
    local_28[0] = *piVar8;
    std::string::~string(asStack_18);
    uVar11 = uVar11 + 1;
  }
  (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,iVar12,local_28[0]);
  iVar4 = FUN_04c0113c(0x19a);
  iVar5 = FUN_04c0113c(0x168);
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,iVar4 - iVar12 / 2,iVar5 - iVar3 / 2);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsRewardUI::setReward(int, int) */

void __thiscall AdsRewardUI::setReward(AdsRewardUI *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  UIWidgetImage *this_00;
  long lVar6;
  UIWidgetText *pUVar7;
  UIPlantPieceImage *this_01;
  char *__s;
  code *pcVar8;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_1;
  *(int *)(this + 0x138) = param_2;
  std::string::string((string *)&local_38,"Reward");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  iVar1 = *(int *)(this_00 + 0x48) + *(int *)(this_00 + 0x50) / 2;
  iVar2 = *(int *)(this_00 + 0x4c) + *(int *)(this_00 + 0x54) / 2;
  if (param_1 == 0xbc0) {
    __s = "IMAGE_UI_ADS_GEMS";
  }
  else {
    if (param_1 != 0xfad) {
      GetGameItemInfo(param_1,0x7fffffff,0);
      if (local_38 != 0) {
        if (local_34 == 2) {
          (**(code **)(*(long *)this_00 + 0x158))(this_00,0);
          this_01 = ::operator_new(0xe0);
          *(undefined8 *)this_01 = 0;
          *(undefined8 *)(this_01 + 8) = 0;
          *(undefined8 *)(this_01 + 0x10) = 0;
          *(undefined8 *)(this_01 + 0x18) = 0;
          *(undefined8 *)(this_01 + 0x20) = 0;
          *(undefined8 *)(this_01 + 0x28) = 0;
          *(undefined8 *)(this_01 + 0x30) = 0;
          *(undefined8 *)(this_01 + 0x38) = 0;
          *(undefined8 *)(this_01 + 0x40) = 0;
          *(undefined8 *)(this_01 + 0x48) = 0;
          *(undefined8 *)(this_01 + 0x50) = 0;
          *(undefined8 *)(this_01 + 0x58) = 0;
          *(undefined8 *)(this_01 + 0x60) = 0;
          *(undefined8 *)(this_01 + 0x68) = 0;
          *(undefined8 *)(this_01 + 0x70) = 0;
          *(undefined8 *)(this_01 + 0x78) = 0;
          *(undefined8 *)(this_01 + 0x80) = 0;
          *(undefined8 *)(this_01 + 0x88) = 0;
          *(undefined8 *)(this_01 + 0x90) = 0;
          *(undefined8 *)(this_01 + 0x98) = 0;
          *(undefined8 *)(this_01 + 0xa0) = 0;
          *(undefined8 *)(this_01 + 0xa8) = 0;
          *(undefined8 *)(this_01 + 0xb0) = 0;
          *(undefined8 *)(this_01 + 0xb8) = 0;
          *(undefined8 *)(this_01 + 0xc0) = 0;
          *(undefined8 *)(this_01 + 200) = 0;
          *(undefined8 *)(this_01 + 0xd0) = 0;
          *(undefined8 *)(this_01 + 0xd8) = 0;
          UIPlantPieceImage::UIPlantPieceImage(this_01);
          this_01[0x59] = (UIPlantPieceImage)0x0;
          UITourismOctoberInviteItem::InitView((string *)this_01);
          UIPlantPieceImage::GetPlantRect();
          (**(code **)(*(long *)this_01 + 0x198))
                    (this_01,iVar1 - local_40 / 2,iVar2 - local_3c / 2,local_40,local_3c);
          (**(code **)(**(long **)(this_00 + 0x20) + 0x60))(*(long **)(this_00 + 0x20),this_01);
        }
        else {
          UIWidgetImage::SetImage(this_00,asStack_18);
        }
        std::string::string(asStack_48,"Reward_Text");
        pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
        std::string::~string(asStack_48);
        nop();
        Sexy::StrFormat(L"x%d",asStack_48,(ulong)(uint)param_2);
        std::operator+(awStack_10,(wstring *)asStack_48);
        FUN_05476c50(asStack_48);
        PuzzleTip::SetTip(pUVar7,auStack_50);
        FUN_05476c50(auStack_50);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
      goto LAB_04c018a0;
    }
    __s = "IMAGE_UI_ADS_COINS";
  }
  std::string::string((string *)&local_38,__s);
  UIWidgetImage::SetImage(this_00,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  setQuantity(this,param_2);
LAB_04c018a0:
  lVar6 = PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)this_00);
  if (lVar6 != 0) {
    pcVar8 = *(code **)(*(long *)this_00 + 0x198);
    lVar6 = PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)this_00);
    iVar3 = *(int *)(lVar6 + 0x38);
    lVar6 = PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)this_00);
    iVar4 = *(int *)(lVar6 + 0x3c);
    lVar6 = PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)this_00);
    uVar5 = *(undefined4 *)(lVar6 + 0x38);
    lVar6 = PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)this_00);
    (*pcVar8)(this_00,iVar1 - iVar3 / 2,iVar2 - iVar4 / 2,uVar5,*(undefined4 *)(lVar6 + 0x3c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

