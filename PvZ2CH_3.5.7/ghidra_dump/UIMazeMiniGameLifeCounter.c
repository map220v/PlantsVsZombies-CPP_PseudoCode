// Class: UIMazeMiniGameLifeCounter


/* UIMazeMiniGameLifeCounter::~UIMazeMiniGameLifeCounter() */

void __thiscall
UIMazeMiniGameLifeCounter::~UIMazeMiniGameLifeCounter(UIMazeMiniGameLifeCounter *this)

{
  *(undefined ***)this = &PTR_GetClass_067655a0;
  *(undefined ***)(this + 0x10) = &PTR__UIMazeMiniGameLifeCounter_06765740;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UIMazeMiniGameLifeCounter::~UIMazeMiniGameLifeCounter() */

void __thiscall
UIMazeMiniGameLifeCounter::~UIMazeMiniGameLifeCounter(UIMazeMiniGameLifeCounter *this)

{
  ~UIMazeMiniGameLifeCounter(this + -0x10);
  return;
}


/* UIMazeMiniGameLifeCounter::~UIMazeMiniGameLifeCounter() */

void __thiscall
UIMazeMiniGameLifeCounter::~UIMazeMiniGameLifeCounter(UIMazeMiniGameLifeCounter *this)

{
  ~UIMazeMiniGameLifeCounter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIMazeMiniGameLifeCounter::~UIMazeMiniGameLifeCounter() */

void __thiscall
UIMazeMiniGameLifeCounter::~UIMazeMiniGameLifeCounter(UIMazeMiniGameLifeCounter *this)

{
  ~UIMazeMiniGameLifeCounter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMazeMiniGameLifeCounter::StaticClassInit() */

void UIMazeMiniGameLifeCounter::StaticClassInit(void)

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
    std::string::string(asStack_10,"UIMazeMiniGameLifeCounter");
    (*pcVar2)(plVar1,asStack_10,FUN_03d1dcfc,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMazeMiniGameLifeCounter::StaticGetClass() */

long * UIMazeMiniGameLifeCounter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UIMazeMiniGameLifeCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIMazeMiniGameLifeCounter::GetClass() const */

long * UIMazeMiniGameLifeCounter::GetClass(void)

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
  (*pcVar3)(plVar1,"UIMazeMiniGameLifeCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIMazeMiniGameLifeCounter::UIMazeMiniGameLifeCounter() */

void __thiscall
UIMazeMiniGameLifeCounter::UIMazeMiniGameLifeCounter(UIMazeMiniGameLifeCounter *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_067655a0;
  *(undefined ***)(this + 0x10) = &PTR__UIMazeMiniGameLifeCounter_06765740;
  return;
}


/* UIMazeMiniGameLifeCounter::StaticNew() */

UIMazeMiniGameLifeCounter * UIMazeMiniGameLifeCounter::StaticNew(void)

{
  UIMazeMiniGameLifeCounter *this;
  
  this = ::operator_new(0x170);
  UIMazeMiniGameLifeCounter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMazeMiniGameLifeCounter::Draw(Sexy::Graphics*) */

void __thiscall UIMazeMiniGameLifeCounter::Draw(UIMazeMiniGameLifeCounter *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  SalesProgressBar *this_00;
  undefined8 uVar6;
  LotteryResultProgressBar *pLVar7;
  PrimeText_PotentialText *pPVar8;
  PrimeTextWidget *this_01;
  long *plVar9;
  code *pcVar10;
  float fVar11;
  undefined1 auStack_48 [8];
  GraphicsAutoState aGStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
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
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad6368);
  iVar1 = local_1c;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad6368);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,(iVar1 - iVar2) / 2);
  FUN_05478178(awStack_18,L"[MAZE_STATUE_LIFE_LABEL]",auStack_48);
  Sexy::StrFormat(L"%d",awStack_30,(ulong)*(uint *)(this + 0x164));
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_30);
  FUN_05476c50(awStack_30);
  FUN_05476c50(awStack_18);
  nop();
  plVar9 = *(long **)(this + 0x168);
  if (plVar9 == (long *)0x0) {
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    iVar1 = local_28;
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad6368);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    iVar3 = FUN_03d1d998(5);
    fVar11 = (float)local_24;
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad6368);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    FUN_05477b24(awStack_30,awStack_38);
    Sexy::Color::Color((Color *)awStack_18,1);
    pPVar8 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)(iVar1 + iVar2 / 2 + iVar3),fVar11,(float)(local_20 - iVar4 / 2),
                        (float)local_1c,uVar6,awStack_30,1,1,awStack_18);
    this_01 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_01,pPVar8);
    *(PrimeTextWidget **)(this + 0x168) = this_01;
    FUN_05476c50(awStack_30);
  }
  else {
    pcVar10 = *(code **)(*plVar9 + 0x170);
    Sexy::Color::Color((Color *)awStack_18,1);
    (*pcVar10)(plVar9,0,awStack_18);
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x168),awStack_38);
  }
  (**(code **)(**(long **)(this + 0x168) + 0x128))(*(long **)(this + 0x168),param_1);
  FUN_05476c50(awStack_38);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIMazeMiniGameLifeCounter::Draw(Sexy::Graphics*) */

void __thiscall UIMazeMiniGameLifeCounter::Draw(UIMazeMiniGameLifeCounter *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

