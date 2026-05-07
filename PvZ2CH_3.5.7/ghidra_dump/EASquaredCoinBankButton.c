// Class: EASquaredCoinBankButton


/* EASquaredCoinBankButton::OnMouseMove(int, int) */

void EASquaredCoinBankButton::OnMouseMove(int param_1,int param_2)

{
  undefined8 in_x2;
  
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x1a0))((long *)(ulong)(uint)param_1,param_2,in_x2,1)
  ;
  return;
}


/* EASquaredCoinBankButton::OnMouseUp(int, int) */

void EASquaredCoinBankButton::OnMouseUp(int param_1,int param_2)

{
  undefined8 in_x2;
  
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x1a0))((long *)(ulong)(uint)param_1,param_2,in_x2,0)
  ;
  return;
}


/* EASquaredCoinBankButton::queueUpdateVisibility() */

void __thiscall EASquaredCoinBankButton::queueUpdateVisibility(EASquaredCoinBankButton *this)

{
  this[0x1b6] = (EASquaredCoinBankButton)0x1;
  return;
}


/* EASquaredCoinBankButton::~EASquaredCoinBankButton() */

void __thiscall EASquaredCoinBankButton::~EASquaredCoinBankButton(EASquaredCoinBankButton *this)

{
  *(undefined ***)(this + 0x10) = &PTR__EASquaredCoinBankButton_0697e708;
  *(undefined ***)this = &PTR_GetClass_0697e550;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
    *(undefined8 *)(this + 0x1a0) = 0;
  }
  if (*(long **)(this + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a8) + 0x18))();
    *(undefined8 *)(this + 0x1a8) = 0;
  }
  SlidingWidget::~SlidingWidget((SlidingWidget *)this);
  return;
}


/* non-virtual thunk to EASquaredCoinBankButton::~EASquaredCoinBankButton() */

void __thiscall EASquaredCoinBankButton::~EASquaredCoinBankButton(EASquaredCoinBankButton *this)

{
  ~EASquaredCoinBankButton(this + -0x10);
  return;
}


/* EASquaredCoinBankButton::~EASquaredCoinBankButton() */

void __thiscall EASquaredCoinBankButton::~EASquaredCoinBankButton(EASquaredCoinBankButton *this)

{
  ~EASquaredCoinBankButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EASquaredCoinBankButton::~EASquaredCoinBankButton() */

void __thiscall EASquaredCoinBankButton::~EASquaredCoinBankButton(EASquaredCoinBankButton *this)

{
  ~EASquaredCoinBankButton(this + -0x10);
  return;
}


/* EASquaredCoinBankButton::onEASquaredAdFinished(EASquaredAdFinishedReason::EASquaredAdFinishedReason)
    */

void __thiscall
EASquaredCoinBankButton::onEASquaredAdFinished(EASquaredCoinBankButton *this,undefined4 param_2)

{
  EASquaredRewardHelper::ShowCoinRewardsForAdCompletion(param_2,*(undefined4 *)(this + 0x1b0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::StaticClassInit() */

void EASquaredCoinBankButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"EASquaredCoinBankButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04bf5e84,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredCoinBankButton::StaticGetClass() */

long * EASquaredCoinBankButton::StaticGetClass(void)

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
  uVar2 = SlidingWidget::StaticGetClass();
  (*pcVar3)(plVar1,"EASquaredCoinBankButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EASquaredCoinBankButton::GetClass() const */

long * EASquaredCoinBankButton::GetClass(void)

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
  uVar2 = SlidingWidget::StaticGetClass();
  (*pcVar3)(plVar1,"EASquaredCoinBankButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::createTextWidget() */

void __thiscall EASquaredCoinBankButton::createTextWidget(EASquaredCoinBankButton *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  PrimeText_PotentialText *pPVar4;
  PrimeTextWidget *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[EA_SQUARED_BUTTON_LABEL]");
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  Sexy::Color::Color(aCStack_28,0xff,0xff,0xff);
  fVar5 = (float)UIWidget::GetDeviceUIWidgetScaleValue();
  iVar1 = FUN_04bf5c48(*(undefined4 *)(this + 0x38));
  iVar2 = FUN_04bf5c4c(*(undefined4 *)(this + 0x3c));
  fVar6 = (float)(int)((float)iVar2 * fVar5);
  fVar7 = (float)(int)((float)iVar1 * fVar5) * 0.09;
  FUN_05477b24(auStack_30,auStack_38);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_28);
  pPVar4 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph
                     (fVar7,fVar6 * 0.28,((float)(int)((float)iVar1 * fVar5) - fVar7) - fVar7,
                      (fVar6 - fVar6 * 0.28) - fVar6 * 0.13,uVar3,auStack_30,1,1,aIStack_18);
  this_00 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar4);
  *(PrimeTextWidget **)(this + 0x1a0) = this_00;
  FUN_05476c50(auStack_30);
  Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0x1a0),fVar5,fVar5);
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredCoinBankButton::getAlphaColorFromSlide() */

Insets * __thiscall EASquaredCoinBankButton::getAlphaColorFromSlide(EASquaredCoinBankButton *this)

{
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,0xff,0xff,0xff,0xff);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::drawText(Sexy::Graphics*) */

void __thiscall EASquaredCoinBankButton::drawText(EASquaredCoinBankButton *this,Graphics *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_18 [16];
  long local_8;
  
  plVar1 = *(long **)(this + 0x1a0);
  local_8 = ___stack_chk_guard;
  if (plVar1 == (long *)0x0) {
    createTextWidget(this);
    plVar1 = *(long **)(this + 0x1a0);
  }
  pcVar2 = *(code **)(*plVar1 + 0x170);
  getAlphaColorFromSlide(this);
  (*pcVar2)(plVar1,0,auStack_18);
  (**(code **)(**(long **)(this + 0x1a0) + 0x128))(*(long **)(this + 0x1a0),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::setUpSlide() */

void __thiscall EASquaredCoinBankButton::setUpSlide(EASquaredCoinBankButton *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1b4] == (EASquaredCoinBankButton)0x0) {
    puVar2 = (undefined8 *)UIWidget::GetPositionOffset((UIWidget *)this);
    local_20 = *puVar2;
    iVar1 = FUN_04bf5c4c(*(undefined4 *)(this + 0x3c));
    local_20 = CONCAT44(local_20._4_4_ - (float)iVar1 * 0.8,(undefined4)local_20);
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    SlidingWidget::SetupSlideInfo
              ((SlidingWidget *)0x3e99999a,this,&local_20,asStack_18,asStack_10,3,2);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    this[0x1b4] = (EASquaredCoinBankButton)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredCoinBankButton::shouldBeVisible() */

void EASquaredCoinBankButton::shouldBeVisible(void)

{
  long *plVar1;
  
  plVar1 = (long *)EASquared::Instance();
  (**(code **)(*plVar1 + 0x58))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::EASquaredCoinBankButton() */

void __thiscall EASquaredCoinBankButton::EASquaredCoinBankButton(EASquaredCoinBankButton *this)

{
  undefined *puVar1;
  char cVar2;
  Toggles *this_00;
  undefined4 uVar3;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SlidingWidget::SlidingWidget((SlidingWidget *)this);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0697e550;
  *(undefined ***)(this + 0x10) = &PTR__EASquaredCoinBankButton_0697e708;
  this_00 = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_50,"EA2GrantsBoostedCoins");
  cVar2 = Toggles::IsEnabled(this_00,asStack_50);
  uVar3 = 500;
  if (cVar2 == '\0') {
    uVar3 = 0xfa;
  }
  *(undefined4 *)(this + 0x1b0) = uVar3;
  std::string::~string(asStack_50);
  nop();
  this[0x1b4] = (EASquaredCoinBankButton)0x0;
  this[0x1b5] = (EASquaredCoinBankButton)0x0;
  this[0x1b6] = (EASquaredCoinBankButton)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,queueUpdateVisibility);
  Sexy::Delegate0::Delegate0<EASquaredCoinBankButton,void(EASquaredCoinBankButton::*)()>
            (aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::EASquaredEnabledChanged,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,queueUpdateVisibility);
  Sexy::Delegate0::Delegate0<EASquaredCoinBankButton,void(EASquaredCoinBankButton::*)()>
            (aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::EASquaredAdsAvailableChanged,aDStack_38)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredCoinBankButton::StaticNew() */

EASquaredCoinBankButton * EASquaredCoinBankButton::StaticNew(void)

{
  EASquaredCoinBankButton *this;
  
  this = ::operator_new(0x1b8);
  EASquaredCoinBankButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::onButtonPush() */

void __thiscall EASquaredCoinBankButton::onButtonPush(EASquaredCoinBankButton *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)EASquared::Instance();
  pcVar2 = *(code **)((EASquaredMetricsHelper *)*puVar1 + 0x20);
  EASquaredMetricsHelper::GetButtonSource((EASquaredMetricsHelper *)*puVar1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEASquaredAdFinished);
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
  Delegate1<EASquaredCoinBankButton,void(EASquaredCoinBankButton::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
            (aDStack_38,aCStack_50);
  (*pcVar2)(puVar1,asStack_58,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::drawButton(Sexy::Graphics*) */

void __thiscall EASquaredCoinBankButton::drawButton(EASquaredCoinBankButton *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Toggles *this_00;
  PopAnim *pPVar4;
  RtClass *pRVar5;
  PopAnimRig *pPVar6;
  float fVar7;
  float fVar8;
  GraphicsAutoState aGStack_48 [16];
  SexyTransform2D aSStack_38 [8];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [28];
  long local_8;
  CachedResourcePtr *this_01;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1a8) == 0) {
    this_00 = (Toggles *)Toggles::GetInstance();
    std::string::string((string *)aGStack_48,"EA2GrantsBoostedCoins");
    cVar1 = Toggles::IsEnabled(this_00,(string *)aGStack_48);
    std::string::~string((string *)aGStack_48);
    nop();
    if (cVar1 == '\0') {
      this_01 = (CachedResourcePtr *)&DAT_06b8cb18;
    }
    else {
      this_01 = (CachedResourcePtr *)&DAT_06b8cb50;
    }
    pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_(this_01);
    pRVar5 = (RtClass *)PopAnimRig::StaticGetClass();
    pPVar6 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar4,pRVar5);
    *(PopAnimRig **)(this + 0x1a8) = pPVar6;
    Sexy::Color::Color((Color *)aGStack_48,1);
    PopAnimRig::SetPAMColor(pPVar6,(Color *)aGStack_48);
    pPVar6 = *(PopAnimRig **)(this + 0x1a8);
    std::string::string((string *)aGStack_48,"default");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aSStack_38);
    PopAnimRig::PlayAndContinue(pPVar6,(string *)aGStack_48,0,(DummyInit *)aSStack_38);
    std::string::~string((string *)aGStack_48);
    nop();
  }
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_38);
  iVar2 = FUN_04bf5d3c(0xffffffee);
  fVar7 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x1a8));
  iVar3 = FUN_04bf5d3c(0xfffffff7);
  fVar8 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x1a8));
  FUN_04bf5c20((float)iVar2 * fVar7,(float)iVar3 * fVar8,auStack_30,auStack_24);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0x1a8),param_1,aSStack_38);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::sendMetricsReport() */

void __thiscall EASquaredCoinBankButton::sendMetricsReport(EASquaredCoinBankButton *this)

{
  undefined *this_00;
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GameStateMgr::GetState(gGameStateMgr);
  this_00 = gMessageRouter;
  if (iVar1 == 6) {
    if (this[0x1b5] == (EASquaredCoinBankButton)0x0) {
      plVar3 = (long *)EASquared::Instance();
      uVar2 = (**(code **)(*plVar3 + 0x78))();
      plVar3 = (long *)EASquared::Instance();
      (**(code **)(*plVar3 + 0x70))(asStack_10);
      MessageRouter::
      Broadcast<std::string_const&,int,std::string_const&,char_const*,int,std::string>
                ((MessageRouter *)this_00,Message::EASquaredButtonTracking,"EASQMap",uVar2,
                 asStack_10);
      std::string::~string(asStack_10);
    }
    else {
      plVar3 = (long *)EASquared::Instance();
      iVar1 = (**(code **)(*plVar3 + 0x78))();
      MessageRouter::
      Broadcast<std::string_const&,int,std::string_const&,char_const*,int,char_const*>
                ((MessageRouter *)this_00,Message::EASquaredButtonTracking,"EASQMap",iVar1,
                 "ButtonShowing");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredCoinBankButton::CalculateInitialVisibility() */

void __thiscall EASquaredCoinBankButton::CalculateInitialVisibility(EASquaredCoinBankButton *this)

{
  EASquaredCoinBankButton EVar1;
  
  setUpSlide(this);
  EVar1 = (EASquaredCoinBankButton)shouldBeVisible();
  this[0x1b5] = EVar1;
  sendMetricsReport(this);
  return;
}


/* EASquaredCoinBankButton::updateVisibility() */

void __thiscall EASquaredCoinBankButton::updateVisibility(EASquaredCoinBankButton *this)

{
  EASquaredCoinBankButton EVar1;
  EASquaredCoinBankButton EVar2;
  
  EVar1 = this[0x1b5];
  EVar2 = (EASquaredCoinBankButton)shouldBeVisible();
  this[0x1b5] = EVar2;
  UIWidget::SetVisible((UIWidget *)this,(bool)EVar2);
  if (this[0x1b5] != EVar1) {
    sendMetricsReport(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::updateButtonStates(int, int, bool) */

void __thiscall
EASquaredCoinBankButton::updateButtonStates
          (EASquaredCoinBankButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_04bf5c50(this + 0x160);
  }
  else {
    cVar1 = FUN_04bf5c58(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Press");
    }
    FUN_04bf5c50(this + 0x160,param_3);
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
    onButtonPush(this);
  }
  pPVar3 = *(PopAnimRig **)(this + 0x1a8);
  if (pPVar3 == (PopAnimRig *)0x0) goto LAB_04bf6a54;
  cVar1 = FUN_04bf5c58(this[0x160]);
  if (cVar1 != '\0') {
    std::string::string(asStack_40,"down");
    cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (cVar1 == '\0') {
      pPVar3 = *(PopAnimRig **)(this + 0x1a8);
      std::string::string(asStack_40,"down");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      goto LAB_04bf6a54;
    }
    cVar1 = FUN_04bf5c58(this[0x160]);
    if (cVar1 != '\0') goto LAB_04bf6a54;
    pPVar3 = *(PopAnimRig **)(this + 0x1a8);
  }
  std::string::string(asStack_40,"default");
  cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (cVar1 == '\0') {
    pPVar3 = *(PopAnimRig **)(this + 0x1a8);
    std::string::string(asStack_40,"default");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
LAB_04bf6a54:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCoinBankButton::Draw(Sexy::Graphics*) */

void __thiscall EASquaredCoinBankButton::Draw(EASquaredCoinBankButton *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  getAlphaColorFromSlide(this);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  drawButton(this,param_1);
  drawText(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to EASquaredCoinBankButton::Draw(Sexy::Graphics*) */

void __thiscall EASquaredCoinBankButton::Draw(EASquaredCoinBankButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* EASquaredCoinBankButton::onUpdate() */

void __thiscall EASquaredCoinBankButton::onUpdate(EASquaredCoinBankButton *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  if (this[0x1b6] != (EASquaredCoinBankButton)0x0) {
    this[0x1b6] = (EASquaredCoinBankButton)0x0;
    updateVisibility(this);
  }
  this_00 = *(PopAnimRig **)(this + 0x1a8);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_RealT();
    fVar2 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  }
  SlidingWidget::onUpdate((SlidingWidget *)this);
  return;
}

