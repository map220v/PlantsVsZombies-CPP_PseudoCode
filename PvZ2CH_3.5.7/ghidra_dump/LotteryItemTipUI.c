// Class: LotteryItemTipUI


/* LotteryItemTipUI::~LotteryItemTipUI() */

void __thiscall LotteryItemTipUI::~LotteryItemTipUI(LotteryItemTipUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06978560;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LotteryItemTipUI::~LotteryItemTipUI() */

void __thiscall LotteryItemTipUI::~LotteryItemTipUI(LotteryItemTipUI *this)

{
  ~LotteryItemTipUI(this);
  AK::FreeHook(this);
  return;
}


/* LotteryItemTipUI::LotteryItemTipUI() */

void __thiscall LotteryItemTipUI::LotteryItemTipUI(LotteryItemTipUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06978560;
  FUN_05476574(this + 0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryItemTipUI::Draw(Sexy::Graphics*) */

void __thiscall LotteryItemTipUI::Draw(LotteryItemTipUI *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a8e0);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar1,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

