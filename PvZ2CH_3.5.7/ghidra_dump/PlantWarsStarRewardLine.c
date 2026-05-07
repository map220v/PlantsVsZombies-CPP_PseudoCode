// Class: PlantWarsStarRewardLine


/* PlantWarsStarRewardLine::~PlantWarsStarRewardLine() */

void __thiscall PlantWarsStarRewardLine::~PlantWarsStarRewardLine(PlantWarsStarRewardLine *this)

{
  *(undefined ***)this = &PTR_GetClass_069bdab0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bddd8;
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantWarsStarRewardLine::~PlantWarsStarRewardLine() */

void __thiscall PlantWarsStarRewardLine::~PlantWarsStarRewardLine(PlantWarsStarRewardLine *this)

{
  ~PlantWarsStarRewardLine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsStarRewardLine::Obtained() */

void __thiscall PlantWarsStarRewardLine::Obtained(PlantWarsStarRewardLine *this)

{
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = *(PVZ2UIButton **)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[PLANT_OBTAINED]");
  PVZ2UIButton::SetLabelText(this_00,awStack_10);
  FUN_05476c50(awStack_10);
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsStarRewardLine::PlantWarsStarRewardLine() */

void __thiscall PlantWarsStarRewardLine::PlantWarsStarRewardLine(PlantWarsStarRewardLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069bdab0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bddd8;
  FUN_05476574(this + 0xf0);
  return;
}


/* PlantWarsStarRewardLine::ButtonDepress(int) */

void __thiscall PlantWarsStarRewardLine::ButtonDepress(PlantWarsStarRewardLine *this,int param_1)

{
  int iVar1;
  PlantWarsNetworkMgr *this_00;
  PlantWarsNetworkMgr *this_01;
  
  if (param_1 != 5) {
    return;
  }
  this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  this_01 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar1 = PlantWarsNetworkMgr::GetCurrentWorldId(this_01);
  PlantWarsNetworkMgr::RequestStarReward(this_00,iVar1,*(int *)(this + 0xe0),*(int *)(this + 0xf8));
  return;
}


/* non-virtual thunk to PlantWarsStarRewardLine::ButtonDepress(int) */

void __thiscall PlantWarsStarRewardLine::ButtonDepress(PlantWarsStarRewardLine *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsStarRewardLine::InitView(int, PlantWarsStarRewardData const&) */

void __thiscall
PlantWarsStarRewardLine::InitView
          (PlantWarsStarRewardLine *this,int param_1,PlantWarsStarRewardData *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  ulong uVar9;
  PVZ2UIButton *pPVar10;
  PlantWarsNetworkMgr *this_00;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  string asStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  Sexy::StrFormat("x%d",asStack_78,(ulong)*(uint *)(param_2 + 4));
  Sexy::ToWString(asStack_78);
  FUN_054766c8(this + 0xf0,awStack_40);
  FUN_05476c50(awStack_40);
  std::string::~string(asStack_78);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_2 + 4);
  uVar12 = 0;
  while( true ) {
    uVar14 = *(undefined8 *)(param_2 + 8);
    uVar9 = FUN_04d9e77c(uVar14,*(undefined8 *)(param_2 + 0x10));
    if (uVar9 <= uVar12) break;
    piVar8 = (int *)FUN_04d9e844(uVar14,uVar12);
    plVar13 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],true);
    iVar1 = FUN_04d9f494(0x11d);
    iVar2 = FUN_04d9f494(0x41);
    iVar3 = FUN_04d9f494(0xf);
    uVar4 = FUN_04d9f494(10);
    (**(code **)(*plVar13 + 0x198))(plVar13,iVar1 + (iVar2 + iVar3) * (int)uVar12,uVar4,iVar2,iVar2)
    ;
    (**(code **)(*(long *)this + 0x60))(this,plVar13);
    uVar12 = uVar12 + 1;
  }
  TodStringTranslate(L"[PLANT_OBTAIN]");
  Sexy::Color::Color((Color *)awStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,5,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)awStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar10;
  FUN_05476c50(asStack_78);
  pPVar10 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b98f20,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06b98ed0,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)awStack_40);
  plVar13 = *(long **)(this + 0xe8);
  uVar4 = FUN_04d9f494(0x1c2);
  uVar5 = FUN_04d9f494(0x12);
  uVar6 = FUN_04d9f494(100);
  uVar7 = FUN_04d9f494(0x32);
  (**(code **)(*plVar13 + 0x198))(plVar13,uVar4,uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  lVar11 = PlantWarsNetworkMgr::GetCurrentWorldData(this_00);
  plVar13 = *(long **)(this + 0xe8);
  if (*(int *)(lVar11 + 0x80) < *(int *)(param_2 + 4)) {
    (**(code **)(*plVar13 + 0x188))(plVar13,1);
  }
  else {
    (**(code **)(*plVar13 + 0x188))(plVar13,0);
  }
  if (param_2[0x20] != (PlantWarsStarRewardData)0x0) {
    pPVar10 = *(PVZ2UIButton **)(this + 0xe8);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(pPVar10,awStack_40);
    FUN_05476c50(awStack_40);
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsStarRewardLine::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsStarRewardLine::Draw(PlantWarsStarRewardLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b993a0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[CUMULATIVE_OBTAIN]");
  iVar1 = FUN_04d9f494(0x19);
  iVar2 = FUN_04d9f494(5);
  iVar3 = FUN_04d9f494(0x6e);
  iVar4 = FUN_04d9f494(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_04d9f494(0x14);
  iVar2 = FUN_04d9f494(0x2d);
  iVar3 = FUN_04d9f494(0x23);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98c38);
  DrawAdaptiveImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_04d9f494(0x41);
  iVar2 = FUN_04d9f494(0x32);
  iVar3 = FUN_04d9f494(100);
  iVar4 = FUN_04d9f494(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar5,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

