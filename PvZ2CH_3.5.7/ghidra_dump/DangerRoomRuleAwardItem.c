// Class: DangerRoomRuleAwardItem


/* DangerRoomRuleAwardItem::~DangerRoomRuleAwardItem() */

void __thiscall DangerRoomRuleAwardItem::~DangerRoomRuleAwardItem(DangerRoomRuleAwardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0693ed70;
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DangerRoomRuleAwardItem::~DangerRoomRuleAwardItem() */

void __thiscall DangerRoomRuleAwardItem::~DangerRoomRuleAwardItem(DangerRoomRuleAwardItem *this)

{
  ~DangerRoomRuleAwardItem(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomRuleAwardItem::Refresh() */

void __thiscall DangerRoomRuleAwardItem::Refresh(DangerRoomRuleAwardItem *this)

{
  UIHeadshotIcon *this_00;
  
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  if (-1 < *(int *)(this + 0xf0)) {
    this_00 = (UIHeadshotIcon *)UIHeadshotIcon::create(*(int *)(this + 0xf0));
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    UIHeadshotIcon::setScale(this_00,0.4,0.4);
    UIHeadshotIcon::setPostion(this_00,340.0,-5.0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomRuleAwardItem::Draw(Sexy::Graphics*) */

void __thiscall DangerRoomRuleAwardItem::Draw(DangerRoomRuleAwardItem *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  SalesProgressBar *this_00;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04a80f20(10);
  Sexy::Insets::Insets(aIStack_38,0x60,0x42,0x1e,0xff);
  iVar4 = FUN_04a80f20(0x96);
  Sexy::Insets::Insets(aIStack_28,iVar3,0,iVar4,*(int *)(this + 0x54));
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar2,aIStack_18,3,1);
  iVar4 = FUN_04a80f20(0x96);
  iVar5 = FUN_04a80f20(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar3 + iVar4,0,iVar5,*(int *)(this + 0x54));
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar2,aIStack_18,4,1);
  iVar5 = FUN_04a80f20(0x5a);
  this_00 = *(SalesProgressBar **)(this + 0xe8);
  if (this_00 != (SalesProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x54);
    iVar6 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,iVar3 + iVar4 + iVar5,(iVar1 - iVar6) / 2);
    LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e970);
  iVar3 = FUN_04a80f20(2);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,0,*(int *)(this + 0x54) - iVar3,*(int *)(this + 0x50),iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomRuleAwardItem::DangerRoomRuleAwardItem() */

void __thiscall DangerRoomRuleAwardItem::DangerRoomRuleAwardItem(DangerRoomRuleAwardItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0693ed70;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  return;
}

