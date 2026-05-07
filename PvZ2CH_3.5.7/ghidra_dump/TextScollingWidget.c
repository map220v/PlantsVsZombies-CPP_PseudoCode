// Class: TextScollingWidget


/* TextScollingWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void TextScollingWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to TextScollingWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
TextScollingWidget::ScrollTargetReached(TextScollingWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* TextScollingWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void TextScollingWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to TextScollingWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
TextScollingWidget::ScrollTargetInterrupted(TextScollingWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* TextScollingWidget::~TextScollingWidget() */

void __thiscall TextScollingWidget::~TextScollingWidget(TextScollingWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a279a0;
  *(undefined ***)(this + 0xd8) = &PTR__TextScollingWidget_06a27cd0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to TextScollingWidget::~TextScollingWidget() */

void __thiscall TextScollingWidget::~TextScollingWidget(TextScollingWidget *this)

{
  ~TextScollingWidget(this + -0xd8);
  return;
}


/* TextScollingWidget::~TextScollingWidget() */

void __thiscall TextScollingWidget::~TextScollingWidget(TextScollingWidget *this)

{
  ~TextScollingWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TextScollingWidget::~TextScollingWidget() */

void __thiscall TextScollingWidget::~TextScollingWidget(TextScollingWidget *this)

{
  ~TextScollingWidget(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextScollingWidget::TextScollingWidget() */

void __thiscall TextScollingWidget::TextScollingWidget(TextScollingWidget *this)

{
  undefined4 uVar1;
  PVZ2UIScrollingWidget *this_00;
  UIWidgetText *pUVar2;
  Widget *this_01;
  long *plVar3;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 2;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined ***)this = &PTR_GetClass_06a279a0;
  *(undefined ***)(this + 0xd8) = &PTR__TextScollingWidget_06a27cd0;
  *(undefined8 *)(this + 0x100) = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  *(PVZ2UIScrollingWidget **)(this + 0x100) = this_00;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_00);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x100),*(undefined4 *)(this + 0xe0));
  std::string::string(asStack_10,"");
  Sexy::ToWString(asStack_10);
  pUVar2 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar2,awStack_18);
  *(UIWidgetText **)(this + 0xf0) = pUVar2;
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"");
  Sexy::ToWString(asStack_10);
  pUVar2 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar2,awStack_18);
  *(UIWidgetText **)(this + 0xf8) = pUVar2;
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_10);
  nop();
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  *(Widget **)(this + 0xe8) = this_01;
  (**(code **)(*(long *)this_01 + 0x60))(this_01,*(undefined8 *)(this + 0xf0));
  (**(code **)(**(long **)(this + 0xe8) + 0x60))
            (*(long **)(this + 0xe8),*(undefined8 *)(this + 0xf8));
  plVar3 = *(long **)(this + 0xe8);
  uVar1 = FUN_04fada68(100);
  (**(code **)(*plVar3 + 0x198))(plVar3,0,0,uVar1,uVar1);
  (**(code **)(**(long **)(this + 0x100) + 0x60))
            (*(long **)(this + 0x100),*(undefined8 *)(this + 0xe8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TextScollingWidget::SetStringColor(Sexy::Color const&) */

void __thiscall TextScollingWidget::SetStringColor(TextScollingWidget *this,Color *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,0,param_1);
  }
  plVar1 = *(long **)(this + 0xf8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,0,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextScollingWidget::Refresh() */

void __thiscall TextScollingWidget::Refresh(TextScollingWidget *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  PrimeTypeface *pPVar5;
  undefined8 uVar6;
  ScrollWidget *pSVar7;
  long lVar8;
  int iVar9;
  UIWidgetImage *pUVar10;
  long *plVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(long *)(this + 0x100) != 0) &&
      (pUVar10 = *(UIWidgetImage **)(this + 0xf0), pUVar10 != (UIWidgetImage *)0x0)) &&
     (*(long *)(this + 0xf8) != 0)) {
    uVar1 = *(undefined4 *)(this + 0x50);
    pPVar5 = (PrimeTypeface *)FUN_04fad010(*(undefined8 *)(pUVar10 + 0xe8));
    uVar6 = UIWidgetImage::GetPVZ2Image(pUVar10);
    FUN_05477b24(auStack_28,uVar6);
    FUN_05477b24(aIStack_18,auStack_28);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)*(int *)(this + 0x50),pPVar5,aIStack_18,&local_38,&local_34);
    FUN_05476c50(aIStack_18);
    plVar11 = *(long **)(this + 0xf0);
    fVar14 = (float)local_34;
    pcVar12 = *(code **)(*plVar11 + 0x1a0);
    fVar13 = (float)Sexy::PrimeTypeface::GetHeight(pPVar5);
    Sexy::Insets::Insets(aIStack_18,0,0,local_38,(int)(fVar13 + fVar14));
    (*pcVar12)(plVar11,aIStack_18);
    fVar13 = (float)Sexy::PrimeTypeface::GetHeight(pPVar5);
    pUVar10 = *(UIWidgetImage **)(this + 0xf8);
    iVar9 = (int)(fVar13 + (float)local_34);
    uVar6 = UIWidgetImage::GetPVZ2Image(pUVar10);
    cVar4 = FUN_054765e8();
    if (cVar4 == '\0') {
      pPVar5 = (PrimeTypeface *)FUN_04fad010(*(undefined8 *)(pUVar10 + 0xe8));
      FUN_05477b24(auStack_20,uVar6);
      FUN_05477b24(aIStack_18,auStack_20);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)*(int *)(this + 0x50),pPVar5,aIStack_18,&local_30,&local_2c);
      FUN_05476c50(aIStack_18);
      plVar11 = *(long **)(this + 0xf8);
      fVar14 = (float)local_2c;
      iVar3 = *(int *)(*(long *)(this + 0xf0) + 0x54);
      pcVar12 = *(code **)(*plVar11 + 0x1a0);
      fVar13 = (float)Sexy::PrimeTypeface::GetHeight(pPVar5);
      Sexy::Insets::Insets(aIStack_18,0,iVar3,local_30,(int)(fVar13 + fVar14));
      (*pcVar12)(plVar11,aIStack_18);
      fVar13 = (float)Sexy::PrimeTypeface::GetHeight(pPVar5);
      iVar9 = iVar9 + (int)(fVar13 + (float)local_2c);
      FUN_05476c50(auStack_20);
    }
    lVar8 = *(long *)(this + 0xe8);
    pSVar7 = *(ScrollWidget **)(this + 0x100);
    uVar2 = *(undefined4 *)(this + 0xe0);
    *(undefined4 *)(lVar8 + 0x50) = uVar1;
    *(int *)(lVar8 + 0x54) = iVar9;
    Sexy::ScrollWidget::SetScrollMode(pSVar7,uVar2);
    FUN_05476c50(auStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TextScollingWidget::Resize(int, int, int, int) */

void __thiscall
TextScollingWidget::Resize(TextScollingWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0x100);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
    Refresh(this);
    return;
  }
  return;
}


/* TextScollingWidget::SetString(std::wstring const&, Sexy::PrimeTypeface*) */

void __thiscall
TextScollingWidget::SetString(TextScollingWidget *this,wstring *param_1,PrimeTypeface *param_2)

{
  if (*(long *)(this + 0xf0) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0xf0));
    FUN_04fad008(*(long *)(this + 0xf0) + 0xe8,param_2);
    Refresh(this);
    return;
  }
  return;
}


/* TextScollingWidget::SetStringExtra(std::wstring const&, Sexy::PrimeTypeface*) */

void __thiscall
TextScollingWidget::SetStringExtra(TextScollingWidget *this,wstring *param_1,PrimeTypeface *param_2)

{
  if (*(long *)(this + 0xf8) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0xf8));
    FUN_04fad008(*(long *)(this + 0xf8) + 0xe8,param_2);
    Refresh(this);
    return;
  }
  return;
}

