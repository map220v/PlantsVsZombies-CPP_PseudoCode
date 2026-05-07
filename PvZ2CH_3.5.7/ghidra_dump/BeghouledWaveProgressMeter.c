// Class: BeghouledWaveProgressMeter


/* BeghouledWaveProgressMeter::onSetWinCount(int) */

void __thiscall
BeghouledWaveProgressMeter::onSetWinCount(BeghouledWaveProgressMeter *this,int param_1)

{
  *(int *)(this + 0x170) = param_1;
  return;
}


/* BeghouledWaveProgressMeter::onGamePaused() */

void __thiscall BeghouledWaveProgressMeter::onGamePaused(BeghouledWaveProgressMeter *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,5);
  return;
}


/* BeghouledWaveProgressMeter::onGameUnpaused() */

void __thiscall BeghouledWaveProgressMeter::onGameUnpaused(BeghouledWaveProgressMeter *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* BeghouledWaveProgressMeter::~BeghouledWaveProgressMeter() */

void __thiscall
BeghouledWaveProgressMeter::~BeghouledWaveProgressMeter(BeghouledWaveProgressMeter *this)

{
  *(undefined ***)this = &PTR_GetClass_06737770;
  *(undefined ***)(this + 0x10) = &PTR__BeghouledWaveProgressMeter_06737910;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to BeghouledWaveProgressMeter::~BeghouledWaveProgressMeter() */

void __thiscall
BeghouledWaveProgressMeter::~BeghouledWaveProgressMeter(BeghouledWaveProgressMeter *this)

{
  ~BeghouledWaveProgressMeter(this + -0x10);
  return;
}


/* BeghouledWaveProgressMeter::~BeghouledWaveProgressMeter() */

void __thiscall
BeghouledWaveProgressMeter::~BeghouledWaveProgressMeter(BeghouledWaveProgressMeter *this)

{
  ~BeghouledWaveProgressMeter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BeghouledWaveProgressMeter::~BeghouledWaveProgressMeter() */

void __thiscall
BeghouledWaveProgressMeter::~BeghouledWaveProgressMeter(BeghouledWaveProgressMeter *this)

{
  ~BeghouledWaveProgressMeter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledWaveProgressMeter::StaticClassInit() */

void BeghouledWaveProgressMeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeghouledWaveProgressMeter");
    (*pcVar2)(plVar1,asStack_10,FUN_03bac700,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledWaveProgressMeter::StaticGetClass() */

long * BeghouledWaveProgressMeter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BeghouledWaveProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledWaveProgressMeter::GetClass() const */

long * BeghouledWaveProgressMeter::GetClass(void)

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
  (*pcVar3)(plVar1,"BeghouledWaveProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledWaveProgressMeter::BeghouledWaveProgressMeter() */

void __thiscall
BeghouledWaveProgressMeter::BeghouledWaveProgressMeter(BeghouledWaveProgressMeter *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  this[0x168] = (BeghouledWaveProgressMeter)0x0;
  *(undefined ***)this = &PTR_GetClass_06737770;
  *(undefined ***)(this + 0x10) = &PTR__BeghouledWaveProgressMeter_06737910;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 1000;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  return;
}


/* BeghouledWaveProgressMeter::StaticNew() */

BeghouledWaveProgressMeter * BeghouledWaveProgressMeter::StaticNew(void)

{
  BeghouledWaveProgressMeter *this;
  
  this = ::operator_new(0x180);
  BeghouledWaveProgressMeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledWaveProgressMeter::drawText(Sexy::Graphics*) */

void __thiscall
BeghouledWaveProgressMeter::drawText(BeghouledWaveProgressMeter *this,Graphics *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  PrimeText_PotentialText *pPVar3;
  PrimeTextWidget *this_00;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  wstring awStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[BEGHOULED_METER_TEXT]");
  TodReplaceNumberString(awStack_28,L"{COUNT}",*(int *)(this + 0x16c));
  TodReplaceNumberString(awStack_18,L"{TOTAL}",*(int *)(this + 0x170));
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_28);
  Sexy::Color::Color((Color *)awStack_28,0xff,0xff,0xff);
  fVar4 = (float)UIWidget::GetDeviceUIWidgetScaleValue();
  plVar1 = *(long **)(this + 0x178);
  if (plVar1 == (long *)0x0) {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    uVar5 = FUN_03bac5bc(fVar4 * 47.0);
    uVar6 = FUN_03bac5bc(fVar4 * -8.0);
    uVar7 = FUN_03bac5bc(fVar4 * 120.0);
    uVar8 = FUN_03bac5bc(fVar4 * 32.0);
    FUN_05477b24(auStack_30,awStack_38);
    Sexy::Insets::Insets((Insets *)awStack_18,(Insets *)awStack_28);
    pPVar3 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       (uVar5,uVar6,uVar7,uVar8,uVar2,auStack_30,1,1,awStack_18);
    this_00 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar3);
    *(PrimeTextWidget **)(this + 0x178) = this_00;
    FUN_05476c50(auStack_30);
    Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0x178),fVar4,fVar4);
  }
  else {
    (**(code **)(*plVar1 + 0x170))(plVar1,0,awStack_28);
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x178),awStack_38);
  }
  (**(code **)(**(long **)(this + 0x178) + 0x128))(*(long **)(this + 0x178),param_1);
  FUN_05476c50(awStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledWaveProgressMeter::onSetMatchCount(int) */

void __thiscall
BeghouledWaveProgressMeter::onSetMatchCount(BeghouledWaveProgressMeter *this,int param_1)

{
  int iVar1;
  
  *(int *)(this + 0x16c) = param_1;
  iVar1 = 0;
  if (*(int *)(this + 0x170) != 0) {
    iVar1 = (param_1 * 100) / *(int *)(this + 0x170);
  }
  WaveProgressMeter::setFillPercentage((WaveProgressMeter *)this,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledWaveProgressMeter::AddToRenderQueue(RenderQueue*) */

void __thiscall
BeghouledWaveProgressMeter::AddToRenderQueue(BeghouledWaveProgressMeter *this,RenderQueue *param_1)

{
  short sVar1;
  RtObject *this_00;
  UIWidgetSheet *pUVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantImitater::GetImitatedPlant();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  pUVar2 = Sexy::RtObject::Cast<UIWidgetSheet>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  sVar1 = *(short *)(pUVar2 + 0x5c);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x78);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<BeghouledWaveProgressMeter,void(BeghouledWaveProgressMeter::*)(Sexy::Graphics*)>
            (aDStack_38,aRStack_50);
  RenderQueue::Add(param_1,sVar1 + 700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledWaveProgressMeter::registerForEvents() */

void __thiscall BeghouledWaveProgressMeter::registerForEvents(BeghouledWaveProgressMeter *this)

{
  undefined *puVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetWinCount);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<BeghouledWaveProgressMeter,void(BeghouledWaveProgressMeter::*)(int)>>
            ((MessageRouter *)puVar1,Message::BeghouledProgressMeterSetWinCount,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetMatchCount);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<BeghouledWaveProgressMeter,void(BeghouledWaveProgressMeter::*)(int)>>
            ((MessageRouter *)puVar1,Message::BeghouledProgressMeterSetMatchCount,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePaused);
  Sexy::Delegate0::Delegate0<BeghouledWaveProgressMeter,void(BeghouledWaveProgressMeter::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GamePaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameUnpaused);
  Sexy::Delegate0::Delegate0<BeghouledWaveProgressMeter,void(BeghouledWaveProgressMeter::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameUnpaused,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledWaveProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall BeghouledWaveProgressMeter::Draw(BeghouledWaveProgressMeter *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *pLVar4;
  SalesProgressBar *pSVar5;
  float *pfVar6;
  Image *pIVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_44;
  GraphicsAutoState aGStack_40 [8];
  int local_38 [4];
  float local_28 [2];
  int local_20;
  int local_1c;
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd8b0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  fVar15 = (float)iVar1 * 0.33333334;
  pSVar5 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd8b0);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar5);
  iVar1 = FUN_03bac3c8(*(undefined4 *)(this + 0x38));
  iVar8 = (int)fVar15;
  local_28[0] = (float)iVar1;
  local_18[0] = fVar15 + fVar15;
  pfVar6 = eastl::max_alt<float>(local_28,local_18);
  fVar16 = (float)(int)*pfVar6;
  iVar9 = (int)(fVar16 - (fVar15 + fVar15));
  Sexy::Insets::Insets((Insets *)local_38,0,0,iVar8,iVar2);
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd888);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  fVar17 = (float)iVar1 * 0.33333334;
  pSVar5 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd888);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar5);
  iVar3 = FUN_03bac5a8();
  iVar1 = iVar1 + iVar3;
  Sexy::Insets::Insets((Insets *)local_28,(Insets *)local_38);
  local_20 = (int)fVar17;
  local_1c = iVar1;
  fVar10 = (float)FUN_03bac5bc(0x40e00000);
  fVar11 = (float)FUN_03bac5bc(0x3fc00000);
  fVar12 = (float)FUN_03bac5bc(0x40a00000);
  fVar13 = (float)PVZ_Dt();
  fVar14 = (float)FUN_03bac594();
  local_44 = (float)(byte)this[0x168];
  local_18[0] = 100.0;
  *(float *)(this + 0x164) = *(float *)(this + 0x164) + fVar13 * fVar14;
  pfVar6 = eastl::min_alt<float>((float *)(this + 0x164),&local_44);
  pfVar6 = eastl::min_alt<float>(local_18,pfVar6);
  fVar13 = *pfVar6;
  *(float *)(this + 0x164) = fVar13;
  local_44 = fVar13 * 0.01 * fVar16 - (fVar17 + fVar17);
  local_18[0] = 0.0;
  pfVar6 = eastl::max_alt<float>(&local_44,local_18);
  fVar13 = *pfVar6;
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_18,param_1);
  fVar16 = fVar16 - fVar12 * 2.0;
  iVar3 = (int)fVar16;
  Sexy::Graphics::ClipRect
            (param_1,(int)((fVar12 - fVar13) + fVar16),(int)(fVar10 - fVar11),iVar3,iVar1);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd888);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(int)fVar12,(int)(fVar10 - fVar11),iVar3,iVar1);
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_18);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd8b0);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,(TRect *)local_38);
  if (0 < iVar9) {
    local_38[0] = iVar8;
    Sexy::Insets::Insets((Insets *)local_18,iVar8,0,iVar9,iVar2);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd8b0);
    Sexy::Graphics::DrawImage(param_1,pIVar7,(TRect *)local_18,(TRect *)local_38);
  }
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd8b0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  local_38[0] = (int)((float)iVar1 - fVar15);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acd8b0);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(int)((float)iVar9 + fVar15),0,(TRect *)local_38);
  drawText(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BeghouledWaveProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall BeghouledWaveProgressMeter::Draw(BeghouledWaveProgressMeter *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

