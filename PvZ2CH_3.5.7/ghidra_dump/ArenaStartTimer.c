// Class: ArenaStartTimer


/* ArenaStartTimer::SetStart(bool) */

void __thiscall ArenaStartTimer::SetStart(ArenaStartTimer *this,bool param_1)

{
  float fVar1;
  
  this[0x170] = (ArenaStartTimer)param_1;
  if (param_1) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x174) = fVar1 + *(float *)(this + 0x17c);
  }
  return;
}


/* ArenaStartTimer::~ArenaStartTimer() */

void __thiscall ArenaStartTimer::~ArenaStartTimer(ArenaStartTimer *this)

{
  *(undefined ***)this = &PTR_GetClass_069543a0;
  *(undefined ***)(this + 0x10) = &PTR__ArenaStartTimer_06954540;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ArenaStartTimer::~ArenaStartTimer() */

void __thiscall ArenaStartTimer::~ArenaStartTimer(ArenaStartTimer *this)

{
  ~ArenaStartTimer(this + -0x10);
  return;
}


/* ArenaStartTimer::~ArenaStartTimer() */

void __thiscall ArenaStartTimer::~ArenaStartTimer(ArenaStartTimer *this)

{
  ~ArenaStartTimer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArenaStartTimer::~ArenaStartTimer() */

void __thiscall ArenaStartTimer::~ArenaStartTimer(ArenaStartTimer *this)

{
  ~ArenaStartTimer(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStartTimer::StaticClassInit() */

void ArenaStartTimer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArenaStartTimer");
    (*pcVar2)(plVar1,asStack_10,FUN_04b16a78,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaStartTimer::StaticGetClass() */

long * ArenaStartTimer::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaStartTimer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaStartTimer::GetClass() const */

long * ArenaStartTimer::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaStartTimer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaStartTimer::ArenaStartTimer() */

void __thiscall ArenaStartTimer::ArenaStartTimer(ArenaStartTimer *this)

{
  undefined4 uVar1;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  this[0x170] = (ArenaStartTimer)0x0;
  *(undefined ***)this = &PTR_GetClass_069543a0;
  *(undefined ***)(this + 0x10) = &PTR__ArenaStartTimer_06954540;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x174) = uVar1;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  return;
}


/* ArenaStartTimer::StaticNew() */

ArenaStartTimer * ArenaStartTimer::StaticNew(void)

{
  ArenaStartTimer *this;
  
  this = ::operator_new(0x180);
  ArenaStartTimer(this);
  return this;
}


/* ArenaStartTimer::onUpdate() */

void __thiscall ArenaStartTimer::onUpdate(ArenaStartTimer *this)

{
  float fVar1;
  float fVar2;
  
  if (this[0x170] == (ArenaStartTimer)0x0) {
    return;
  }
  fVar2 = *(float *)(this + 0x174);
  fVar1 = (float)PVZ_T();
  if (0.0 < fVar2 - fVar1) {
    *(float *)(this + 0x178) = fVar2 - fVar1;
    return;
  }
  this[0x170] = (ArenaStartTimer)0x0;
  *(undefined4 *)(this + 0x178) = 0;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaStartTimer::Draw(Sexy::Graphics*) */

void __thiscall ArenaStartTimer::Draw(ArenaStartTimer *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  SalesProgressBar *this_00;
  undefined8 uVar7;
  PrimeText_PotentialText *pPVar8;
  PrimeTextWidget *this_01;
  uint uVar9;
  code *pcVar10;
  long *plVar11;
  GraphicsAutoState aGStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_28 = 0;
  local_24 = 0;
  if (this[0x170] == (ArenaStartTimer)0x0) {
    if (*(long *)(this + 0x168) != 0) {
      Sexy::StrFormat(L"%.1fs\n",awStack_18,(double)*(float *)(this + 0x178));
      Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x168),awStack_18);
      FUN_05476c50(awStack_18);
    }
  }
  else {
    uVar9 = (uint)(*(float *)(this + 0x178) * 0.016666668);
    Sexy::StrFormat(L"%d:%.2d",awStack_38,(ulong)uVar9,
                    (ulong)(uint)(int)(*(float *)(this + 0x178) - (float)(int)(uVar9 * 0x3c)));
    plVar11 = *(long **)(this + 0x168);
    if (plVar11 == (long *)0x0) {
      iVar3 = FUN_04b16930(0x78);
      this_00 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83a20);
      iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
      iVar5 = FUN_04b16930(0);
      uVar7 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
      iVar1 = (local_20 - iVar3) / 2 + local_28;
      iVar2 = iVar4 + iVar5 + local_24;
      FUN_05477b24(auStack_30,awStack_38);
      Sexy::Color::Color((Color *)awStack_18,2);
      pPVar8 = (PrimeText_PotentialText *)
               Sexy::BuildPotentialText_Paragraph
                         ((float)iVar1,(float)iVar2,(float)iVar3,(float)(local_1c - (iVar4 + iVar5))
                          ,uVar7,auStack_30,1,1,(Color *)awStack_18);
      this_01 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(this_01,pPVar8);
      *(PrimeTextWidget **)(this + 0x168) = this_01;
      FUN_05476c50(auStack_30);
    }
    else {
      pcVar10 = *(code **)(*plVar11 + 0x170);
      Sexy::Color::Color((Color *)awStack_18,2);
      (*pcVar10)(plVar11,0,(Color *)awStack_18);
      Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x168),awStack_38);
    }
    (**(code **)(**(long **)(this + 0x168) + 0x128))(*(long **)(this + 0x168),param_1);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83a20);
    Sexy::Graphics::DrawImage(param_1,pIVar6,local_28,local_24);
    FUN_05476c50(awStack_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArenaStartTimer::Draw(Sexy::Graphics*) */

void __thiscall ArenaStartTimer::Draw(ArenaStartTimer *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

