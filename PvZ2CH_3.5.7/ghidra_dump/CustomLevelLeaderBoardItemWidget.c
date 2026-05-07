// Class: CustomLevelLeaderBoardItemWidget


/* CustomLevelLeaderBoardItemWidget::~CustomLevelLeaderBoardItemWidget() */

void __thiscall
CustomLevelLeaderBoardItemWidget::~CustomLevelLeaderBoardItemWidget
          (CustomLevelLeaderBoardItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06663590;
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x108);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CustomLevelLeaderBoardItemWidget::~CustomLevelLeaderBoardItemWidget() */

void __thiscall
CustomLevelLeaderBoardItemWidget::~CustomLevelLeaderBoardItemWidget
          (CustomLevelLeaderBoardItemWidget *this)

{
  ~CustomLevelLeaderBoardItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelLeaderBoardItemWidget::LoadData(CustomLevelLeaderBoardBaseData const&) */

void __thiscall
CustomLevelLeaderBoardItemWidget::LoadData
          (CustomLevelLeaderBoardItemWidget *this,CustomLevelLeaderBoardBaseData *param_1)

{
  *(undefined4 *)(this + 0x138) = *(undefined4 *)param_1;
  return;
}


/* CustomLevelLeaderBoardItemWidget::CustomLevelLeaderBoardItemWidget() */

void __thiscall
CustomLevelLeaderBoardItemWidget::CustomLevelLeaderBoardItemWidget
          (CustomLevelLeaderBoardItemWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06663590;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  FUN_05476574(this + 0x108);
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  FUN_05476574(this + 0x120);
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelLeaderBoardItemWidget::InitView() */

void __thiscall CustomLevelLeaderBoardItemWidget::InitView(CustomLevelLeaderBoardItemWidget *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_035e74e0(4);
  iVar1 = *(int *)(this + 0x54) + iVar3 * -2;
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa81d8);
  *(undefined8 *)(this + 0xd8) = uVar7;
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar3,iVar1,iVar1);
  *(undefined8 *)(this + 0xe0) = local_18;
  *(undefined8 *)(this + 0xe8) = uStack_10;
  iVar4 = FUN_035e74e0(10);
  iVar4 = iVar3 + iVar1 + iVar4;
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa81d8);
  *(undefined8 *)(this + 0xf0) = uVar7;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar3,iVar1,iVar1);
  *(undefined8 *)(this + 0xf8) = local_18;
  *(undefined8 *)(this + 0x100) = uStack_10;
  iVar5 = FUN_035e74e0(10);
  FUN_054772c4(this + 0x108,&DAT_05702ee0);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar3,iVar1,iVar1);
  *(undefined8 *)(this + 0x110) = local_18;
  *(undefined8 *)(this + 0x118) = uStack_10;
  iVar6 = FUN_035e74e0(10);
  FUN_054772c4(this + 0x120,&DAT_05702ef8);
  Sexy::Insets::Insets((Insets *)&local_18,iVar6 + iVar5 + iVar4,iVar3,iVar1,iVar1);
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x128) = local_18;
  *(undefined8 *)(this + 0x130) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelLeaderBoardItemWidget::Draw(Sexy::Graphics*) */

void __thiscall
CustomLevelLeaderBoardItemWidget::Draw(CustomLevelLeaderBoardItemWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa81b0);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (*(Image **)(this + 0xd8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xd8),*(int *)(this + 0xe0),*(int *)(this + 0xe4),
               *(int *)(this + 0xe8),*(int *)(this + 0xec));
  }
  if (*(Image **)(this + 0xf0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf0),*(int *)(this + 0xf8),*(int *)(this + 0xfc),
               *(int *)(this + 0x100),*(int *)(this + 0x104));
  }
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x108,this + 0x110,uVar1,aIStack_18,5,1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x120,this + 0x128,uVar1,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

