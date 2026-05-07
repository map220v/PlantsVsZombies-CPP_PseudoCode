// Class: PlantWarsLeaderBoardBonusLine


/* PlantWarsLeaderBoardBonusLine::~PlantWarsLeaderBoardBonusLine() */

void __thiscall
PlantWarsLeaderBoardBonusLine::~PlantWarsLeaderBoardBonusLine(PlantWarsLeaderBoardBonusLine *this)

{
  *(undefined ***)this = &PTR_GetClass_069bde20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069be148;
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantWarsLeaderBoardBonusLine::~PlantWarsLeaderBoardBonusLine() */

void __thiscall
PlantWarsLeaderBoardBonusLine::~PlantWarsLeaderBoardBonusLine(PlantWarsLeaderBoardBonusLine *this)

{
  ~PlantWarsLeaderBoardBonusLine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLeaderBoardBonusLine::InitView(int, PlantWarsStarRewardData const&) */

void __thiscall
PlantWarsLeaderBoardBonusLine::InitView
          (PlantWarsLeaderBoardBonusLine *this,int param_1,PlantWarsStarRewardData *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  ulong uVar10;
  PVZ2UIButton *pPVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  string asStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  Sexy::StrFormat("PLANT_WARS_LEADERBOARD_BONUS_RANK_DESC_%d",asStack_80);
  StringHelper::ToStringValue(asStack_80);
  FUN_054766c8(this + 0xf8,asStack_40);
  FUN_05476c50(asStack_40);
  uVar12 = 0;
  while( true ) {
    uVar14 = *(undefined8 *)(param_2 + 8);
    uVar10 = FUN_04d9e77c(uVar14,*(undefined8 *)(param_2 + 0x10));
    if (uVar10 <= uVar12) break;
    piVar9 = (int *)FUN_04d9e844(uVar14,uVar12);
    plVar13 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar9,piVar9[1],true);
    iVar2 = FUN_04d9f494(10);
    iVar4 = FUN_04d9f494(0x41);
    iVar3 = FUN_04d9f494(0xf);
    (**(code **)(*plVar13 + 0x198))(plVar13,iVar2 + (iVar4 + iVar3) * (int)uVar12,iVar2,iVar4,iVar4)
    ;
    (**(code **)(*(long *)this + 0x60))(this,plVar13);
    uVar12 = uVar12 + 1;
  }
  cVar1 = PlantWarsUtils::IsOffSeason();
  if (cVar1 == '\0') {
    *(undefined8 *)(this + 0xe8) = 0;
    this[0x100] = (PlantWarsLeaderBoardBonusLine)0x1;
LAB_04da07d0:
    if (2 < *(int *)(this + 0xe0)) goto LAB_04da07dc;
    Sexy::StrFormat("IMAGE_UI_DIALOG_ASSET_RANK%d",asStack_40,(ulong)(*(int *)(this + 0xe0) + 1));
    uVar14 = StringHelper::ToImage(asStack_40,false);
    *(undefined8 *)(this + 0xe8) = uVar14;
    std::string::~string(asStack_40);
    if (this[0x100] != (PlantWarsLeaderBoardBonusLine)0x0) goto LAB_04da07dc;
  }
  else {
    iVar2 = *(int *)(this + 0xe0);
    iVar4 = PlantWarsUtils::GetLeaderBoardBonusCurrentIndex();
    *(undefined8 *)(this + 0xe8) = 0;
    this[0x100] = (PlantWarsLeaderBoardBonusLine)(iVar2 != iVar4);
    if (iVar2 != iVar4) goto LAB_04da07d0;
  }
  TodStringTranslate(L"[PLANT_OBTAIN]");
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,6,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar11;
  FUN_05476c50(awStack_78);
  pPVar11 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b98f20,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b98ed0,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar13 = *(long **)(this + 0xf0);
  uVar5 = FUN_04d9f494(0x1c2);
  uVar6 = FUN_04d9f494(0x12);
  uVar7 = FUN_04d9f494(100);
  uVar8 = FUN_04d9f494(0x32);
  (**(code **)(*plVar13 + 0x198))(plVar13,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  if (param_2[0x20] == (PlantWarsStarRewardData)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0));
  }
  else {
    pPVar11 = *(PVZ2UIButton **)(this + 0xf0);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(pPVar11,(wstring *)asStack_40);
    FUN_05476c50(asStack_40);
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  }
LAB_04da07dc:
  std::string::~string(asStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLeaderBoardBonusLine::Obtained() */

void __thiscall PlantWarsLeaderBoardBonusLine::Obtained(PlantWarsLeaderBoardBonusLine *this)

{
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = *(PVZ2UIButton **)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[PLANT_OBTAINED]");
  PVZ2UIButton::SetLabelText(this_00,awStack_10);
  FUN_05476c50(awStack_10);
  (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsLeaderBoardBonusLine::PlantWarsLeaderBoardBonusLine() */

void __thiscall
PlantWarsLeaderBoardBonusLine::PlantWarsLeaderBoardBonusLine(PlantWarsLeaderBoardBonusLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069bde20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069be148;
  FUN_05476574(this + 0xf8);
  return;
}


/* PlantWarsLeaderBoardBonusLine::ButtonDepress(int) */

void __thiscall
PlantWarsLeaderBoardBonusLine::ButtonDepress(PlantWarsLeaderBoardBonusLine *this,int param_1)

{
  int iVar1;
  PlantWarsNetworkMgr *this_00;
  PlantWarsNetworkMgr *this_01;
  
  if (param_1 != 6) {
    return;
  }
  this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  this_01 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar1 = PlantWarsNetworkMgr::GetCurrentWorldId(this_01);
  PlantWarsNetworkMgr::RequestLeaderBoardBonus(this_00,iVar1,*(int *)(this + 0xe0));
  return;
}


/* non-virtual thunk to PlantWarsLeaderBoardBonusLine::ButtonDepress(int) */

void __thiscall
PlantWarsLeaderBoardBonusLine::ButtonDepress(PlantWarsLeaderBoardBonusLine *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLeaderBoardBonusLine::Draw(Sexy::Graphics*) */

void __thiscall
PlantWarsLeaderBoardBonusLine::Draw(PlantWarsLeaderBoardBonusLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b993a0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (*(long *)(this + 0xe8) != 0) {
    iVar2 = FUN_04d9f494(200);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_04d9f494(0x14);
    iVar4 = FUN_04d9f494(0x32);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar2,iVar3,iVar4,iVar4);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
  if (this[0x100] != (PlantWarsLeaderBoardBonusLine)0x0) {
    iVar2 = FUN_04d9f494(0xa5);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_04d9f494(0x1e);
    iVar4 = FUN_04d9f494(100);
    Sexy::Insets::Insets(aIStack_28,iVar1 - iVar2,iVar3,iVar4,iVar3);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar5,aIStack_18,3,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

