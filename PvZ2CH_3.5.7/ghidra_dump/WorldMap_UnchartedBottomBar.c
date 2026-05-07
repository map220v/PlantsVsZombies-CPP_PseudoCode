// Class: WorldMap_UnchartedBottomBar


/* WorldMap_UnchartedBottomBar::~WorldMap_UnchartedBottomBar() */

void __thiscall
WorldMap_UnchartedBottomBar::~WorldMap_UnchartedBottomBar(WorldMap_UnchartedBottomBar *this)

{
  *(undefined ***)this = &PTR_GetClass_0685e0f0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_UnchartedBottomBar_0685e290;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_UnchartedBottomBar::~WorldMap_UnchartedBottomBar() */

void __thiscall
WorldMap_UnchartedBottomBar::~WorldMap_UnchartedBottomBar(WorldMap_UnchartedBottomBar *this)

{
  ~WorldMap_UnchartedBottomBar(this + -0x10);
  return;
}


/* WorldMap_UnchartedBottomBar::~WorldMap_UnchartedBottomBar() */

void __thiscall
WorldMap_UnchartedBottomBar::~WorldMap_UnchartedBottomBar(WorldMap_UnchartedBottomBar *this)

{
  ~WorldMap_UnchartedBottomBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_UnchartedBottomBar::~WorldMap_UnchartedBottomBar() */

void __thiscall
WorldMap_UnchartedBottomBar::~WorldMap_UnchartedBottomBar(WorldMap_UnchartedBottomBar *this)

{
  ~WorldMap_UnchartedBottomBar(this + -0x10);
  return;
}


/* WorldMap_UnchartedBottomBar::WorldMap_UnchartedBottomBar() */

void __thiscall
WorldMap_UnchartedBottomBar::WorldMap_UnchartedBottomBar(WorldMap_UnchartedBottomBar *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined ***)this = &PTR_GetClass_0685e0f0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_UnchartedBottomBar_0685e290;
  *(undefined8 *)(this + 0x180) = 0;
  this[0x188] = (WorldMap_UnchartedBottomBar)0x0;
  this[0x189] = (WorldMap_UnchartedBottomBar)0x0;
  return;
}


/* WorldMap_UnchartedBottomBar::StaticNew() */

WorldMap_UnchartedBottomBar * WorldMap_UnchartedBottomBar::StaticNew(void)

{
  WorldMap_UnchartedBottomBar *this;
  
  this = ::operator_new(400);
  WorldMap_UnchartedBottomBar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UnchartedBottomBar::StaticClassInit() */

void WorldMap_UnchartedBottomBar::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_UnchartedBottomBar");
    (*pcVar2)(plVar1,asStack_10,FUN_04571140,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_UnchartedBottomBar::StaticGetClass() */

long * WorldMap_UnchartedBottomBar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_UnchartedBottomBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_UnchartedBottomBar::GetClass() const */

long * WorldMap_UnchartedBottomBar::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_UnchartedBottomBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UnchartedBottomBar::createUnchartedBirthdayText(std::wstring&, std::wstring&) */

void __thiscall
WorldMap_UnchartedBottomBar::createUnchartedBirthdayText
          (WorldMap_UnchartedBottomBar *this,wstring *param_1,wstring *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  PrimeText_PotentialText *pPVar9;
  PrimeTextWidget *pPVar10;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 0x18))();
    *(undefined8 *)(this + 0x178) = 0;
  }
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x18))();
    *(undefined8 *)(this + 0x180) = 0;
  }
  Sexy::Color::Color((Color *)aIStack_28,1);
  piVar7 = (int *)UIWidget::GetRect((UIWidget *)this);
  iVar1 = FUN_04570f70(*(undefined4 *)(this + 0x38));
  iVar6 = *piVar7;
  iVar2 = FUN_04570f7c(0x140);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar3 = FUN_04570f7c(0x53);
  iVar4 = FUN_04570f7c(500);
  iVar5 = FUN_04570f7c(0x22);
  FUN_05477b24(auStack_30,param_1);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  pPVar9 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph
                     ((float)((iVar1 + iVar6) - iVar2),(float)iVar3,(float)iVar4,(float)iVar5,uVar8,
                      auStack_30,0,2,aIStack_18);
  FUN_05476c50(auStack_30);
  pPVar10 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10,pPVar9);
  *(PrimeTextWidget **)(this + 0x178) = pPVar10;
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  iVar6 = FUN_04570f7c(0x74);
  iVar1 = FUN_04570f7c(3);
  iVar2 = FUN_04570f7c(0x16c);
  iVar3 = FUN_04570f7c(0x3c);
  FUN_05477b24(auStack_30,param_2);
  Sexy::Color::Color((Color *)aIStack_18,1);
  pPVar9 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph
                     ((float)iVar6,(float)iVar1,(float)iVar2,(float)iVar3,uVar8,auStack_30,0,0,
                      aIStack_18);
  FUN_05476c50(auStack_30);
  pPVar10 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10,pPVar9);
  *(PrimeTextWidget **)(this + 0x180) = pPVar10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UnchartedBottomBar::onLoadComplete() */

void __thiscall WorldMap_UnchartedBottomBar::onLoadComplete(WorldMap_UnchartedBottomBar *this)

{
  char cVar1;
  int iVar2;
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  PVZ2UnchartedModeUtils *this_00;
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  if (iVar2 != 3) {
    cVar1 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel();
    if ((cVar1 == '\0') &&
       (cVar1 = PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode(), cVar1 == '\0')) {
      this[0x188] = (WorldMap_UnchartedBottomBar)0x0;
      Sexy::RtName::RtName(aRStack_18,L"UISpacetimeStarBank");
      UIWidget::CreateWidget(aRStack_18,1);
      nop();
      *(undefined8 *)(this + 0x168) = extraout_x0_00;
      Sexy::RtName::~RtName(aRStack_18);
    }
    else {
      this[0x188] = (WorldMap_UnchartedBottomBar)0x1;
      iVar2 = PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayHeadshotPrizeId();
      this[0x189] = (WorldMap_UnchartedBottomBar)(iVar2 != 0);
      if (iVar2 != 0) {
        this_00 = (PVZ2UnchartedModeUtils *)FUN_05476574(awStack_20);
        PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayDescription(this_00);
        createUnchartedBirthdayText(this,awStack_20,(wstring *)aRStack_18);
        FUN_05476c50((wstring *)aRStack_18);
        FUN_05476c50(awStack_20);
      }
    }
  }
  Sexy::RtName::RtName(aRStack_18,L"UIUnchartedModeSwitchWidget");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x170) = extraout_x0;
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UnchartedBottomBar::drawUnchartedBirthdayExtras(Sexy::Graphics*) */

void __thiscall
WorldMap_UnchartedBottomBar::drawUnchartedBirthdayExtras
          (WorldMap_UnchartedBottomBar *this,Graphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x189] != (WorldMap_UnchartedBottomBar)0x0) {
    uVar1 = PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayHeadshotPrizeId();
    iVar2 = FUN_04570f7c(0xf);
    iVar3 = FUN_04570f7c(0);
    iVar4 = FUN_04570f7c(0x46);
    Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar4,iVar4);
    FUN_04571590(param_1,uVar1,aIStack_18);
    plVar5 = *(long **)(this + 0x178);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x128))(plVar5,param_1);
    }
    plVar5 = *(long **)(this + 0x180);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x128))(plVar5,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UnchartedBottomBar::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_UnchartedBottomBar::Draw(WorldMap_UnchartedBottomBar *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SalesProgressBar *pSVar3;
  LotteryResultProgressBar *this_00;
  Image *pIVar4;
  long *plVar5;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  pSVar3 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10f80);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar3);
  Sexy::Insets::Insets(aIStack_28,0,0,local_10,iVar1);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10f80);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  pSVar3 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10f80);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar3);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10f80);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(TRect *)aIStack_28,(TRect *)aIStack_18);
  plVar5 = *(long **)(this + 0x168);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
  }
  plVar5 = *(long **)(this + 0x170);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
  }
  drawUnchartedBirthdayExtras(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_UnchartedBottomBar::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_UnchartedBottomBar::Draw(WorldMap_UnchartedBottomBar *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

