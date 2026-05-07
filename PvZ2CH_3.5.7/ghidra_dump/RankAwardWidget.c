// Class: RankAwardWidget


/* RankAwardWidget::~RankAwardWidget() */

void __thiscall RankAwardWidget::~RankAwardWidget(RankAwardWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0694de60;
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RankAwardWidget::~RankAwardWidget() */

void __thiscall RankAwardWidget::~RankAwardWidget(RankAwardWidget *this)

{
  ~RankAwardWidget(this);
  AK::FreeHook(this);
  return;
}


/* RankAwardWidget::RankAwardWidget() */

void __thiscall RankAwardWidget::RankAwardWidget(RankAwardWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (RankAwardWidget)0x1;
  *(undefined ***)this = &PTR_GetClass_0694de60;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankAwardWidget::Draw(Sexy::Graphics*) */

void __thiscall RankAwardWidget::Draw(RankAwardWidget *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  undefined8 uVar7;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] != (RankAwardWidget)0x0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81a70);
    Draw9SliceImage(param_1,aIStack_18,uVar7);
  }
  iVar2 = FUN_04aeba90(10);
  iVar3 = FUN_04aeba90(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar2,0,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x54));
  uVar7 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar7,aIStack_18,3,1);
  cVar1 = FUN_054765e8(this + 0xe0);
  if (cVar1 == '\0') {
    iVar3 = FUN_04aeba90(100);
    iVar2 = *(int *)(this + 0x50);
    iVar4 = FUN_04aeba90(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar2 - iVar3,0,iVar4,*(int *)(this + 0x54));
    uVar7 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
    WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar7,aIStack_18,4,1);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81c40);
    iVar3 = FUN_04aeba90(0x1e);
    iVar2 = *(int *)(this + 0x50);
    iVar4 = FUN_04aeba90(0x19);
    iVar5 = FUN_04aeba90(0x14);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,iVar2 - iVar3,(*(int *)(this + 0x54) - iVar4) / 2,iVar5,iVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

