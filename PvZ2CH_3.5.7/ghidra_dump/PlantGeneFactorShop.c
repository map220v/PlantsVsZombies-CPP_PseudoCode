// Class: PlantGeneFactorShop


/* PlantGeneFactorShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantGeneFactorShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantGeneFactorShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantGeneFactorShop::ScrollTargetReached(PlantGeneFactorShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantGeneFactorShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantGeneFactorShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantGeneFactorShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantGeneFactorShop::ScrollTargetInterrupted(PlantGeneFactorShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantGeneFactorShop::~PlantGeneFactorShop() */

void __thiscall PlantGeneFactorShop::~PlantGeneFactorShop(PlantGeneFactorShop *this)

{
  *(undefined ***)this = &PTR_GetClass_066a02d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a0608;
  *(undefined ***)(this + 0xe0) = &PTR__PlantGeneFactorShop_066a0650;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PlantGeneFactorShop::~PlantGeneFactorShop() */

void __thiscall PlantGeneFactorShop::~PlantGeneFactorShop(PlantGeneFactorShop *this)

{
  ~PlantGeneFactorShop(this + -0xe0);
  return;
}


/* PlantGeneFactorShop::~PlantGeneFactorShop() */

void __thiscall PlantGeneFactorShop::~PlantGeneFactorShop(PlantGeneFactorShop *this)

{
  ~PlantGeneFactorShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantGeneFactorShop::~PlantGeneFactorShop() */

void __thiscall PlantGeneFactorShop::~PlantGeneFactorShop(PlantGeneFactorShop *this)

{
  ~PlantGeneFactorShop(this + -0xe0);
  return;
}


/* PlantGeneFactorShop::PlantGeneFactorShop() */

void __thiscall PlantGeneFactorShop::PlantGeneFactorShop(PlantGeneFactorShop *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_066a02d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a0608;
  *(undefined ***)(this + 0xe0) = &PTR__PlantGeneFactorShop_066a0650;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneFactorShop::InitView() */

void __thiscall PlantGeneFactorShop::InitView(PlantGeneFactorShop *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  PVZ2UIButton *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  PlantGeneFactorShopItem *this_03;
  long lVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (PlantGeneFactorShop)0x0;
  iVar1 = FUN_03800484(0x2ee);
  lVar8 = 0;
  iVar2 = FUN_03800484(400);
  (**(code **)(*(long *)this + 0x198))
            (this,(*(int *)(gLawnApp + 0xd4) - iVar1) / 2,(*(int *)(gLawnApp + 0xd8) - iVar2) / 2,
             iVar1,iVar2);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x58,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab29c0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ab2b68,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar3 = FUN_03800484(0x2c6);
  iVar1 = FUN_03800484(8);
  uVar4 = FUN_03800484(0x36);
  uVar5 = FUN_03800484(0x39);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar3,-iVar1,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  iVar2 = FUN_03800484(10);
  iVar6 = FUN_03800484(200);
  uVar3 = FUN_03800484(300);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  iVar7 = FUN_03800484(0x1e);
  uVar4 = FUN_03800484(0x4b);
  iVar1 = *(int *)(this + 0x50);
  uVar5 = FUN_03800484(300);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar7,uVar4,iVar1 + iVar7 * -2,uVar5);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  iVar1 = 0;
  do {
    this_03 = ::operator_new(0xf8);
    PlantGeneFactorShopItem::PlantGeneFactorShopItem(this_03);
    uVar4 = FUN_03800484(0);
    (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar1,uVar4,iVar6,uVar3);
    iVar7 = (int)lVar8;
    lVar8 = lVar8 + 1;
    PlantGeneFactorShopItem::InitView(this_03,iVar7);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
    iVar1 = iVar1 + iVar2 + iVar6;
  } while (lVar8 != 4);
  lVar8 = *(long *)this;
  *(int *)(this_02 + 0x50) = *(int *)(this_03 + 0x48) + *(int *)(this_03 + 0x50);
  (**(code **)(lVar8 + 0x60))(this,this_01);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneFactorShop::ButtonDepress(int) */

PlantGeneFactorShop * __thiscall
PlantGeneFactorShop::ButtonDepress(PlantGeneFactorShop *this,int param_1)

{
  PlantGeneEnhancementView *this_00;
  PlantGeneFactorShop *pPVar1;
  
  if ((param_1 == 0x58) &&
     (this_00 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp),
     this = (PlantGeneFactorShop *)0x0, this_00 != (PlantGeneEnhancementView *)0x0)) {
    pPVar1 = (PlantGeneFactorShop *)PlantGeneEnhancementView::CloseGeneFactorShop(this_00);
    return pPVar1;
  }
  return this;
}


/* non-virtual thunk to PlantGeneFactorShop::ButtonDepress(int) */

void __thiscall PlantGeneFactorShop::ButtonDepress(PlantGeneFactorShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneFactorShop::Draw(Sexy::Graphics*) */

void __thiscall PlantGeneFactorShop::Draw(PlantGeneFactorShop *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2888);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  TodStringTranslate(L"[GENE_FACTOR_SHOP]");
  iVar1 = FUN_03800484(0x46);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

