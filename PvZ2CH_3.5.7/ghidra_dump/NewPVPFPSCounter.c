// Class: NewPVPFPSCounter


/* NewPVPFPSCounter::~NewPVPFPSCounter() */

void __thiscall NewPVPFPSCounter::~NewPVPFPSCounter(NewPVPFPSCounter *this)

{
  *(undefined ***)this = &PTR_GetClass_06646b20;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPFPSCounter_06646cc0;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to NewPVPFPSCounter::~NewPVPFPSCounter() */

void __thiscall NewPVPFPSCounter::~NewPVPFPSCounter(NewPVPFPSCounter *this)

{
  ~NewPVPFPSCounter(this + -0x10);
  return;
}


/* NewPVPFPSCounter::~NewPVPFPSCounter() */

void __thiscall NewPVPFPSCounter::~NewPVPFPSCounter(NewPVPFPSCounter *this)

{
  ~NewPVPFPSCounter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPFPSCounter::~NewPVPFPSCounter() */

void __thiscall NewPVPFPSCounter::~NewPVPFPSCounter(NewPVPFPSCounter *this)

{
  ~NewPVPFPSCounter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPFPSCounter::StaticClassInit() */

void NewPVPFPSCounter::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPFPSCounter");
    (*pcVar2)(plVar1,asStack_10,FUN_034b7fd0,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPFPSCounter::StaticGetClass() */

long * NewPVPFPSCounter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPFPSCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPFPSCounter::GetClass() const */

long * NewPVPFPSCounter::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPFPSCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPFPSCounter::NewPVPFPSCounter() */

void __thiscall NewPVPFPSCounter::NewPVPFPSCounter(NewPVPFPSCounter *this)

{
  undefined4 uVar1;
  
  UIWidget::UIWidget((UIWidget *)this);
  this[0x170] = (NewPVPFPSCounter)0x0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_06646b20;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPFPSCounter_06646cc0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x174) = uVar1;
  return;
}


/* NewPVPFPSCounter::StaticNew() */

NewPVPFPSCounter * NewPVPFPSCounter::StaticNew(void)

{
  NewPVPFPSCounter *this;
  
  this = ::operator_new(0x178);
  NewPVPFPSCounter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPFPSCounter::onGameplayRealStarted() */

void __thiscall NewPVPFPSCounter::onGameplayRealStarted(NewPVPFPSCounter *this)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  bVar1 = std::operator==(asStack_18,"Full");
  if (bVar1) {
    pfVar3 = (float *)UIWidget::GetPositionOffset((UIWidget *)this);
    iVar2 = FUN_034b7438(0x6e);
    fVar5 = *pfVar3;
    lVar4 = UIWidget::GetPositionOffset((UIWidget *)this);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar5 - (float)iVar2,*(float *)(lVar4 + 4));
    UIWidget::SetPositionOffset(local_10,local_c,this);
  }
  UIWidget::SetVisible((UIWidget *)this,true);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPFPSCounter::onNotifyFPSReachLimit() */

void __thiscall NewPVPFPSCounter::onNotifyFPSReachLimit(NewPVPFPSCounter *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (((cVar1 != '\0') && (fVar2 = (float)PVZ_EOT(), *(float *)(this + 0x174) == fVar2)) &&
     (this[0x170] == (NewPVPFPSCounter)0x0)) {
    fVar2 = (float)PVZ_T();
    this[0x170] = (NewPVPFPSCounter)0x1;
    *(float *)(this + 0x174) = fVar2 + 5.0;
  }
  return;
}


/* NewPVPFPSCounter::onUpdate() */

void __thiscall NewPVPFPSCounter::onUpdate(NewPVPFPSCounter *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (((cVar1 != '\0') && (this[0x170] != (NewPVPFPSCounter)0x0)) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x174) < fVar2)) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x174) = uVar3;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPFPSCounter::registerForEvents() */

void __thiscall NewPVPFPSCounter::registerForEvents(NewPVPFPSCounter *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealStarted);
  Sexy::Delegate0::Delegate0<NewPVPFPSCounter,void(NewPVPFPSCounter::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyGameplayStarted,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyFPSReachLimit);
  Sexy::Delegate0::Delegate0<NewPVPFPSCounter,void(NewPVPFPSCounter::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyFPSReachLimit,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPFPSCounter::Draw(Sexy::Graphics*) */

void __thiscall NewPVPFPSCounter::Draw(NewPVPFPSCounter *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  NewPVPMgr *this_00;
  undefined8 uVar6;
  PrimeText_PotentialText *pPVar7;
  PrimeTextWidget *this_02;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  GraphicsAutoState aGStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  wstring awStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_28 = 0;
  local_24 = 0;
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 != '\0') {
    lVar5 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    fVar10 = (float)FUN_034ad8f8(*(undefined4 *)(lVar5 + 0x48c));
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_FPS]");
    TodReplaceNumberString(awStack_18,L"{NUM}",(int)fVar10);
    FUN_05476c50(awStack_18);
    this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar2 = NewPVPMgr::GetFPSLimit(this_00,false);
    fVar11 = (float)iVar2;
    Sexy::Insets::Insets((Insets *)awStack_18,(Insets *)&local_28);
    if (fVar10 < fVar11) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3880;
    }
    else {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa41b0;
    }
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Draw9SliceImage(param_1,awStack_18,uVar6);
    fVar12 = (float)PVZ_EOT();
    if (*(float *)(this + 0x174) != fVar12) {
      iVar3 = FUN_034b7438(400);
      iVar2 = local_1c;
      iVar4 = FUN_034b7438(0x14);
      Sexy::Insets::Insets
                ((Insets *)awStack_18,local_28 - iVar3,local_24 - iVar4 / 2,iVar3,iVar2 + iVar4);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3c00);
      DrawAdaptiveImage(param_1,awStack_18,uVar6);
    }
    plVar8 = *(long **)(this + 0x168);
    if (plVar8 == (long *)0x0) {
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
      fVar12 = (float)local_28;
      fVar13 = (float)local_24;
      FUN_05477b24(auStack_30,awStack_38);
      Sexy::Color::Color((Color *)awStack_18,5);
      pPVar7 = (PrimeText_PotentialText *)
               Sexy::BuildPotentialText_Paragraph
                         (fVar12,fVar13,(float)local_20,(float)local_1c,uVar6,auStack_30,1,1,
                          awStack_18);
      this_02 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(this_02,pPVar7);
      *(PrimeTextWidget **)(this + 0x168) = this_02;
      FUN_05476c50(auStack_30);
      if (fVar11 <= fVar10) {
        plVar8 = *(long **)(this + 0x168);
        uVar6 = 5;
      }
      else {
        plVar8 = *(long **)(this + 0x168);
        uVar6 = 2;
      }
      pcVar9 = *(code **)(*plVar8 + 0x170);
      Sexy::Color::Color((Color *)awStack_18,uVar6);
      (*pcVar9)(plVar8,0,awStack_18);
    }
    else {
      if (fVar10 < fVar11) {
        pcVar9 = *(code **)(*plVar8 + 0x170);
        Sexy::Color::Color((Color *)awStack_18,2);
        (*pcVar9)(plVar8,0,awStack_18);
      }
      else {
        pcVar9 = *(code **)(*plVar8 + 0x170);
        Sexy::Color::Color((Color *)awStack_18,5);
        (*pcVar9)(plVar8,0,awStack_18);
      }
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


/* non-virtual thunk to NewPVPFPSCounter::Draw(Sexy::Graphics*) */

void __thiscall NewPVPFPSCounter::Draw(NewPVPFPSCounter *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

