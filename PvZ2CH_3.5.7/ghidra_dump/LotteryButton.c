// Class: LotteryButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryButton::Update() */

void __thiscall LotteryButton::Update(LotteryButton *this)

{
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Update((PVZ2UIButton *)this);
  TodStringTranslate(L"[GEILIVABLE_LOTTERY_BUTTON_CHANCE]");
  TodReplaceNumberString(awStack_18,L"{CHANCES}",*(int *)(this + 0x2fc));
  FUN_054766c8(this + 0x328,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryButton::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall LotteryButton::DrawAll(LotteryButton *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::DrawAll((PVZ2UIButton *)this,param_1,param_2);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_2,this + 800,this + 0x300,uVar1,aCStack_18,5,1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_2,this + 0x328,this + 0x310,uVar1,aCStack_18,2,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryButton::InitView() */

void __thiscall LotteryButton::InitView(LotteryButton *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[GEILIVABLE_LOTTERY_BUTTON_TITLE]");
  FUN_054766c8(this + 800,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryButton::Resize(Sexy::TRect<int> const&) */

void __thiscall LotteryButton::Resize(LotteryButton *this,TRect *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  Sexy::Insets::Insets
            ((Insets *)&local_18,0,0,*(int *)(this + 0x50),(*(int *)(this + 0x54) * 3) / 5);
  *(undefined8 *)(this + 0x300) = local_18;
  *(undefined8 *)(this + 0x308) = uStack_10;
  Sexy::Insets::Insets
            ((Insets *)&local_18,0,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50),
             *(int *)(this + 0x54) / 2);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x310) = local_18;
  *(undefined8 *)(this + 0x318) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryButton::~LotteryButton() */

void __thiscall LotteryButton::~LotteryButton(LotteryButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06978c60;
  *(undefined ***)(this + 0x198) = &PTR__LotteryButton_06978fb8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x328);
  FUN_05476c50(this + 800);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to LotteryButton::~LotteryButton() */

void __thiscall LotteryButton::~LotteryButton(LotteryButton *this)

{
  ~LotteryButton(this + -0x198);
  return;
}


/* LotteryButton::~LotteryButton() */

void __thiscall LotteryButton::~LotteryButton(LotteryButton *this)

{
  ~LotteryButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LotteryButton::~LotteryButton() */

void __thiscall LotteryButton::~LotteryButton(LotteryButton *this)

{
  ~LotteryButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryButton::LotteryButton(int, Sexy::ButtonListener*) */

void __thiscall
LotteryButton::LotteryButton(LotteryButton *this,int param_1,ButtonListener *param_2)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined ***)this = &PTR_GetClass_06978c60;
  *(undefined ***)(this + 0x198) = &PTR__LotteryButton_06978fb8;
  Sexy::Insets::Insets((Insets *)(this + 0x300));
  Sexy::Insets::Insets((Insets *)(this + 0x310));
  FUN_05478178(this + 800,&DAT_056f11a8,aCStack_18);
  nop();
  FUN_05478178(this + 0x328,&DAT_056f11a8,aCStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

