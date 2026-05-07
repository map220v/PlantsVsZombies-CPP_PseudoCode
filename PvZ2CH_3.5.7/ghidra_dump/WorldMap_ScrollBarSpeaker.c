// Class: WorldMap_ScrollBarSpeaker


/* WorldMap_ScrollBarSpeaker::~WorldMap_ScrollBarSpeaker() */

void __thiscall
WorldMap_ScrollBarSpeaker::~WorldMap_ScrollBarSpeaker(WorldMap_ScrollBarSpeaker *this)

{
  *(undefined ***)this = &PTR_GetClass_0685f1e0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ScrollBarSpeaker_0685f380;
  FUN_05476c50(this + 0x178);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_ScrollBarSpeaker::~WorldMap_ScrollBarSpeaker() */

void __thiscall
WorldMap_ScrollBarSpeaker::~WorldMap_ScrollBarSpeaker(WorldMap_ScrollBarSpeaker *this)

{
  ~WorldMap_ScrollBarSpeaker(this + -0x10);
  return;
}


/* WorldMap_ScrollBarSpeaker::~WorldMap_ScrollBarSpeaker() */

void __thiscall
WorldMap_ScrollBarSpeaker::~WorldMap_ScrollBarSpeaker(WorldMap_ScrollBarSpeaker *this)

{
  ~WorldMap_ScrollBarSpeaker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ScrollBarSpeaker::~WorldMap_ScrollBarSpeaker() */

void __thiscall
WorldMap_ScrollBarSpeaker::~WorldMap_ScrollBarSpeaker(WorldMap_ScrollBarSpeaker *this)

{
  ~WorldMap_ScrollBarSpeaker(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBarSpeaker::StaticClassInit() */

void WorldMap_ScrollBarSpeaker::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_ScrollBarSpeaker");
    (*pcVar2)(plVar1,asStack_10,FUN_04575fac,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ScrollBarSpeaker::StaticGetClass() */

long * WorldMap_ScrollBarSpeaker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ScrollBarSpeaker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ScrollBarSpeaker::GetClass() const */

long * WorldMap_ScrollBarSpeaker::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ScrollBarSpeaker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBarSpeaker::Reset() */

void __thiscall WorldMap_ScrollBarSpeaker::Reset(WorldMap_ScrollBarSpeaker *this)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x16c) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x170) = uVar1;
  FUN_054772c4(this + 0x178,&DAT_056f11a8);
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x180) = local_18;
  *(undefined8 *)(this + 0x188) = uStack_10;
  this[400] = (WorldMap_ScrollBarSpeaker)0x0;
  *(undefined4 *)(this + 0x194) = 0;
  UIWidget::SetVisible((UIWidget *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ScrollBarSpeaker::WorldMap_ScrollBarSpeaker() */

void __thiscall
WorldMap_ScrollBarSpeaker::WorldMap_ScrollBarSpeaker(WorldMap_ScrollBarSpeaker *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685f1e0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ScrollBarSpeaker_0685f380;
  FUN_05476574(this + 0x178);
  Sexy::Color::Color((Color *)(this + 0x180));
  Reset(this);
  return;
}


/* WorldMap_ScrollBarSpeaker::StaticNew() */

WorldMap_ScrollBarSpeaker * WorldMap_ScrollBarSpeaker::StaticNew(void)

{
  WorldMap_ScrollBarSpeaker *this;
  
  this = ::operator_new(0x198);
  WorldMap_ScrollBarSpeaker(this);
  return this;
}


/* WorldMap_ScrollBarSpeaker::restartScrollingText() */

void __thiscall WorldMap_ScrollBarSpeaker::restartScrollingText(WorldMap_ScrollBarSpeaker *this)

{
  int iVar1;
  LotteryResultProgressBar *this_00;
  
  if (0 < *(int *)(this + 0x164)) {
    *(int *)(this + 0x164) = *(int *)(this + 0x164) + -1;
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b119b0);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    *(float *)(this + 0x168) = (float)iVar1;
    return;
  }
  Reset(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBarSpeaker::ScrollText(std::wstring const&, Sexy::Color const&, int, float, float)
    */

void __thiscall
WorldMap_ScrollBarSpeaker::ScrollText
          (WorldMap_ScrollBarSpeaker *this,wstring *param_1,Color *param_2,int param_3,float param_4
          ,float param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  PrimeTypeface *pPVar4;
  float fVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::SetVisible((UIWidget *)this,false);
  thunk_FUN_05477b9c(this + 0x178,param_1);
  *(int *)(this + 0x164) = param_3;
  *(float *)(this + 0x16c) = param_4;
  fVar5 = (float)PVZ_T();
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(float *)(this + 0x170) = fVar5 + param_5;
  *(undefined8 *)(this + 0x180) = uVar1;
  *(undefined8 *)(this + 0x188) = uVar2;
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  FUN_05477b24(auStack_10,this + 0x178);
  uVar3 = Sexy::PrimeTypeface::SizeString_Line(pPVar4,auStack_10);
  *(undefined4 *)(this + 0x194) = uVar3;
  FUN_05476c50(auStack_10);
  this[400] = (WorldMap_ScrollBarSpeaker)0x1;
  restartScrollingText(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ScrollBarSpeaker::doesCurScrollEnd() const */

bool __thiscall WorldMap_ScrollBarSpeaker::doesCurScrollEnd(WorldMap_ScrollBarSpeaker *this)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x168);
  iVar1 = *(int *)(this + 0x194);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11968);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  return (float)iVar1 + fVar3 < (float)iVar2;
}


/* WorldMap_ScrollBarSpeaker::onUpdate() */

void __thiscall WorldMap_ScrollBarSpeaker::onUpdate(WorldMap_ScrollBarSpeaker *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  if ((this[400] != (WorldMap_ScrollBarSpeaker)0x0) &&
     (cVar1 = UIWidget::IsVisible((UIWidget *)this), cVar1 != '\0')) {
    fVar2 = (float)PVZ_Dt();
    fVar2 = (float)FUN_04575d50(fVar2 * *(float *)(this + 0x16c));
    *(float *)(this + 0x168) = *(float *)(this + 0x168) - fVar2;
    cVar1 = doesCurScrollEnd(this);
    if (cVar1 != '\0') {
      restartScrollingText(this);
    }
  }
  fVar4 = *(float *)(this + 0x170);
  fVar2 = (float)PVZ_T();
  if (fVar4 < fVar2) {
    UIWidget::SetVisible((UIWidget *)this,true);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x170) = uVar3;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBarSpeaker::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_ScrollBarSpeaker::Draw(WorldMap_ScrollBarSpeaker *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  if (this[400] != (WorldMap_ScrollBarSpeaker)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b119b0);
    iVar1 = FUN_04575d3c();
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,iVar1);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11968);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11968);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(int)((float)-iVar1 * 0.5),0);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11968);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b119b0);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11968);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b119b0);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Graphics::SetClipRect
              (param_1,(int)((float)iVar1 * 0.5),0,(int)((float)iVar2 - (float)iVar3 * 0.5),iVar4);
    fVar10 = *(float *)(this + 0x168);
    fVar9 = (float)FUN_04575d50(0x41200000);
    iVar1 = *(int *)(this + 0x194);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b119b0);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_28,(int)fVar10,(int)fVar9,iVar1,iVar2);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x180));
    WriteWordInRect(param_1,this + 0x178,aIStack_28,uVar8,aIStack_18,3,0);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_ScrollBarSpeaker::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_ScrollBarSpeaker::Draw(WorldMap_ScrollBarSpeaker *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

