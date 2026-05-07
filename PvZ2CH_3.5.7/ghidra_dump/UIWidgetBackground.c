// Class: UIWidgetBackground


/* UIWidgetBackground::~UIWidgetBackground() */

void __thiscall UIWidgetBackground::~UIWidgetBackground(UIWidgetBackground *this)

{
  *(undefined ***)this = &PTR_GetClass_06970640;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIWidgetBackground::~UIWidgetBackground() */

void __thiscall UIWidgetBackground::~UIWidgetBackground(UIWidgetBackground *this)

{
  ~UIWidgetBackground(this);
  AK::FreeHook(this);
  return;
}


/* UIWidgetBackground::UIWidgetBackground(int) */

void __thiscall UIWidgetBackground::UIWidgetBackground(UIWidgetBackground *this,int param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd4) = param_1;
  *(undefined ***)this = &PTR_GetClass_06970640;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeGrass(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeGrass(UIWidgetBackground *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  Image *pIVar7;
  undefined8 uVar8;
  float fVar9;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar4 = *(int *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  if ((5 < iVar4) && (5 < *(int *)(this + 0x54))) {
    iVar1 = FUN_04b84d94(10);
    iVar2 = FUN_04b84d94(0x14);
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87910);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    fVar9 = (float)iVar4 / (float)iVar3;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    Sexy::Graphics::ClearClipRect(param_1);
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87910);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
    iVar3 = FUN_04b84d94(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_38,(int)(fVar9 * (float)iVar2),
               (int)(((float)iVar4 - (float)iVar3) * fVar9),
               (int)((float)*(int *)(this + 0x50) - fVar9 * (float)iVar2 * 2.0),0);
    local_2c = *(int *)(this + 0x54) - local_34;
    Sexy::Insets::Insets
              (aIStack_28,iVar1 + local_38,iVar1 + local_34,iVar1 * -2 + local_30,
               local_2c + iVar1 * -2);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87910);
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87910);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87910);
    iVar1 = SalesProgressBar::GetCurrentLevel(pSVar6);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,0,0,(int)(fVar9 * (float)iVar4),(int)(fVar9 * (float)iVar1));
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87850);
    DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar8);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87938);
    Draw9SliceImage(param_1,aIStack_18,uVar8);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeLeaves(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeLeaves(UIWidgetBackground *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *this_00;
  Image *pIVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b84d94(0xc);
  iVar2 = FUN_04b84d94(0x28);
  iVar8 = *(int *)(this + 0x50);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87910);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b878b0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar9 = (int)(((float)iVar8 / (float)iVar3) * (float)iVar4);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b878b0);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar8 = (int)(((float)iVar8 / (float)iVar3) * (float)iVar4);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b878b0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,-iVar1,(*(int *)(this + 0x54) - iVar8) + iVar2,iVar9,iVar8);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar9) + iVar1,
             (*(int *)(this + 0x54) - iVar8) + iVar2,iVar9,iVar8);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b878b0);
  iVar8 = *(int *)(lVar7 + 0x38);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b878b0);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar8,*(int *)(lVar7 + 0x3c));
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b878b0);
  Sexy::Graphics::DrawImageMirror(param_1,pIVar6,(TRect *)aIStack_28,(TRect *)aIStack_18,true);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeFrame(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeFrame(UIWidgetBackground *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87960);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  iVar1 = FUN_04b84d94(0x14);
  local_28 = local_28 + iVar1;
  local_24 = iVar1 + local_24;
  local_1c = iVar1 * -2 + local_1c;
  local_20 = local_20 + iVar1 * -2;
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87800);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeInner(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeInner(UIWidgetBackground *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87800);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeGreen(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeGreen(UIWidgetBackground *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87960);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeRed(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeRed(UIWidgetBackground *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87828);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeOrange(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeOrange(UIWidgetBackground *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87888);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeRoundGreen(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeRoundGreen(UIWidgetBackground *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b877d8);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetBackground::DrawTypeAnniversary(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::DrawTypeAnniversary(UIWidgetBackground *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04b84d94(0x12);
  iVar3 = FUN_04b84d94(0x13);
  iVar4 = FUN_04b84d94(0x26);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b84d94(0x1f);
  Sexy::Insets::Insets(aIStack_28,-iVar2,-iVar3,iVar4 + iVar1,iVar5 + *(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b877b0);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetBackground::Draw(Sexy::Graphics*) */

void __thiscall UIWidgetBackground::Draw(UIWidgetBackground *this,Graphics *param_1)

{
  if (*(int *)(this + 0xd4) != 0xff) {
    switch(*(int *)(this + 0xd4)) {
    case 0:
      DrawTypeGrass(this,param_1);
      return;
    case 1:
      DrawTypeFrame(this,param_1);
      return;
    case 2:
      DrawTypeInner(this,param_1);
      return;
    case 3:
      DrawTypeGrass(this,param_1);
      DrawTypeLeaves(this,param_1);
      return;
    case 4:
      DrawTypeGreen(this,param_1);
      return;
    case 5:
      DrawTypeGreen(this,param_1);
      return;
    case 6:
      DrawTypeRed(this,param_1);
      return;
    case 7:
      DrawTypeOrange(this,param_1);
      return;
    case 8:
      DrawTypeRoundGreen(this,param_1);
      return;
    case 9:
      DrawTypeAnniversary(this,param_1);
      return;
    default:
      DrawTypeGrass(this,param_1);
      return;
    }
  }
  return;
}

