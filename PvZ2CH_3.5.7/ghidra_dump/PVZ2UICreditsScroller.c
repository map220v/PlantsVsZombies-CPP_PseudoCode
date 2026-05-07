// Class: PVZ2UICreditsScroller


/* PVZ2UICreditsScroller::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVZ2UICreditsScroller::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ2UICreditsScroller::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PVZ2UICreditsScroller::ScrollTargetReached(PVZ2UICreditsScroller *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PVZ2UICreditsScroller::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVZ2UICreditsScroller::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ2UICreditsScroller::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PVZ2UICreditsScroller::ScrollTargetInterrupted(PVZ2UICreditsScroller *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScroller::StaticClassInit() */

void PVZ2UICreditsScroller::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PVZ2UICreditsScroller");
    (*pcVar2)(plVar1,asStack_10,FUN_04370fb4,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UICreditsScroller::StaticGetClass() */

long * PVZ2UICreditsScroller::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UICreditsScroller",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ2UICreditsScroller::GetClass() const */

long * PVZ2UICreditsScroller::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UICreditsScroller",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScroller::GetScrollAmountScreen() */

void PVZ2UICreditsScroller::GetScrollAmountScreen(void)

{
  long lVar1;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  Sexy::ScrollWidget::GetScrollOffset();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScroller::GetMaxScrollAmountScreen() */

void PVZ2UICreditsScroller::GetMaxScrollAmountScreen(void)

{
  long lVar1;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  Sexy::ScrollWidget::GetScrollMin();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* PVZ2UICreditsScroller::DoWidgetLayout() */

void __thiscall PVZ2UICreditsScroller::DoWidgetLayout(PVZ2UICreditsScroller *this)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  lVar1 = FUN_04370c98(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe0));
  uVar3 = *(undefined8 *)(this + 0xe8);
  plVar4 = (long *)FUN_04370cec(uVar3,0);
  iVar7 = (int)(((float)*(int *)(this + 0x54) * 0.618034 - (float)*(int *)(*plVar4 + 0x54)) * 0.5);
  uVar8 = 0;
  while( true ) {
    uVar6 = FUN_04370c98(uVar3,*(undefined8 *)(this + 0xf0));
    if (uVar6 <= uVar8) break;
    plVar4 = (long *)FUN_04370cec(uVar3,uVar8);
    plVar4 = (long *)*plVar4;
    (**(code **)(*plVar4 + 0x198))
              (plVar4,(*(int *)(this + 0x50) - (int)plVar4[10]) / 2,iVar7,(int)plVar4[10],
               *(undefined4 *)((long)plVar4 + 0x54));
    puVar5 = (undefined8 *)FUN_04370cec(*(undefined8 *)(this + 0xe8),uVar8);
    (**(code **)(*plVar2 + 0x60))(plVar2,*puVar5);
    uVar3 = *(undefined8 *)(this + 0xe8);
    plVar4 = (long *)FUN_04370cec(uVar3,uVar8);
    iVar7 = iVar7 + *(int *)(*plVar4 + 0x54);
    uVar8 = uVar8 + 1;
  }
  (**(code **)(*plVar2 + 0x198))(plVar2,0,0,*(undefined4 *)(this + 0x50),iVar7);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScroller::Resize(int, int, int, int) */

void __thiscall
PVZ2UICreditsScroller::Resize
          (PVZ2UICreditsScroller *this,int param_1,int param_2,int param_3,int param_4)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  (**(code **)(**(long **)(this + 0xe0) + 0x1a0))(*(long **)(this + 0xe0),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScroller::buildTextEntry(std::wstring const&, Sexy::PrimeTypeface*, Sexy::Color
   const&, bool) */

void __thiscall
PVZ2UICreditsScroller::buildTextEntry
          (PVZ2UICreditsScroller *this,wstring *param_1,PrimeTypeface *param_2,Color *param_3,
          bool param_4)

{
  int iVar1;
  int iVar2;
  PrimeTextWidget *this_00;
  PrimeText_PotentialText *pPVar3;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [8];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_00);
  if (param_4) {
    iVar1 = *(int *)(this + 0x50);
  }
  else {
    iVar1 = FUN_04370dec(0x1ee);
  }
  iVar2 = FUN_04370dec(0xf7);
  Sexy::Insets::Insets(aIStack_38,0,0,iVar1,iVar2);
  Sexy::Insets::Insets((Insets *)local_28,aIStack_38);
  FUN_05477b24(auStack_40,param_1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)param_3);
  pPVar3 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph(param_2,(Insets *)local_28,auStack_40,1,0,aIStack_18);
  Sexy::PrimeTextWidget::SetPotentialText(this_00,pPVar3);
  FUN_05476c50(auStack_40);
  Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(this_00,true);
  FUN_05477b24(aIStack_18,param_1);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)local_30,param_2,aIStack_18,auStack_40,(Insets *)local_28);
  FUN_05476c50(aIStack_18);
  local_2c = local_28[0];
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_38);
  (**(code **)(*(long *)this_00 + 0x170))(this_00,0,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PVZ2UICreditsScroller::buildTextEntry(std::wstring const&, PrimeText_PotentialTypeface*,
   Sexy::Color const&, bool) */

void __thiscall
PVZ2UICreditsScroller::buildTextEntry
          (PVZ2UICreditsScroller *this,wstring *param_1,PrimeText_PotentialTypeface *param_2,
          Color *param_3,bool param_4)

{
  PrimeTypeface *pPVar1;
  
  pPVar1 = (PrimeTypeface *)PrimeText_PotentialTypeface::Typeface(param_2);
  buildTextEntry(this,param_1,pPVar1,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScroller::buildTextEntry(std::wstring const&, Sexy::Font*, Sexy::Color const&, bool)
    */

void __thiscall
PVZ2UICreditsScroller::buildTextEntry
          (PVZ2UICreditsScroller *this,wstring *param_1,Font *param_2,Color *param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  PrimeTextWidget *this_00;
  FontText_PotentialText *pFVar3;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [8];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_00);
  if (param_4) {
    iVar1 = *(int *)(this + 0x50);
  }
  else {
    iVar1 = FUN_04370dec(0x1ee);
  }
  iVar2 = FUN_04370dec(0xf7);
  Sexy::Insets::Insets(aIStack_38,0,0,iVar1,iVar2);
  Sexy::Insets::Insets((Insets *)local_28,aIStack_38);
  FUN_05477b24(auStack_40,param_1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)param_3);
  pFVar3 = (FontText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph(param_2,(Insets *)local_28,auStack_40,1,0,aIStack_18);
  Sexy::PrimeTextWidget::SetPotentialText(this_00,pFVar3);
  FUN_05476c50(auStack_40);
  Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen(this_00,true);
  FUN_05477b24(aIStack_18,param_1);
  Sexy::Font::SizeString_Paragraph
            ((Font *)(float)local_30,param_2,aIStack_18,auStack_40,(Insets *)local_28);
  FUN_05476c50(aIStack_18);
  local_2c = local_28[0];
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_38);
  (**(code **)(*(long *)this_00 + 0x170))(this_00,0,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScroller::Update() */

void __thiscall PVZ2UICreditsScroller::Update(PVZ2UICreditsScroller *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  float *pfVar5;
  ScrollWidget *pSVar6;
  float fVar7;
  float fVar8;
  float local_14;
  DVec2 aDStack_10 [4];
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = Sexy::ScrollWidget::GetIsTrackingTouch(*(ScrollWidget **)(this + 0xe0));
  if (cVar3 != '\0') {
    fVar7 = (float)PVZ_RealT();
    this[0x104] = (PVZ2UICreditsScroller)0x0;
    *(float *)(this + 0x100) = fVar7 + 3.0;
    *(undefined4 *)(this + 0x108) = 0;
  }
  fVar7 = (float)PVZ_RealT();
  if (*(float *)(this + 0x100) < fVar7) {
    lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe0));
    iVar1 = *(int *)(lVar4 + 0x48);
    lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe0));
    iVar2 = *(int *)(lVar4 + 0x4c);
    if (this[0x104] == (PVZ2UICreditsScroller)0x0) {
      this[0x104] = (PVZ2UICreditsScroller)0x1;
      *(float *)(this + 0x108) = (float)iVar2;
    }
    fVar7 = (float)PVZ_RealDt();
    fVar8 = (float)FUN_04370e00(0x41a00000);
    *(float *)(this + 0x108) = *(float *)(this + 0x108) - fVar7 * fVar8;
    Sexy::ScrollWidget::GetScrollMin();
    local_14 = local_c;
    pfVar5 = eastl::max_alt<float>((float *)(this + 0x108),&local_14);
    fVar7 = *pfVar5;
    pSVar6 = *(ScrollWidget **)(this + 0xe0);
    *(float *)(this + 0x108) = fVar7;
    DVec2::DVec2(aDStack_10,(float)iVar1,fVar7);
    Sexy::ScrollWidget::SetScrollOffset(pSVar6,aDStack_10,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UICreditsScroller::PVZ2UICreditsScroller() */

void __thiscall PVZ2UICreditsScroller::PVZ2UICreditsScroller(PVZ2UICreditsScroller *this)

{
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  float fVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06837030;
  *(undefined ***)(this + 0xd8) = &PTR__PVZ2UICreditsScroller_06837360;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  this[0x104] = (PVZ2UICreditsScroller)0x0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  *(PVZ2UIScrollingWidget **)(this + 0xe0) = this_00;
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(**(long **)(this + 0xe0) + 0x60))(*(long **)(this + 0xe0),this_01);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe0),2);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  fVar1 = (float)PVZ_RealT();
  *(float *)(this + 0x100) = fVar1 + 8.0;
  return;
}


/* PVZ2UICreditsScroller::StaticNew() */

PVZ2UICreditsScroller * PVZ2UICreditsScroller::StaticNew(void)

{
  PVZ2UICreditsScroller *this;
  
  this = ::operator_new(0x110);
  PVZ2UICreditsScroller(this);
  return this;
}


/* PVZ2UICreditsScroller::~PVZ2UICreditsScroller() */

void __thiscall PVZ2UICreditsScroller::~PVZ2UICreditsScroller(PVZ2UICreditsScroller *this)

{
  *(undefined ***)this = &PTR_GetClass_06837030;
  *(undefined ***)(this + 0xd8) = &PTR__PVZ2UICreditsScroller_06837360;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PVZ2UICreditsScroller::~PVZ2UICreditsScroller() */

void __thiscall PVZ2UICreditsScroller::~PVZ2UICreditsScroller(PVZ2UICreditsScroller *this)

{
  ~PVZ2UICreditsScroller(this + -0xd8);
  return;
}


/* PVZ2UICreditsScroller::~PVZ2UICreditsScroller() */

void __thiscall PVZ2UICreditsScroller::~PVZ2UICreditsScroller(PVZ2UICreditsScroller *this)

{
  ~PVZ2UICreditsScroller(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ2UICreditsScroller::~PVZ2UICreditsScroller() */

void __thiscall PVZ2UICreditsScroller::~PVZ2UICreditsScroller(PVZ2UICreditsScroller *this)

{
  ~PVZ2UICreditsScroller(this + -0xd8);
  return;
}


/* PVZ2UICreditsScroller::AddCreditsWidget(Sexy::Widget*) */

void __thiscall PVZ2UICreditsScroller::AddCreditsWidget(PVZ2UICreditsScroller *this,Widget *param_1)

{
  Widget *local_8;
  
  local_8 = param_1;
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0xe8),&local_8);
  return;
}


/* PVZ2UICreditsScroller::AddGameTitle(std::wstring const&) */

void __thiscall PVZ2UICreditsScroller::AddGameTitle(PVZ2UICreditsScroller *this,wstring *param_1)

{
  PVZ2UIImageWidget *this_00;
  Image *pIVar1;
  PrimeTypeface *pPVar2;
  Widget *pWVar3;
  float fVar4;
  
  this_00 = ::operator_new(0xe8);
  PVZ2UIImageWidget::PVZ2UIImageWidget(this_00);
  pIVar1 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06afd2d0);
  PVZ2UIImageWidget::SetImageAndResize(this_00,pIVar1);
  fVar4 = (float)FUN_04370e00(0x41200000);
  *(int *)(this_00 + 0x54) = (int)(fVar4 + (float)*(int *)(this_00 + 0x54));
  AddCreditsWidget(this,(Widget *)this_00);
  pPVar2 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  pWVar3 = (Widget *)buildTextEntry(this,param_1,pPVar2,(Color *)&DAT_06afd390,false);
  AddCreditsWidget(this,pWVar3);
  return;
}


/* PVZ2UICreditsScroller::AddTitle(std::wstring const&) */

void __thiscall PVZ2UICreditsScroller::AddTitle(PVZ2UICreditsScroller *this,wstring *param_1)

{
  PrimeTypeface *pPVar1;
  Widget *pWVar2;
  
  pPVar1 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  pWVar2 = (Widget *)buildTextEntry(this,param_1,pPVar1,(Color *)&DAT_06afd340,false);
  AddCreditsWidget(this,pWVar2);
  return;
}


/* PVZ2UICreditsScroller::AddDisciplineTitle(std::wstring const&) */

void __thiscall
PVZ2UICreditsScroller::AddDisciplineTitle(PVZ2UICreditsScroller *this,wstring *param_1)

{
  Widget *pWVar1;
  float fVar2;
  
  pWVar1 = (Widget *)buildTextEntry(this,param_1,DAT_06afd338,(Color *)&DAT_06afd4b8,false);
  fVar2 = (float)FUN_04370e00(0x40a00000);
  (**(code **)(*(long *)pWVar1 + 0x198))
            (pWVar1,*(undefined4 *)(pWVar1 + 0x48),*(undefined4 *)(pWVar1 + 0x4c),
             *(undefined4 *)(pWVar1 + 0x50),(int)(fVar2 + (float)*(int *)(pWVar1 + 0x54)));
  AddCreditsWidget(this,pWVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICreditsScroller::AddNameText(std::wstring const&) */

void PVZ2UICreditsScroller::AddNameText(wstring *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  Widget *pWVar5;
  undefined4 *puVar6;
  ulong uVar7;
  wstring awStack_10 [8];
  long local_8;
  
  uVar7 = 0;
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  FUN_05477b24(awStack_10);
  lVar2 = FUN_054765d0(awStack_10);
  if (lVar2 != 0) {
    do {
      piVar3 = (int *)FUN_05476f5c(awStack_10,uVar7);
      if (*piVar3 == 0x2c) {
        bVar1 = true;
      }
      else {
        piVar3 = (int *)FUN_05476f5c(awStack_10,uVar7);
        if ((bVar1) || (*piVar3 != 0x20)) {
          bVar1 = false;
        }
        else {
          puVar6 = (undefined4 *)FUN_05476f5c(awStack_10,uVar7);
          *puVar6 = 0xa0;
        }
      }
      uVar7 = uVar7 + 1;
      uVar4 = FUN_054765d0(awStack_10);
    } while (uVar7 < uVar4);
  }
  pWVar5 = (Widget *)
           buildTextEntry((PVZ2UICreditsScroller *)param_1,awStack_10,DAT_06afd2f8,
                          (Color *)&DAT_06afd3a8,false);
  AddCreditsWidget((PVZ2UICreditsScroller *)param_1,pWVar5);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UICreditsScroller::AddThankYouNoteName(std::wstring const&) */

void __thiscall
PVZ2UICreditsScroller::AddThankYouNoteName(PVZ2UICreditsScroller *this,wstring *param_1)

{
  PrimeTypeface *pPVar1;
  Widget *pWVar2;
  
  pPVar1 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  pWVar2 = (Widget *)buildTextEntry(this,param_1,pPVar1,(Color *)&DAT_06afd530,false);
  AddCreditsWidget(this,pWVar2);
  return;
}


/* PVZ2UICreditsScroller::AddThankYouNoteMessage(std::wstring const&) */

void __thiscall
PVZ2UICreditsScroller::AddThankYouNoteMessage(PVZ2UICreditsScroller *this,wstring *param_1)

{
  PrimeTypeface *pPVar1;
  Widget *pWVar2;
  
  pPVar1 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  pWVar2 = (Widget *)buildTextEntry(this,param_1,pPVar1,(Color *)&DAT_06afd4f8,true);
  AddCreditsWidget(this,pWVar2);
  return;
}


/* PVZ2UICreditsScroller::AddSpacerSmall() */

void __thiscall PVZ2UICreditsScroller::AddSpacerSmall(PVZ2UICreditsScroller *this)

{
  undefined4 uVar1;
  Widget *this_00;
  
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  uVar1 = FUN_04370dec(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,10,uVar1);
  AddCreditsWidget(this,this_00);
  return;
}


/* PVZ2UICreditsScroller::AddSpacerLarge() */

void __thiscall PVZ2UICreditsScroller::AddSpacerLarge(PVZ2UICreditsScroller *this)

{
  undefined4 uVar1;
  Widget *this_00;
  
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  uVar1 = FUN_04370dec(300);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,10,uVar1);
  AddCreditsWidget(this,this_00);
  return;
}

