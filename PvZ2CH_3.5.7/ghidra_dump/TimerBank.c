// Class: TimerBank


/* TimerBank::~TimerBank() */

void __thiscall TimerBank::~TimerBank(TimerBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06852980;
  *(undefined ***)(this + 0x10) = &PTR__TimerBank_06852b20;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to TimerBank::~TimerBank() */

void __thiscall TimerBank::~TimerBank(TimerBank *this)

{
  ~TimerBank(this + -0x10);
  return;
}


/* TimerBank::~TimerBank() */

void __thiscall TimerBank::~TimerBank(TimerBank *this)

{
  ~TimerBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TimerBank::~TimerBank() */

void __thiscall TimerBank::~TimerBank(TimerBank *this)

{
  ~TimerBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimerBank::StaticClassInit() */

void TimerBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimerBank");
    (*pcVar2)(plVar1,asStack_10,FUN_044ae078,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimerBank::StaticGetClass() */

long * TimerBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TimerBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimerBank::GetClass() const */

long * TimerBank::GetClass(void)

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
  (*pcVar3)(plVar1,"TimerBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimerBank::TimerBank() */

void __thiscall TimerBank::TimerBank(TimerBank *this)

{
  undefined4 uVar1;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  this[0x170] = (TimerBank)0x0;
  *(undefined ***)this = &PTR_GetClass_06852980;
  *(undefined ***)(this + 0x10) = &PTR__TimerBank_06852b20;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x174) = uVar1;
  *(undefined4 *)(this + 0x178) = 0;
  return;
}


/* TimerBank::StaticNew() */

TimerBank * TimerBank::StaticNew(void)

{
  TimerBank *this;
  
  this = ::operator_new(0x180);
  TimerBank(this);
  return this;
}


/* TimerBank::GetElapseTime() */

float __thiscall TimerBank::GetElapseTime(TimerBank *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_EOT();
  fVar2 = 0.0;
  if (*(float *)(this + 0x174) != fVar1) {
    fVar2 = *(float *)(this + 0x17c) - *(float *)(this + 0x178);
  }
  return fVar2;
}


/* TimerBank::HasStart() */

TimerBank __thiscall TimerBank::HasStart(TimerBank *this)

{
  return this[0x170];
}


/* TimerBank::GetRemainTime() */

undefined4 __thiscall TimerBank::GetRemainTime(TimerBank *this)

{
  return *(undefined4 *)(this + 0x178);
}


/* TimerBank::GetDuration() */

undefined4 __thiscall TimerBank::GetDuration(TimerBank *this)

{
  return *(undefined4 *)(this + 0x17c);
}


/* TimerBank::onUpdate() */

void __thiscall TimerBank::onUpdate(TimerBank *this)

{
  float fVar1;
  float fVar2;
  
  if (this[0x170] == (TimerBank)0x0) {
    return;
  }
  fVar2 = *(float *)(this + 0x174);
  fVar1 = (float)PVZ_T();
  if (0.0 < fVar2 - fVar1) {
    *(float *)(this + 0x178) = fVar2 - fVar1;
    return;
  }
  this[0x170] = (TimerBank)0x0;
  *(undefined4 *)(this + 0x178) = 0;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimerBank::GetUIRect() */

void __thiscall TimerBank::GetUIRect(TimerBank *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *pLVar4;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0c730);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0c730);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  Sexy::Insets::Insets(in_x8,local_18 - iVar2 / 2,local_14,local_10 + iVar3 / 2,local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimerBank::Draw(Sexy::Graphics*) */

void __thiscall TimerBank::Draw(TimerBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *this_00;
  PrimeText_PotentialText *pPVar7;
  PrimeTextWidget *this_01;
  uint uVar8;
  code *pcVar9;
  long *plVar10;
  float fVar11;
  GraphicsAutoState aGStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_28 = 0;
  local_24 = 0;
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0c6c0);
  Draw3SliceImage(param_1,aIStack_18,uVar4);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0c730);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0c730);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar1 = local_1c;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0c730);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar5,(int)((float)iVar2 * -0.5),(iVar1 - iVar3) / 2);
  if (this[0x170] == (TimerBank)0x0) {
    if (*(long *)(this + 0x168) != 0) {
      Sexy::StrFormat(L"%.1fs\n",aIStack_18,(double)*(float *)(this + 0x178));
      Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x168),(wstring *)aIStack_18);
      FUN_05476c50(aIStack_18);
    }
  }
  else {
    uVar8 = (uint)(*(float *)(this + 0x178) * 0.016666668);
    Sexy::StrFormat(L"%d:%.2d",awStack_38,(ulong)uVar8,
                    (ulong)(uint)(int)(*(float *)(this + 0x178) - (float)(int)(uVar8 * 0x3c)));
    plVar10 = *(long **)(this + 0x168);
    if (plVar10 == (long *)0x0) {
      uVar4 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
      iVar1 = local_28;
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0c730);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      fVar11 = (float)local_24;
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0c730);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      FUN_05477b24(auStack_30,awStack_38);
      Sexy::Color::Color((Color *)aIStack_18,1);
      pPVar7 = (PrimeText_PotentialText *)
               Sexy::BuildPotentialText_Paragraph
                         ((float)(iVar1 + iVar2 / 2),fVar11,(float)(local_20 - iVar3 / 2),
                          (float)local_1c,uVar4,auStack_30,1,1,aIStack_18);
      this_01 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(this_01,pPVar7);
      *(PrimeTextWidget **)(this + 0x168) = this_01;
      FUN_05476c50(auStack_30);
    }
    else {
      pcVar9 = *(code **)(*plVar10 + 0x170);
      Sexy::Color::Color((Color *)aIStack_18,1);
      (*pcVar9)(plVar10,0,aIStack_18);
      Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x168),awStack_38);
    }
    (**(code **)(**(long **)(this + 0x168) + 0x128))(*(long **)(this + 0x168),param_1);
    FUN_05476c50(awStack_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TimerBank::Draw(Sexy::Graphics*) */

void __thiscall TimerBank::Draw(TimerBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

