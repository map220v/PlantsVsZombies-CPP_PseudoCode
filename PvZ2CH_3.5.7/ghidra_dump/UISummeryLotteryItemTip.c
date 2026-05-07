// Class: UISummeryLotteryItemTip


/* UISummeryLotteryItemTip::~UISummeryLotteryItemTip() */

void __thiscall UISummeryLotteryItemTip::~UISummeryLotteryItemTip(UISummeryLotteryItemTip *this)

{
  *(undefined ***)this = &PTR_GetClass_06973ca0;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UISummeryLotteryItemTip::~UISummeryLotteryItemTip() */

void __thiscall UISummeryLotteryItemTip::~UISummeryLotteryItemTip(UISummeryLotteryItemTip *this)

{
  ~UISummeryLotteryItemTip(this);
  AK::FreeHook(this);
  return;
}


/* UISummeryLotteryItemTip::UISummeryLotteryItemTip() */

void __thiscall UISummeryLotteryItemTip::UISummeryLotteryItemTip(UISummeryLotteryItemTip *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06973ca0;
  FUN_05476574(this + 0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISummeryLotteryItemTip::Draw(Sexy::Graphics*) */

void __thiscall UISummeryLotteryItemTip::Draw(UISummeryLotteryItemTip *this,Graphics *param_1)

{
  Image *pIVar1;
  undefined8 uVar2;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88e98);
  if (pIVar1 != (Image *)0x0) {
    Sexy::Graphics::DrawImage(param_1,pIVar1,0,0);
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar2,aCStack_18,0,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

