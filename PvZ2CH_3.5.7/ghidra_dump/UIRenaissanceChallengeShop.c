// Class: UIRenaissanceChallengeShop


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeShop::GetLayoutName() */

void __thiscall UIRenaissanceChallengeShop::GetLayoutName(UIRenaissanceChallengeShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRenaissanceChallengeShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIRenaissanceChallengeShop::~UIRenaissanceChallengeShop() */

void __thiscall
UIRenaissanceChallengeShop::~UIRenaissanceChallengeShop(UIRenaissanceChallengeShop *this)

{
  *(undefined ***)this = &PTR_GetClass_06713630;
  *(undefined **)(this + 0xd8) = &DAT_06713980;
  UISingletonDialog<UIRenaissanceChallengeShop>::~UISingletonDialog
            ((UISingletonDialog<UIRenaissanceChallengeShop> *)this);
  return;
}


/* UIRenaissanceChallengeShop::~UIRenaissanceChallengeShop() */

void __thiscall
UIRenaissanceChallengeShop::~UIRenaissanceChallengeShop(UIRenaissanceChallengeShop *this)

{
  ~UIRenaissanceChallengeShop(this);
  AK::FreeHook(this);
  return;
}


/* UIRenaissanceChallengeShop::UIRenaissanceChallengeShop() */

void __thiscall
UIRenaissanceChallengeShop::UIRenaissanceChallengeShop(UIRenaissanceChallengeShop *this)

{
  UISingletonDialog<UIRenaissanceChallengeShop>::UISingletonDialog
            ((UISingletonDialog<UIRenaissanceChallengeShop> *)this);
  *(undefined4 *)(this + 0x134) = 0xffffffff;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06713630;
  *(undefined **)(this + 0xd8) = &DAT_06713980;
  return;
}


/* UIRenaissanceChallengeShop::ButtonDepress(int) */

void __thiscall
UIRenaissanceChallengeShop::ButtonDepress(UIRenaissanceChallengeShop *this,int param_1)

{
  undefined4 uVar1;
  NetworkMgr *pNVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  
  if (param_1 == 0x65) {
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    lVar5 = *plVar3;
    uVar1 = *(undefined4 *)(this + 0x134);
    uVar4 = 1;
  }
  else {
    if (param_1 != 0x66) {
      if (param_1 != 0x58) {
        return;
      }
      goto LAB_03aae490;
    }
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    lVar5 = *plVar3;
    uVar1 = *(undefined4 *)(this + 0x134);
    uVar4 = *(undefined4 *)(this + 0x138);
  }
  (**(code **)(lVar5 + 0x370))(plVar3,5,uVar1,uVar4,0,0);
LAB_03aae490:
  UISingletonDialog<UIRenaissanceChallengeShop>::CloseDialog();
  return;
}


/* non-virtual thunk to UIRenaissanceChallengeShop::ButtonDepress(int) */

void __thiscall
UIRenaissanceChallengeShop::ButtonDepress(UIRenaissanceChallengeShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallengeShop::initData(int, int, int, int, int) */

void __thiscall
UIRenaissanceChallengeShop::initData
          (UIRenaissanceChallengeShop *this,int param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  UIWidgetText *pUVar4;
  UIWidgetImage *pUVar5;
  UIWidgetImage *this_00;
  RenaissanceChallengeNewManager *this_01;
  Image *pIVar6;
  long *plVar7;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  code *pcVar8;
  int local_68;
  int local_64 [3];
  int local_58 [2];
  Sexy aSStack_50 [8];
  string asStack_48 [16];
  int local_38 [10];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x134) = param_5;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x138) = param_4;
  local_68 = param_4;
  local_64[0] = param_3;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38[0] != 0) {
    FUN_05477b24((string *)local_58,auStack_10);
    if (1 < param_2) {
      Sexy::StrFormat(L" x %d",(wstring *)aSStack_50,(ulong)(uint)param_2);
      std::operator+((wstring *)local_58,(wstring *)aSStack_50);
      FUN_054766c8((string *)local_58,asStack_48);
      FUN_05476c50(asStack_48);
      FUN_05476c50((wstring *)aSStack_50);
    }
    std::string::string(asStack_48,"UIText_Name");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
    std::string::~string(asStack_48);
    nop();
    PuzzleTip::SetTip(pUVar4,(string *)local_58);
    FUN_05476c50((string *)local_58);
  }
  std::string::string(asStack_48,"UIText_0");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::string(asStack_48,"UIText_1");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::string(asStack_48,"UIText_2");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::string(asStack_48,"UIText_3");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_68);
  std::operator+("X",(string *)local_58);
  Sexy::ToSexyString(aSStack_50,extraout_x1);
  PuzzleTip::SetTip(pUVar4,asStack_48);
  FUN_05476c50(asStack_48);
  std::string::~string((string *)aSStack_50);
  std::string::~string((string *)local_58);
  std::string::string(asStack_48,"UIText_Price1");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_64);
  Sexy::ToSexyString(aSStack_50,extraout_x1_00);
  PuzzleTip::SetTip(pUVar4,asStack_48);
  FUN_05476c50(asStack_48);
  std::string::~string((string *)aSStack_50);
  std::string::string(asStack_48,"UIText_Price2");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pUVar4[0x6d] = (UIWidgetText)0x0;
  local_58[0] = local_64[0] * local_68;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_58);
  Sexy::ToSexyString(aSStack_50,extraout_x1_01);
  PuzzleTip::SetTip(pUVar4,asStack_48);
  FUN_05476c50(asStack_48);
  std::string::~string((string *)aSStack_50);
  std::string::string(asStack_48,"UIImage_1");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  pUVar5[0x6d] = (UIWidgetImage)0x0;
  std::string::string(asStack_48,"UIImage_2");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  this_00[0x6d] = (UIWidgetImage)0x0;
  this_01 = (RenaissanceChallengeNewManager *)
            Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr();
  uVar1 = RenaissanceChallengeNewManager::GetResourceId(this_01);
  if (0 < (int)uVar1) {
    Sexy::StrFormat("IMAGE_UI_FRAGMENT_MATERIAL_MAT_RENAISSANCE_CHALLENGE_STATUE_%d",asStack_48,
                    (ulong)uVar1);
    pIVar6 = (Image *)StringHelper::ToImage(asStack_48,false);
    std::string::~string(asStack_48);
    UIWidgetImage::SetImage(pUVar5,pIVar6);
    UIWidgetImage::SetImage(this_00,pIVar6);
  }
  std::string::string(asStack_48,"Background_0");
  UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"UIImage_Bg");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  plVar7 = (long *)UIRewardFrame::CreateUIRewardFrame(param_1,0,false);
  pcVar8 = *(code **)(*plVar7 + 0x1a0);
  iVar2 = FUN_03aad07c(0x14);
  iVar3 = FUN_03aad07c(0x28);
  Sexy::Insets::Insets
            ((Insets *)asStack_48,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,
             *(int *)(pUVar5 + 0x54) - iVar3);
  (*pcVar8)(plVar7,asStack_48);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,plVar7);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

