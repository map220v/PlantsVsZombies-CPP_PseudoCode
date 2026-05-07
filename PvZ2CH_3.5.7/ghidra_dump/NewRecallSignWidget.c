// Class: NewRecallSignWidget


/* NewRecallSignWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void NewRecallSignWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to NewRecallSignWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
NewRecallSignWidget::ScrollTargetReached(NewRecallSignWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* NewRecallSignWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void NewRecallSignWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to NewRecallSignWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
NewRecallSignWidget::ScrollTargetInterrupted(NewRecallSignWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* NewRecallSignWidget::~NewRecallSignWidget() */

void __thiscall NewRecallSignWidget::~NewRecallSignWidget(NewRecallSignWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0670b0a0;
  *(undefined ***)(this + 0xd8) = &PTR__NewRecallSignWidget_0670b3d0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to NewRecallSignWidget::~NewRecallSignWidget() */

void __thiscall NewRecallSignWidget::~NewRecallSignWidget(NewRecallSignWidget *this)

{
  ~NewRecallSignWidget(this + -0xd8);
  return;
}


/* NewRecallSignWidget::~NewRecallSignWidget() */

void __thiscall NewRecallSignWidget::~NewRecallSignWidget(NewRecallSignWidget *this)

{
  ~NewRecallSignWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewRecallSignWidget::~NewRecallSignWidget() */

void __thiscall NewRecallSignWidget::~NewRecallSignWidget(NewRecallSignWidget *this)

{
  ~NewRecallSignWidget(this + -0xd8);
  return;
}


/* NewRecallSignWidget::NewRecallSignWidget() */

void __thiscall NewRecallSignWidget::NewRecallSignWidget(NewRecallSignWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0670b0a0;
  *(undefined ***)(this + 0xd8) = &PTR__NewRecallSignWidget_0670b3d0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSignWidget::init(NewRecallSignData const&) */

void __thiscall NewRecallSignWidget::init(NewRecallSignWidget *this,NewRecallSignData *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ulong uVar6;
  NewRecallSignLine *this_02;
  vector *pvVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  uVar2 = FUN_03a55578(100);
  iVar3 = FUN_03a55578(0x6e);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,uVar2,*(undefined4 *)(this + 0x50),*(int *)(this + 0x54) - iVar3);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar4 = FUN_03a55578(10);
  iVar5 = FUN_03a55578(0);
  iVar3 = FUN_03a55578(5);
  iVar1 = *(int *)(this + 0x50);
  iVar12 = (int)((float)((*(int *)(this_00 + 0x54) - iVar5) + iVar3 * -3) * 0.2857143);
  iVar3 = iVar3 + iVar12;
  iVar11 = iVar5;
  for (uVar10 = 0;
      uVar6 = FUN_03a541ac(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20)),
      uVar10 < uVar6; uVar10 = uVar10 + 1) {
    Sexy::Insets::Insets(aIStack_18,iVar4,iVar11,iVar1 + iVar4 * -2,iVar12);
    this_02 = ::operator_new(0x110);
    NewRecallSignLine::NewRecallSignLine(this_02);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_18);
    pvVar7 = (vector *)FUN_03a541dc(*(undefined8 *)(param_1 + 0x18),uVar10);
    iVar9 = (int)uVar10;
    NewRecallSignLine::init(this_02,iVar9,pvVar7,iVar9 == 0);
    if (*(int *)(param_1 + 0x30) <= iVar9) {
      NewRecallBankLine::setNoCondition((NewRecallBankLine *)this_02);
    }
    iVar11 = iVar11 + iVar3;
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  }
  pcVar8 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = iVar5 * 2 + iVar3 * (int)uVar6;
  (*pcVar8)(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSignWidget::Draw(Sexy::Graphics*) */

void __thiscall NewRecallSignWidget::Draw(NewRecallSignWidget *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  Insets aIStack_a8 [16];
  wstring awStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5bd8);
  iVar2 = FUN_03a55578(0x50);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),iVar2);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5d90);
  iVar3 = FUN_03a55578(200);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_03a55578(0x32);
  iVar5 = FUN_03a55578(0xb4);
  iVar6 = FUN_03a55578(0x19);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2 - iVar3,iVar4,iVar5,iVar6);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a53f58(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    TodStringTranslate(L"[TOTAL_LOGIN_DAYS]");
    iVar2 = ActiveItem::GetLeftDays(aAStack_88);
    TodReplaceNumberString(awStack_98,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_98);
    iVar3 = FUN_03a55578(0x6e);
    iVar2 = *(int *)(this + 0x50);
    iVar4 = FUN_03a55578(0x32);
    iVar5 = FUN_03a55578(0x5a);
    iVar6 = FUN_03a55578(0x19);
    Sexy::Insets::Insets(aIStack_a8,iVar2 - iVar3,iVar4,iVar5,iVar6);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)awStack_98,1);
    WriteWordInRect(param_1,auStack_b0,aIStack_a8,uVar8,awStack_98,5,1);
    FUN_05476c50(auStack_b0);
  }
  iVar2 = FUN_03a55578(0x5a);
  Sexy::Insets::Insets
            ((Insets *)awStack_98,0,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar2);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5cc0);
  Draw9SliceImage(param_1,(Insets *)awStack_98,uVar8);
  nop();
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

