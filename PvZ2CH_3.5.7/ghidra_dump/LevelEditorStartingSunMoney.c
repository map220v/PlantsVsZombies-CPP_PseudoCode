// Class: LevelEditorStartingSunMoney


/* LevelEditorStartingSunMoney::~LevelEditorStartingSunMoney() */

void __thiscall
LevelEditorStartingSunMoney::~LevelEditorStartingSunMoney(LevelEditorStartingSunMoney *this)

{
  *(undefined ***)this = &PTR_GetClass_0695ad10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695b048;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorStartingSunMoney::~LevelEditorStartingSunMoney() */

void __thiscall
LevelEditorStartingSunMoney::~LevelEditorStartingSunMoney(LevelEditorStartingSunMoney *this)

{
  ~LevelEditorStartingSunMoney(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorStartingSunMoney::LevelEditorStartingSunMoney() */

void __thiscall
LevelEditorStartingSunMoney::LevelEditorStartingSunMoney(LevelEditorStartingSunMoney *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0695ad10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695b048;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStartingSunMoney::Init() */

void __thiscall LevelEditorStartingSunMoney::Init(LevelEditorStartingSunMoney *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PVZ2UIButton *this_00;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,10,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85720,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85720,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_04b334ec(100);
  uVar2 = FUN_04b334ec(0);
  uVar3 = FUN_04b334ec(0x28);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorStartingSunMoney::SetValue(int) */

void __thiscall LevelEditorStartingSunMoney::SetValue(LevelEditorStartingSunMoney *this,int param_1)

{
  *(int *)(this + 0xe0) = param_1;
  (**(code **)(*(long *)this + 800))();
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* LevelEditorStartingSunMoney::DealData() */

void __thiscall LevelEditorStartingSunMoney::DealData(LevelEditorStartingSunMoney *this)

{
  CustomLevelMgr *this_00;
  
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetStartingSun(this_00,*(int *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStartingSunMoney::ButtonDepress(int) */

void __thiscall
LevelEditorStartingSunMoney::ButtonDepress(LevelEditorStartingSunMoney *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LevelEditorSliderWidget *this_00;
  undefined8 uVar6;
  int local_38;
  int local_34;
  undefined1 auStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 10) {
    (**(code **)(*(long *)this + 0xd0))(&local_38);
    this_00 = ::operator_new(0x138);
    LevelEditorSliderWidget::LevelEditorSliderWidget(this_00);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = FUN_04b334ec(0x14);
    iVar3 = FUN_04b334ec(10);
    uVar4 = FUN_04b334ec(0x168);
    uVar5 = FUN_04b334ec(0xfa);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,local_38 + iVar1 + iVar2,local_34 + iVar3,uVar4,uVar5);
    TodStringTranslate(L"[MUTATOR_STARTING_SUN]");
    LevelEditorSliderWidget::SetTitle((wstring *)this_00);
    FUN_05476c50(auStack_30);
    TodStringTranslate(L"[MUTATOR_STARTING_SUN]");
    LevelEditorSliderWidget::SetDescription((wstring *)this_00);
    FUN_05476c50(auStack_30);
    FUN_04b2d7c4(this_00 + 0xec,9000);
    FUN_04b2d7b4(this_00 + 0xf0,*(undefined4 *)(this + 0xe0));
    (**(code **)(*(long *)this_00 + 800))(this_00);
    LevelEditorSliderWidget::ApplySunMoneyEditorSupport(this_00);
    uVar6 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
    FUN_04b331a8(afStack_28,this,uVar6);
    LevelEditorConveyorSeedPacket::SetChangeGlobalLevelCallback
              ((LevelEditorConveyorSeedPacket *)this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorStartingSunMoney::ButtonDepress(int) */

void __thiscall
LevelEditorStartingSunMoney::ButtonDepress(LevelEditorStartingSunMoney *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStartingSunMoney::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorStartingSunMoney::Draw(LevelEditorStartingSunMoney *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar5 = *(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04b334ec(5);
  iVar2 = *(int *)(this + 0x50);
  iVar1 = iVar5 / 2;
  iVar4 = FUN_04b334ec(10);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar3,iVar2 - iVar1,iVar5 - iVar4);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85498);
  Draw3SliceImage(param_1,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b858f0);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x54),*(int *)(this + 0x54));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  Sexy::ToWString(asStack_38);
  iVar5 = FUN_04b334ec(0);
  iVar1 = *(int *)(this + 0x54);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar5,*(int *)(this + 0x50) + iVar1 * -2,iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

