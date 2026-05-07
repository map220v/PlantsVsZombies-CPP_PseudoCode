// Class: AccumulatedLoginReward


/* AccumulatedLoginReward::~AccumulatedLoginReward() */

void __thiscall AccumulatedLoginReward::~AccumulatedLoginReward(AccumulatedLoginReward *this)

{
  *(undefined ***)this = &PTR_GetClass_069f4320;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f4648;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AccumulatedLoginReward::~AccumulatedLoginReward() */

void __thiscall AccumulatedLoginReward::~AccumulatedLoginReward(AccumulatedLoginReward *this)

{
  ~AccumulatedLoginReward(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccumulatedLoginReward::Draw(Sexy::Graphics*) */

void __thiscall AccumulatedLoginReward::Draw(AccumulatedLoginReward *this,Graphics *param_1)

{
  Image *pIVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == *(int *)(this + 0xe4) + -1) {
    Sexy::StrFormat("IMAGE_UI_ACCUMULATEDLOGIN_REWARD_BUNDLE",asStack_10);
  }
  else {
    Sexy::StrFormat("IMAGE_UI_ACCUMULATEDLOGIN_REWARD_BUNDLE_%d",asStack_10);
  }
  pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
  if (pIVar1 != (Image *)0x0) {
    Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccumulatedLoginReward::AccumulatedLoginReward() */

void __thiscall AccumulatedLoginReward::AccumulatedLoginReward(AccumulatedLoginReward *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_069f4320;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f4648;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xec] = (AccumulatedLoginReward)0x1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccumulatedLoginReward::InitView(int, int, bool, bool, int) */

void __thiscall
AccumulatedLoginReward::InitView
          (AccumulatedLoginReward *this,int param_1,int param_2,bool param_3,bool param_4,
          int param_5)

{
  AccumulatedLoginReward AVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PVZ2UIButton *pPVar6;
  undefined8 uVar7;
  Image *pIVar8;
  UIWidgetImage *this_00;
  UIWidgetText *this_01;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  this[0xec] = (AccumulatedLoginReward)param_3;
  *(int *)(this + 0xe8) = param_2;
  *(int *)(this + 0xe4) = param_5;
  if (param_2 == 1) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba20b0);
    this_00 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_00,pIVar8);
    *(UIWidgetImage **)(this + 0xf8) = this_00;
    local_40[0] = 3;
    UIWidgetImage::SetImageType(this_00,(wstring *)local_40,0.0);
    plVar9 = *(long **)(this + 0xf8);
    uVar2 = FUN_04eb9b74(0x2e);
    uVar3 = FUN_04eb9b74(0xce);
    uVar4 = FUN_04eb9b74(0x24);
    (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    TodStringTranslate(L"[RECHARGE_DAILYSIGN_ACTIVITY_GOT]");
    this_01 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_01,(wstring *)local_40);
    *(UIWidgetText **)(this + 0x100) = this_01;
    FUN_05476c50((wstring *)local_40);
    plVar9 = *(long **)(this + 0x100);
    uVar2 = FUN_04eb9b74(0x46);
    uVar3 = FUN_04eb9b74(200);
    uVar4 = FUN_04eb9b74(100);
    uVar5 = FUN_04eb9b74(0x32);
    (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar4,uVar5);
    lVar11 = *(long *)(this + 0x100);
    uVar7 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
    FUN_04eb9854(lVar11 + 0xe8,uVar7);
    FUN_04eb98a0(*(long *)(this + 0x100) + 0xe0);
    plVar9 = *(long **)(this + 0x100);
    pcVar10 = *(code **)(*plVar9 + 0x170);
    Sexy::Color::Color((Color *)local_40,1);
    (*pcVar10)(plVar9,0,(wstring *)local_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
    if (param_4) {
      (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0xf0));
    }
  }
  else {
    TodStringTranslate(L"[COMPEN_OBTAIN]");
    Sexy::Color::Color((Color *)local_40,1);
    pPVar6 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar6,99,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(this + 0xf0) = pPVar6;
    FUN_05476c50(awStack_78);
    pPVar6 = *(PVZ2UIButton **)(this + 0xf0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba2118,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ba1f78,3);
    PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar9 = *(long **)(this + 0xf0);
    uVar2 = FUN_04eb9b74(0x32);
    uVar3 = FUN_04eb9b74(200);
    uVar4 = FUN_04eb9b74(100);
    (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar4,uVar2);
    plVar9 = *(long **)(this + 0xf0);
    pcVar10 = *(code **)(*plVar9 + 800);
    uVar7 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
    (*pcVar10)(plVar9,uVar7);
    plVar9 = *(long **)(this + 0xf0);
    AVar1 = this[0xec];
    *(undefined1 *)((long)plVar9 + 0x59) = 0;
    if (AVar1 == (AccumulatedLoginReward)0x0) {
      (**(code **)(*plVar9 + 0x188))(plVar9,1);
      plVar9 = *(long **)(this + 0xf0);
    }
    (**(code **)(*(long *)this + 0x60))(this,plVar9);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccumulatedLoginReward::ButtonDepress(int) */

void AccumulatedLoginReward::ButtonDepress(int param_1)

{
  AccumulatedLoginReward *this;
  AccumulatedLoginManager *this_00;
  
  this = (AccumulatedLoginReward *)(ulong)(uint)param_1;
  this_00 = (AccumulatedLoginManager *)
            Sexy::LazySingleton<AccumulatedLoginManager>::GetInstancePtr();
  AccumulatedLoginManager::RequestBonus(this_00,*(int *)(this + 0xe0));
  InitView(this,*(int *)(this + 0xe0),1,false,true,*(int *)(this + 0xe4));
  return;
}


/* non-virtual thunk to AccumulatedLoginReward::ButtonDepress(int) */

void __thiscall AccumulatedLoginReward::ButtonDepress(AccumulatedLoginReward *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

