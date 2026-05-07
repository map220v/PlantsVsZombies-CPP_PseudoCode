// Class: PeaRainProgressMeter


/* PeaRainProgressMeter::onBarSetPercentage(float) */

void __thiscall PeaRainProgressMeter::onBarSetPercentage(PeaRainProgressMeter *this,float param_1)

{
  *(float *)(this + 0x164) = param_1;
  return;
}


/* PeaRainProgressMeter::~PeaRainProgressMeter() */

void __thiscall PeaRainProgressMeter::~PeaRainProgressMeter(PeaRainProgressMeter *this)

{
  *(undefined ***)this = &PTR_GetClass_066204f0;
  *(undefined ***)(this + 0x10) = &PTR__PeaRainProgressMeter_06620690;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PeaRainProgressMeter::~PeaRainProgressMeter() */

void __thiscall PeaRainProgressMeter::~PeaRainProgressMeter(PeaRainProgressMeter *this)

{
  ~PeaRainProgressMeter(this + -0x10);
  return;
}


/* PeaRainProgressMeter::~PeaRainProgressMeter() */

void __thiscall PeaRainProgressMeter::~PeaRainProgressMeter(PeaRainProgressMeter *this)

{
  ~PeaRainProgressMeter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PeaRainProgressMeter::~PeaRainProgressMeter() */

void __thiscall PeaRainProgressMeter::~PeaRainProgressMeter(PeaRainProgressMeter *this)

{
  ~PeaRainProgressMeter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeaRainProgressMeter::StaticClassInit() */

void PeaRainProgressMeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PeaRainProgressMeter");
    (*pcVar2)(plVar1,asStack_10,FUN_03413d54,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PeaRainProgressMeter::StaticGetClass() */

long * PeaRainProgressMeter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PeaRainProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeaRainProgressMeter::GetClass() const */

long * PeaRainProgressMeter::GetClass(void)

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
  (*pcVar3)(plVar1,"PeaRainProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeaRainProgressMeter::PeaRainProgressMeter() */

void __thiscall PeaRainProgressMeter::PeaRainProgressMeter(PeaRainProgressMeter *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066204f0;
  *(undefined ***)(this + 0x10) = &PTR__PeaRainProgressMeter_06620690;
  *(undefined4 *)(this + 0x164) = 0;
  return;
}


/* PeaRainProgressMeter::StaticNew() */

PeaRainProgressMeter * PeaRainProgressMeter::StaticNew(void)

{
  PeaRainProgressMeter *this;
  
  this = ::operator_new(0x168);
  PeaRainProgressMeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeaRainProgressMeter::AddToRenderQueue(RenderQueue*) */

void __thiscall
PeaRainProgressMeter::AddToRenderQueue(PeaRainProgressMeter *this,RenderQueue *param_1)

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
  Delegate1<PeaRainProgressMeter,void(PeaRainProgressMeter::*)(Sexy::Graphics*)>
            (aDStack_38,aRStack_50);
  RenderQueue::Add(param_1,sVar1 + 700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PeaRainProgressMeter::registerForEvents() */

void __thiscall PeaRainProgressMeter::registerForEvents(PeaRainProgressMeter *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBarSetPercentage);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<PeaRainProgressMeter,void(PeaRainProgressMeter::*)(float)>>
            ((MessageRouter *)puVar1,Message::BarSetPercentage,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeaRainProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall PeaRainProgressMeter::Draw(PeaRainProgressMeter *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  int *piVar8;
  undefined8 uVar9;
  float *pfVar10;
  Image *pIVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  GraphicsAutoState aGStack_58 [8];
  float local_50 [2];
  Insets aIStack_48 [16];
  Insets aIStack_38 [8];
  int local_30;
  int local_2c;
  float local_28 [4];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f198);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f198);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
  local_28[0] = (float)FUN_03413710(*(undefined4 *)(this + 0x38));
  local_18[0] = (int)((float)iVar2 * 0.33333334) << 1;
  piVar8 = eastl::max_alt<int>((int *)local_28,local_18);
  iVar4 = *piVar8;
  Sexy::Insets::Insets(aIStack_48,0,0,(int)((float)iVar2 * 0.33333334),iVar3);
  fVar18 = (float)iVar4;
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f2a8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f2a8);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  iVar5 = FUN_03413a8c(3);
  iVar4 = iVar4 + iVar5;
  Sexy::Insets::Insets(aIStack_38,aIStack_48);
  local_30 = (int)(float)iVar2;
  local_2c = iVar4;
  fVar13 = (float)FUN_03413aa0(0);
  fVar14 = (float)FUN_03413aa0(0x40a00000);
  fVar15 = (float)FUN_03413aa0(0x40e00000);
  fVar16 = (float)FUN_03413aa0(0x3fc00000);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f198);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f5a0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  fVar17 = (fVar18 / (float)iVar2) * (float)iVar5;
  iVar5 = (int)fVar17;
  iVar2 = (int)(fVar18 - fVar17);
  Sexy::Insets::Insets((Insets *)local_18,iVar2,0,iVar5,iVar3);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f5a0);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar9);
  fVar17 = *(float *)(this + 0x164);
  cVar1 = Sexy::IsNearZero(fVar17,0.001);
  if (cVar1 == '\0') {
    iVar12 = (int)((fVar18 - fVar13) - fVar14);
    local_18[0] = 0;
    local_50[0] = (float)iVar12;
    local_28[0] = fVar17 * 0.01 * local_50[0];
    pfVar10 = eastl::min_alt<float>(local_50,local_28);
    pfVar10 = eastl::max_alt<float>((float *)local_18,pfVar10);
    fVar14 = *pfVar10;
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_28,param_1);
    Sexy::Graphics::ClipRect(param_1,(int)fVar13,(int)(fVar15 - fVar16),(int)fVar14,iVar4);
    Sexy::Insets::Insets((Insets *)local_18,(int)fVar13,(int)(fVar15 - fVar16),iVar12,iVar4);
    uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f380);
    Draw3SliceImage(param_1,(Insets *)local_18,uVar9);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_28);
  }
  Sexy::Insets::Insets((Insets *)local_28,iVar2,0,iVar5,iVar3);
  TodStringTranslate(L"[PLANT_WARS_CREDIT_BAR_TEXT]");
  TodReplaceNumberString((wstring *)local_18,L"{NUMBER}",(int)*(float *)(this + 0x164));
  FUN_05476c50((Insets *)local_18);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)local_18,1);
  WriteWordInRect(param_1,local_50,(GraphicsAutoState *)local_28,uVar9,(Insets *)local_18,5,1);
  iVar4 = FUN_03413a8c(0xfffffff6);
  iVar2 = FUN_03413a8c(0xfffffffb);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f488);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f198);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f488);
  iVar12 = SalesProgressBar::GetCurrentLevel(pSVar7);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f488);
  Sexy::Graphics::DrawImageF
            (param_1,pIVar11,(float)((iVar4 + iVar2) - iVar3 / 2),(float)(iVar5 / 2 - iVar12 / 2));
  FUN_05476c50(local_50);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PeaRainProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall PeaRainProgressMeter::Draw(PeaRainProgressMeter *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

