// Class: LuckBagSelectRow


/* LuckBagSelectRow::ScrollTargetReached(Sexy::ScrollWidget*) */

void LuckBagSelectRow::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LuckBagSelectRow::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall LuckBagSelectRow::ScrollTargetReached(LuckBagSelectRow *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* LuckBagSelectRow::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LuckBagSelectRow::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LuckBagSelectRow::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LuckBagSelectRow::ScrollTargetInterrupted(LuckBagSelectRow *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* LuckBagSelectRow::setSelect(int) */

void __thiscall LuckBagSelectRow::setSelect(LuckBagSelectRow *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0xe8);
  uVar4 = 0;
  uVar2 = FUN_03abac80(uVar5,*(undefined8 *)(this + 0xf0));
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03abac8c(uVar5,uVar4);
      if ((LuckBagSelectItem *)*puVar3 != (LuckBagSelectItem *)0x0) {
        iVar1 = LuckBagSelectItem::getData((LuckBagSelectItem *)*puVar3);
        if (iVar1 == param_1) {
          puVar3 = (undefined8 *)FUN_03abac8c(*(undefined8 *)(this + 0xe8),uVar4);
          LuckBagSelectItem::setIsSelected((LuckBagSelectItem *)*puVar3,true);
        }
        else {
          puVar3 = (undefined8 *)FUN_03abac8c(*(undefined8 *)(this + 0xe8),uVar4);
          LuckBagSelectItem::setIsSelected((LuckBagSelectItem *)*puVar3,false);
        }
        uVar5 = *(undefined8 *)(this + 0xe8);
        uVar2 = FUN_03abac80(uVar5,*(undefined8 *)(this + 0xf0));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}


/* LuckBagSelectRow::getSelect() */

undefined1  [16] __thiscall LuckBagSelectRow::getSelect(LuckBagSelectRow *this)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar5 = *(undefined8 *)(this + 0xe8);
  uVar4 = 0;
  uVar2 = FUN_03abac80(uVar5,*(undefined8 *)(this + 0xf0));
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03abac8c(uVar5,uVar4);
      if ((ComponentVisualStretcher *)*puVar3 != (ComponentVisualStretcher *)0x0) {
        cVar1 = ComponentVisualStretcher::IsStretching((ComponentVisualStretcher *)*puVar3);
        if (cVar1 != '\0') {
          puVar3 = (undefined8 *)FUN_03abac8c(*(undefined8 *)(this + 0xe8),uVar4);
          auVar7 = LuckBagSelectItem::getData((LuckBagSelectItem *)*puVar3);
          local_8 = auVar7._8_4_;
          local_10 = auVar7._0_4_;
          local_c = auVar7._4_4_;
          goto LAB_03abba70;
        }
        uVar5 = *(undefined8 *)(this + 0xe8);
        uVar2 = FUN_03abac80(uVar5,*(undefined8 *)(this + 0xf0));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  local_c = 0;
  local_10 = 0xffffffff;
  local_8 = 0;
LAB_03abba70:
  auVar6._4_4_ = local_c;
  auVar6._0_4_ = local_10;
  auVar6._8_4_ = local_8;
  auVar6._12_4_ = 0;
  return auVar6;
}


/* LuckBagSelectRow::LuckBagSelectRow() */

void __thiscall LuckBagSelectRow::LuckBagSelectRow(LuckBagSelectRow *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_067173e0;
  *(undefined ***)(this + 0xd8) = &PTR__LuckBagSelectRow_06717710;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  return;
}


/* LuckBagSelectRow::~LuckBagSelectRow() */

void __thiscall LuckBagSelectRow::~LuckBagSelectRow(LuckBagSelectRow *this)

{
  *(undefined ***)this = &PTR_GetClass_067173e0;
  *(undefined ***)(this + 0xd8) = &PTR__LuckBagSelectRow_06717710;
  std::vector<LuckBagSelectItem*,std::allocator<LuckBagSelectItem*>>::~vector
            ((vector<LuckBagSelectItem*,std::allocator<LuckBagSelectItem*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LuckBagSelectRow::~LuckBagSelectRow() */

void __thiscall LuckBagSelectRow::~LuckBagSelectRow(LuckBagSelectRow *this)

{
  ~LuckBagSelectRow(this + -0xd8);
  return;
}


/* LuckBagSelectRow::~LuckBagSelectRow() */

void __thiscall LuckBagSelectRow::~LuckBagSelectRow(LuckBagSelectRow *this)

{
  ~LuckBagSelectRow(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LuckBagSelectRow::~LuckBagSelectRow() */

void __thiscall LuckBagSelectRow::~LuckBagSelectRow(LuckBagSelectRow *this)

{
  ~LuckBagSelectRow(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckBagSelectRow::init(std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&, int) */

void __thiscall LuckBagSelectRow::init(LuckBagSelectRow *this,vector *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  LuckBagSelectItem *pLVar5;
  LotteryBonus *pLVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  LuckBagSelectItem *local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  *(int *)(this + 0xe0) = param_2;
  local_8 = ___stack_chk_guard;
  std::vector<LuckBagSelectItem*,std::allocator<LuckBagSelectItem*>>::clear
            ((vector<LuckBagSelectItem*,std::allocator<LuckBagSelectItem*>> *)(this + 0xe8));
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  uVar1 = FUN_03abb658(0x5a);
  iVar2 = FUN_03abb658(100);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,0,*(int *)(this + 0x50) - iVar2,*(undefined4 *)(this + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = FUN_03abb658(5);
  iVar2 = *(int *)(this_00 + 0x54) + iVar2 * -2;
  uVar9 = 0;
  while( true ) {
    uVar7 = FUN_03abac24(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar7 <= uVar9) break;
    iVar3 = FUN_03abb658(8);
    iVar4 = FUN_03abb658(5);
    Sexy::Insets::Insets
              (aIStack_18,iVar3 + (iVar2 + iVar3) * (int)uVar9,iVar4,iVar2,
               *(int *)(this_00 + 0x54) + iVar4 * -2);
    pLVar5 = ::operator_new(0x108);
    LuckBagSelectItem::LuckBagSelectItem(pLVar5,this);
    local_20 = pLVar5;
    (**(code **)(*(long *)pLVar5 + 0x1a0))(pLVar5,aIStack_18);
    pLVar5 = local_20;
    pLVar6 = (LotteryBonus *)FUN_03abac44(*(undefined8 *)param_1,uVar9);
    LuckBagSelectItem::init(pLVar5,pLVar6);
    std::vector<LuckBagSelectItem*,std::allocator<LuckBagSelectItem*>>::push_back
              ((vector<LuckBagSelectItem*,std::allocator<LuckBagSelectItem*>> *)(this + 0xe8),
               &local_20);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_20);
    uVar9 = uVar9 + 1;
  }
  iVar3 = FUN_03abb658(10);
  iVar4 = FUN_03abb658(8);
  pcVar8 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = iVar3 + (iVar4 + iVar2) * (int)uVar7;
  (*pcVar8)(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckBagSelectRow::Draw(Sexy::Graphics*) */

void __thiscall LuckBagSelectRow::Draw(LuckBagSelectRow *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7a80);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7d00);
  iVar1 = FUN_03abb658(5);
  iVar2 = FUN_03abb658(0x50);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar1,iVar2,iVar2);
  FUN_05478178(awStack_38,L"[LUCKBAG_COUNT]",auStack_40);
  TodReplaceNumberString(awStack_38,L"{NUM}",*(int *)(this + 0xe0));
  iVar2 = FUN_03abb658(5);
  iVar3 = FUN_03abb658(0x32);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_03abb658(0x50);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar1 - iVar3,iVar4,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,2,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

