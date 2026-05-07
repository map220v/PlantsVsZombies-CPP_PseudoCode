// Class: FuelBank


/* FuelBank::updateButtonStates(int, int, bool) */

void __thiscall FuelBank::updateButtonStates(FuelBank *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_0368bedc(this + 0x160);
  }
  else {
    cVar1 = FUN_0368bee4(this[0x160]);
    if (cVar1 == '\0') {
      FUN_0368bedc(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    LawnApp::ShowCoinStore(gLawnApp,8);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuelBank::StaticClassInit() */

void FuelBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"FuelBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0368c1f4,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FuelBank::StaticGetClass() */

long * FuelBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FuelBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FuelBank::GetClass() const */

long * FuelBank::GetClass(void)

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
  (*pcVar3)(plVar1,"FuelBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FuelBank::SetBankMode(FuelBankMode) */

void __thiscall FuelBank::SetBankMode(FuelBank *this,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x1b0) = param_2;
  if (param_2 == 0) {
    uVar1 = RiftUtils::GetCurrentFuel();
    *(undefined4 *)(this + 0x164) = uVar1;
    *(undefined4 *)(this + 0x168) = uVar1;
    return;
  }
  if (param_2 == 1) {
    uVar1 = PVZ1ModeUtils::GetCurrentFuel();
    *(undefined4 *)(this + 0x164) = uVar1;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        uVar1 = PVZ1ModeUtils::GetCurrentCoin(true);
        *(undefined4 *)(this + 0x164) = uVar1;
        goto LAB_0368c318;
      }
      if (param_2 == 4) {
        uVar1 = NewPVPUtils::GetCurrentCoin();
        *(undefined4 *)(this + 0x164) = uVar1;
        *(undefined4 *)(this + 0x168) = uVar1;
        return;
      }
    }
    uVar1 = PVZ1ModeUtils::GetCurrentCoin(false);
    *(undefined4 *)(this + 0x164) = uVar1;
  }
LAB_0368c318:
  *(undefined4 *)(this + 0x168) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuelBank::drawText(Sexy::Graphics*) */

void __thiscall FuelBank::drawText(FuelBank *this,Graphics *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  StringHelper *this_00;
  undefined8 uVar4;
  PrimeText_PotentialText *pPVar5;
  PrimeTextWidget *pPVar6;
  string *extraout_x1;
  string *psVar7;
  long extraout_x1_00;
  string *extraout_x1_01;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Sexy aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b0) == 0) {
    uVar1 = *(uint *)(this + 0x168);
    uVar2 = RiftUtils::GetPennyFuelCap();
    Sexy::StrFormat("%d/%d",aSStack_18,(ulong)uVar1,uVar2 & 0xffffffff);
    psVar7 = extraout_x1;
  }
  else {
    Sexy::StrFormat("%d",aSStack_18,(ulong)*(uint *)(this + 0x168));
    psVar7 = extraout_x1_01;
  }
  Sexy::UTF8StringToWString(aSStack_18,psVar7);
  std::string::~string((string *)aSStack_18);
  Sexy::Color::Color(aCStack_28,0xff,0xff,0xff);
  fVar8 = (float)UIWidget::GetDeviceUIWidgetScaleValue();
  plVar3 = *(long **)(this + 0x178);
  if (plVar3 == (long *)0x0) {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    uVar9 = FUN_0368c0b0(fVar8 * 54.0);
    uVar10 = FUN_0368c0b0(fVar8 * 3.0);
    uVar11 = FUN_0368c0b0(fVar8 * 60.0);
    uVar12 = FUN_0368c0b0(fVar8 * 36.0);
    FUN_05477b24(auStack_30,awStack_48);
    Sexy::Insets::Insets((Insets *)aSStack_18,(Insets *)aCStack_28);
    pPVar5 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       (uVar9,uVar10,uVar11,uVar12,uVar4,auStack_30,1,1,aSStack_18);
    pPVar6 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar6,pPVar5);
    *(PrimeTextWidget **)(this + 0x178) = pPVar6;
    FUN_05476c50(auStack_30);
    Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0x178),fVar8,fVar8);
  }
  else {
    (**(code **)(*plVar3 + 0x170))(plVar3,0,aCStack_28);
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x178),awStack_48);
  }
  (**(code **)(**(long **)(this + 0x178) + 0x128))(*(long **)(this + 0x178),param_1);
  this_00 = (StringHelper *)RiftUtils::GetTimeToNextPennyFuelUpdate();
  if (0 < (long)this_00) {
    TodStringTranslate(L"[JOUST_PLAY_ENTRY]");
    StringHelper::ConvertTimeToHMString(this_00,extraout_x1_00);
    TodReplaceString(awStack_40,L"{DURATION}",(wstring *)aSStack_18);
    FUN_05476c50(aSStack_18);
    if (*(PrimeTextWidget **)(this + 0x180) == (PrimeTextWidget *)0x0) {
      uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      uVar9 = FUN_0368c0b0(fVar8 * 4.0);
      uVar10 = FUN_0368c0b0(fVar8 * 80.0);
      uVar11 = FUN_0368c0b0(fVar8 * 130.0);
      uVar12 = FUN_0368c0b0(fVar8 * 24.0);
      FUN_05477b24(auStack_30,awStack_38);
      Sexy::Insets::Insets((Insets *)aSStack_18,(Insets *)aCStack_28);
      pPVar5 = (PrimeText_PotentialText *)
               Sexy::BuildPotentialText_Paragraph
                         (uVar9,uVar10,uVar11,uVar12,uVar4,auStack_30,1,1,aSStack_18);
      pPVar6 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(pPVar6,pPVar5);
      *(PrimeTextWidget **)(this + 0x180) = pPVar6;
      FUN_05476c50(auStack_30);
      Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0x180),fVar8,fVar8);
    }
    else {
      Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x180),awStack_38);
    }
    (**(code **)(**(long **)(this + 0x180) + 0x128))(*(long **)(this + 0x180),param_1);
    FUN_05476c50(awStack_38);
    FUN_05476c50(awStack_40);
  }
  FUN_05476c50(awStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FuelBank::onGameplayEnded() */

void __thiscall FuelBank::onGameplayEnded(FuelBank *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* FuelBank::FuelBank() */

void __thiscall FuelBank::FuelBank(FuelBank *this)

{
  undefined4 uVar1;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0667cbd0;
  *(undefined ***)(this + 0x10) = &PTR__FuelBank_0667cd78;
  ForeverSequentialActionRunner::ForeverSequentialActionRunner
            ((ForeverSequentialActionRunner *)(this + 0x188));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  ProfileUtils::Profile();
  uVar1 = RiftUtils::GetCurrentFuel();
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x164) = uVar1;
  *(undefined4 *)(this + 0x168) = uVar1;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  RunnableAction::Begin((RunnableAction *)(this + 0x188));
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* FuelBank::StaticNew() */

FuelBank * FuelBank::StaticNew(void)

{
  FuelBank *this;
  
  this = ::operator_new(0x1c8);
  FuelBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuelBank::SetButtonImage(std::string) */

void __thiscall FuelBank::SetButtonImage(FuelBank *this,string *param_2)

{
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetImageByNameWithUIFallback(param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::operator+(param_2,"_DOWN");
  GetImageByNameWithUIFallback(asStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuelBank::calcSpinTime() */

void __thiscall FuelBank::calcSpinTime(FuelBank *this)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = *(int *)(this + 0x168) - *(int *)(this + 0x164) >> 0x1f;
  local_c = (float)(int)((*(int *)(this + 0x168) - *(int *)(this + 0x164) ^ uVar1) - uVar1) * 0.02;
  pfVar3 = eastl::min_alt<float>((float *)&DAT_057518c0,&local_c);
  fVar5 = *pfVar3;
  fVar4 = (float)PVZ_T();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x170) = 1;
  *(float *)(this + 0x16c) = fVar5 + fVar4;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FuelBank::startDisplayState(FuelBank::FuelBankDisplayState) */

void __thiscall FuelBank::startDisplayState(FuelBank *this,int param_2)

{
  *(int *)(this + 0x170) = param_2;
  if (param_2 != 1) {
    return;
  }
  calcSpinTime(this);
  return;
}


/* FuelBank::updateFuelAmount(int) */

void __thiscall FuelBank::updateFuelAmount(FuelBank *this,int param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(int *)(this + 0x164) = *(int *)(this + 0x164) + param_1;
  startDisplayState(this,1);
  return;
}


/* FuelBank::onFuelCurrencyBanked(int) */

void __thiscall FuelBank::onFuelCurrencyBanked(FuelBank *this,int param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(int *)(this + 0x164) = *(int *)(this + 0x164) + param_1;
  startDisplayState(this,1);
  return;
}


/* FuelBank::onFuelCurrencyChanged(int, bool, int) */

void __thiscall FuelBank::onFuelCurrencyChanged(FuelBank *this,int param_1,bool param_2,int param_3)

{
  if ((*(int *)(this + 0x1b0) == param_3) && (!param_2)) {
    updateFuelAmount(this,param_1);
    return;
  }
  return;
}


/* FuelBank::updateState_Ready() */

void __thiscall FuelBank::updateState_Ready(FuelBank *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  DataPersistorFactory::GetOfflinePersistor((DataPersistorFactory *)(this + 0x188));
  nop();
  fVar3 = (float)PVZ_T();
  if (*(int *)(this + 0x170) == 1) {
    iVar1 = *(int *)(this + 0x164);
    if (fVar3 < *(float *)(this + 0x16c)) {
      fVar3 = *(float *)(this + 0x16c) - fVar3;
      fVar4 = (float)PVZ_Dt();
      if (fVar4 < fVar3) {
        iVar2 = *(int *)(this + 0x168);
        fVar4 = (float)PVZ_Dt();
        *(int *)(this + 0x168) =
             *(int *)(this + 0x168) + (int)(fVar4 * ((float)(iVar1 - iVar2) / fVar3));
        return;
      }
    }
    *(int *)(this + 0x168) = iVar1;
    *(undefined4 *)(this + 0x170) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuelBank::registerForEvents() */

void __thiscall FuelBank::registerForEvents(FuelBank *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFuelCurrencyChanged);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,bool,int,Sexy::CBMemberTranslatorX<FuelBank,void(FuelBank::*)(int,bool,int)>>
            ((MessageRouter *)puVar1,Message::PennyFuelCurrencyChanged,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<FuelBank,void(FuelBank::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FuelBank::~FuelBank() */

void __thiscall FuelBank::~FuelBank(FuelBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0667cbd0;
  *(undefined ***)(this + 0x10) = &PTR__FuelBank_0667cd78;
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 0x18))();
    *(undefined8 *)(this + 0x178) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  ForeverSequentialActionRunner::~ForeverSequentialActionRunner
            ((ForeverSequentialActionRunner *)(this + 0x188));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to FuelBank::~FuelBank() */

void __thiscall FuelBank::~FuelBank(FuelBank *this)

{
  ~FuelBank(this + -0x10);
  return;
}


/* FuelBank::~FuelBank() */

void __thiscall FuelBank::~FuelBank(FuelBank *this)

{
  ~FuelBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FuelBank::~FuelBank() */

void __thiscall FuelBank::~FuelBank(FuelBank *this)

{
  ~FuelBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuelBank::Draw(Sexy::Graphics*) */

void __thiscall FuelBank::Draw(FuelBank *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  float fVar5;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  fVar5 = (float)UIWidget::GetDeviceUIWidgetScaleValue();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b8));
  if (bVar1) {
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
    cVar2 = FUN_0368bee4(this[0x160]);
    if (cVar2 != '\0') {
      this_00 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    }
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_00,0,0,(int)((float)iVar3 * fVar5),(int)((float)iVar4 * fVar5))
    ;
  }
  drawText(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FuelBank::Draw(Sexy::Graphics*) */

void __thiscall FuelBank::Draw(FuelBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuelBank::GetCenterPointOnScreen() */

void __thiscall FuelBank::GetCenterPointOnScreen(FuelBank *this)

{
  long lVar1;
  int iVar2;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetCenterPointOnScreen();
  iVar2 = FUN_0368c09c(0);
  Sexy::Point::Point(in_x8,local_10 + iVar2,iVar2 + local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

