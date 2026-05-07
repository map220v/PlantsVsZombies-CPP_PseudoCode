// Class: StoneLotteryItemTipUI


/* StoneLotteryItemTipUI::StoneLotteryItemTipUI() */

void __thiscall StoneLotteryItemTipUI::StoneLotteryItemTipUI(StoneLotteryItemTipUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066c4530;
  FUN_05476574(this + 0xd8);
  *(undefined4 *)(this + 0xe0) = 5;
  return;
}


/* StoneLotteryItemTipUI::~StoneLotteryItemTipUI() */

void __thiscall StoneLotteryItemTipUI::~StoneLotteryItemTipUI(StoneLotteryItemTipUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066c4530;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* StoneLotteryItemTipUI::~StoneLotteryItemTipUI() */

void __thiscall StoneLotteryItemTipUI::~StoneLotteryItemTipUI(StoneLotteryItemTipUI *this)

{
  ~StoneLotteryItemTipUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryItemTipUI::Draw(Sexy::Graphics*) */

void __thiscall StoneLotteryItemTipUI::Draw(StoneLotteryItemTipUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03915908(10);
  iVar2 = FUN_03915908(0x14);
  Sexy::Insets::Insets
            (aIStack_28,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54) - iVar2);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abab28);
  Draw3SliceImage(param_1,aIStack_18,uVar3);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar3,aIStack_18,*(undefined4 *)(this + 0xe0),1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

