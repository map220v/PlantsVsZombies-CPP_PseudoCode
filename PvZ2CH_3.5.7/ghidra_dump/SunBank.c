// Class: SunBank


/* SunBank::onLevelStart() */

void SunBank::onLevelStart(void)

{
  return;
}


/* SunBank::onSunBankMax(bool) */

void __thiscall SunBank::onSunBankMax(SunBank *this,bool param_1)

{
  this[0x17a] = (SunBank)param_1;
  return;
}


/* SunBank::cancelTouch() */

void __thiscall SunBank::cancelTouch(SunBank *this)

{
  *(undefined8 *)(this + 0x170) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* SunBank::unregisterForEvents() */

void __thiscall SunBank::unregisterForEvents(SunBank *this)

{
  if (this[0x178] == (SunBank)0x0) {
    return;
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  return;
}


/* SunBank::onSunAdd(int) */

void __thiscall SunBank::onSunAdd(SunBank *this,int param_1)

{
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),param_1);
  return;
}


/* SunBank::onPostLoad() */

void __thiscall SunBank::onPostLoad(SunBank *this)

{
  undefined4 uVar1;
  
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    uVar1 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
    *(undefined4 *)(this + 0x164) = uVar1;
    *(undefined4 *)(this + 0x168) = uVar1;
    return;
  }
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(this + 0x164);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::StaticClassInit() */

void SunBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0449a654,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunBank::StaticGetClass() */

long * SunBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunBank::GetClass() const */

long * SunBank::GetClass(void)

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
  (*pcVar3)(plVar1,"SunBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunBank::SunBank() */

void __thiscall SunBank::SunBank(SunBank *this)

{
  SunBank SVar1;
  char cVar2;
  undefined4 uVar3;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined ***)(this + 0x10) = &PTR__SunBank_06851ae0;
  *(undefined ***)this = &PTR_GetClass_06851940;
  this[0x178] = (SunBank)0x0;
  SVar1 = (SunBank)LawnApp::HasPlayerUnlockedFeature(gLawnApp,4);
  this[0x17b] = (SunBank)0x0;
  this[0x179] = SVar1;
  *(undefined8 *)(this + 0x180) = 0;
  this[0x17a] = (SunBank)0x0;
  *(undefined4 *)(this + 0x164) = 0;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x188) = uVar3;
  *(undefined4 *)(this + 0x18c) = uVar3;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((((cVar2 != '\0') && (cVar2 = PVZ1ModeUtils::IsHardMode(), cVar2 != '\0')) ||
      (cVar2 = CustomLevelUtils::IsCustomLevel(), cVar2 != '\0')) ||
     (((cVar2 = RiftUtils::IsRiftTimedLevel(), cVar2 != '\0' ||
       (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 != '\0')) ||
      (cVar2 = PlantWarsUtils::IsPlayingPlantWarsLevel(), cVar2 != '\0')))) {
    this[0x179] = (SunBank)0x0;
  }
  return;
}


/* SunBank::StaticNew() */

SunBank * SunBank::StaticNew(void)

{
  SunBank *this;
  
  this = ::operator_new(0x1a0);
  SunBank(this);
  return this;
}


/* SunBank::onGameplayEnded() */

void __thiscall SunBank::onGameplayEnded(SunBank *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::~SunBank() */

void __thiscall SunBank::~SunBank(SunBank *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06851940;
  *(undefined ***)(this + 0x10) = &PTR__SunBank_06851ae0;
  if (*(long **)(this + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x198) + 0x18))();
    *(undefined8 *)(this + 0x198) = 0;
  }
  if (*(long *)(this + 0x180) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar2 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 0x180) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SunBank::~SunBank() */

void __thiscall SunBank::~SunBank(SunBank *this)

{
  ~SunBank(this + -0x10);
  return;
}


/* SunBank::~SunBank() */

void __thiscall SunBank::~SunBank(SunBank *this)

{
  ~SunBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SunBank::~SunBank() */

void __thiscall SunBank::~SunBank(SunBank *this)

{
  ~SunBank(this + -0x10);
  return;
}


/* SunBank::onSunIsInsufficient() */

void __thiscall SunBank::onSunIsInsufficient(SunBank *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x18c) = fVar1;
  *(float *)(this + 0x188) = fVar1 + 0.7;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::calcSpinTime() */

void __thiscall SunBank::calcSpinTime(SunBank *this)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = ABS((float)(*(int *)(this + 0x168) - *(int *)(this + 0x164))) *
            k_secondsSpinPerSunCurrency;
  pfVar2 = eastl::min_alt<float>((float *)&k_maxSpinTime,&local_c);
  fVar4 = *pfVar2;
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x194) = fVar4 + fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunBank::onSunSpent(int) */

void __thiscall SunBank::onSunSpent(SunBank *this,int param_1)

{
  *(int *)(this + 0x164) = param_1;
  calcSpinTime(this);
  return;
}


/* SunBank::onSunBanked(int) */

void __thiscall SunBank::onSunBanked(SunBank *this,int param_1)

{
  float fVar1;
  
  *(int *)(this + 0x164) = param_1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 400) = fVar1 + k_collectSunFlashTimeDuration;
  calcSpinTime(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::DrawText(Sexy::Graphics*) */

void __thiscall SunBank::DrawText(SunBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 uVar7;
  PrimeText_PotentialText *pPVar8;
  PrimeTextWidget *this_00;
  float fVar9;
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_18 = 0;
  local_8 = ___stack_chk_guard;
  puVar5 = (uint *)eastl::max_alt<int>((int *)(this + 0x168),(int *)&local_18);
  Sexy::StrFormat(L"%d",awStack_38,(ulong)*puVar5);
  Sexy::Color::Color((Color *)local_28,0xff,0xff,0xff);
  fVar9 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x188) < fVar9) &&
     (fVar9 = (float)PVZ_T(), *(float *)(this + 0x18c) <= fVar9)) {
    Sexy::Color::Color((Color *)&local_18,0xff,0,0);
    local_28[0] = CONCAT44(uStack_14,local_18);
  }
  plVar6 = *(long **)(this + 0x198);
  if (plVar6 == (long *)0x0) {
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    iVar1 = FUN_0449a484(10);
    iVar2 = FUN_0449a484(0xffffffff);
    iVar3 = FUN_0449a484(0x3c);
    iVar4 = FUN_0449a484(0x26);
    FUN_05477b24(auStack_30,awStack_38);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)local_28);
    pPVar8 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,uVar7,auStack_30,1,1,
                        (Color *)&local_18);
    this_00 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar8);
    *(PrimeTextWidget **)(this + 0x198) = this_00;
    FUN_05476c50(auStack_30);
  }
  else {
    (**(code **)(*plVar6 + 0x170))(plVar6,0,(Color *)local_28);
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x198),awStack_38);
  }
  (**(code **)(**(long **)(this + 0x198) + 0x128))(*(long **)(this + 0x198),param_1);
  FUN_05476c50(awStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::updateState_Ready() */

void __thiscall SunBank::updateState_Ready(SunBank *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (float)PVZ_T();
  fVar6 = (float)PVZ_EOT();
  if (fVar6 <= *(float *)(this + 0x188)) {
LAB_0449ac9c:
    fVar6 = *(float *)(this + 0x194);
  }
  else {
    if (*(float *)(this + 0x188) <= fVar5) {
      *(float *)(this + 0x188) = fVar6;
      goto LAB_0449ac9c;
    }
    if (fVar5 < *(float *)(this + 0x18c) + _FUN_0449ad50) goto LAB_0449ac9c;
    fVar6 = *(float *)(this + 0x194);
    *(float *)(this + 0x18c) = fVar5 + _FUN_0449ad50;
  }
  if (fVar5 < fVar6) {
    fVar7 = (float)PVZ_Dt();
    if (fVar7 < fVar6 - fVar5) {
      iVar1 = *(int *)(this + 0x168);
      iVar2 = *(int *)(this + 0x164);
      fVar7 = (float)PVZ_Dt();
      *(int *)(this + 0x168) =
           *(int *)(this + 0x168) + (int)(fVar7 * ((float)(iVar2 - iVar1) / (fVar6 - fVar5)));
      goto LAB_0449acb0;
    }
  }
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(this + 0x164);
LAB_0449acb0:
  if ((this[0x17b] != (SunBank)0x0) && (plVar3 = *(long **)(this + 0x180), plVar3 != (long *)0x0)) {
    pcVar4 = *(code **)(*plVar3 + 0x80);
    PVZ_RealT();
    (*pcVar4)(plVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::SetIsTutorial(bool) */

void __thiscall SunBank::SetIsTutorial(SunBank *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BouncingArrow *this_00;
  long *plVar6;
  long lVar7;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if ((this[0x17b] == (SunBank)0x0) && (*(long *)(this + 0x180) == 0)) {
      this_00 = GameObject::Create<BouncingArrow>();
      *(BouncingArrow **)(this + 0x180) = this_00;
      AnimationController::SetDuration((AnimationController *)this_00,10000.0);
      lVar7 = *(long *)(this + 0x180);
      *(undefined4 *)(lVar7 + 0x3c) = 0xb4;
      iVar2 = FUN_0449a2ac(*(undefined4 *)(this + 0x38));
      iVar3 = FUN_0449a484(10);
      iVar4 = FUN_0449a2b0(*(undefined4 *)(this + 0x3c));
      iVar5 = FUN_0449a484(0x1a);
      Sexy::Point::Point((Point *)&local_10,iVar2 + iVar3,iVar4 + iVar5);
      *(undefined8 *)(lVar7 + 0x30) = local_10;
    }
  }
  else if (*(long *)(this + 0x180) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      (**(code **)(*plVar6 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    *(undefined8 *)(this + 0x180) = 0;
  }
  this[0x17b] = (SunBank)param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::registerForEvents() */

void __thiscall SunBank::registerForEvents(SunBank *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_100 [8];
  CBMemberTranslatorX aCStack_f8 [24];
  CBMemberTranslatorX aCStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunBanked);
  local_110 = local_b8;
  local_120 = local_c8;
  uStack_118 = uStack_c0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SunBank,void(SunBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunBanked,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<SunBank,void(SunBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunBankMax);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<SunBank,void(SunBank::*)(bool)>>
            ((MessageRouter *)puVar1,Message::SunBankMax,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunSpent);
  local_110 = local_88;
  local_120 = local_98;
  uStack_118 = uStack_90;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SunBank,void(SunBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunChanged,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunAdd);
  local_120 = local_80;
  uStack_118 = uStack_78;
  local_110 = local_70;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SunBank,void(SunBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunAdd,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunIsInsufficient);
  Sexy::Delegate0::Delegate0<SunBank,void(SunBank::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SunIsInsufficient,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelStart);
  Sexy::Delegate0::Delegate0<SunBank,void(SunBank::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  if (pBVar2 != (Board *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,handleTouch);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<SunBank,bool(SunBank::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_f8);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_100);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,cancelTouch);
    Sexy::Delegate0::Delegate0<SunBank,void(SunBank::*)()>(aDStack_38,aCStack_e0);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,9,a_Stack_100,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_100);
    this[0x178] = (SunBank)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::GetUIRect() */

void __thiscall SunBank::GetUIRect(SunBank *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bec0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bec0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0be18);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  Sexy::Insets::Insets(in_x8,local_18 - iVar2 / 2,local_14,local_10 + iVar3 / 2 + iVar4 / 2,local_c)
  ;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::GetHitRect() */

void __thiscall SunBank::GetHitRect(SunBank *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bec0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bec0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bec0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bec0);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
  iVar6 = FUN_0449a484(0x14);
  Sexy::Insets::Insets
            (in_x8,((local_18 + local_10) - iVar2 / 2) - iVar6,
             (local_14 + (local_c - iVar4) / 2) - iVar6,iVar3 + iVar6 * 2,iVar5 + iVar6 * 2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::handleTouch(Sexy::Touch const&) */

void __thiscall SunBank::handleTouch(SunBank *this,Touch *param_1)

{
  int iVar1;
  SunBank SVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  SunBank local_41;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x179] != (SunBank)0x0) {
    SVar2 = this[0x17a];
    if (SVar2 == (SunBank)0x0) {
      Sexy::Touch::Touch(aTStack_40,param_1);
      Board::TranslateBoardPositionToScreenPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
      bVar3 = (**(code **)(*(long *)this + 0xa8))
                        (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                         *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
      iVar1 = *(int *)(param_1 + 0x30);
      if (iVar1 == 3) {
        lVar4 = *(long *)param_1;
        lVar5 = *(long *)(this + 0x170);
        if ((bVar3 == 0) || (lVar4 != lVar5)) {
          bVar6 = 0;
        }
        else {
          local_41 = SVar2;
          MessageRouter::Post<bool*,bool*>
                    ((MessageRouter *)gMessageRouter,Message::CheckBuySunManually,(bool *)&local_41)
          ;
          if ((local_41 == (SunBank)0x0) &&
             (LawnApp::ShowCoinStore(gLawnApp,1), this[0x17b] != (SunBank)0x0)) {
            LawnApp::EnableCoinStoreTutorial(gLawnApp,true);
            SetIsTutorial(this,false);
          }
          lVar4 = *(long *)param_1;
          bVar6 = 1;
          lVar5 = *(long *)(this + 0x170);
        }
      }
      else {
        bVar6 = 0;
        if (iVar1 != 4) {
          if (iVar1 != 0) goto LAB_0449b724;
          bVar6 = bVar3 & *(long *)(this + 0x170) == 0;
          if (bVar6 != 0) {
            *(undefined8 *)(this + 0x170) = *(undefined8 *)param_1;
            (**(code **)(*(long *)this + 0xe8))(this,4);
            goto LAB_0449b724;
          }
          goto LAB_0449b720;
        }
        lVar4 = *(long *)param_1;
        lVar5 = *(long *)(this + 0x170);
      }
      if (lVar4 == lVar5) {
        cancelTouch(this);
      }
      goto LAB_0449b724;
    }
  }
LAB_0449b720:
  bVar6 = 0;
LAB_0449b724:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::Draw(Sexy::Graphics*) */

void __thiscall SunBank::Draw(SunBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  long *plVar6;
  CachedUIResourcePtr<Sexy::Image> *pCVar7;
  float fVar8;
  GraphicsAutoState aGStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_28 = 0;
  local_24 = 0;
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bef0);
  Draw3SliceImage(param_1,aIStack_18,uVar4);
  fVar8 = (float)PVZ_T();
  if (*(float *)(this + 400) <= fVar8) {
    pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bec0;
  }
  else {
    pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bcc0;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar7);
  iVar1 = FUN_0449a484(0xffffffe7);
  iVar2 = FUN_0449a484(0xfffffffd);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2);
  if ((this[0x179] != (SunBank)0x0) && (this[0x17a] == (SunBank)0x0)) {
    iVar1 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
    if (iVar1 == 4) {
      pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0bce8;
    }
    else {
      pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0be18;
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar7);
    iVar1 = FUN_0449a2ac(*(undefined4 *)(this + 0x38));
    iVar2 = FUN_0449a484(0xfffffff1);
    iVar3 = FUN_0449a484(0xfffffffa);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1 + iVar2,iVar3);
  }
  DrawText(this,param_1);
  if ((this[0x17b] != (SunBank)0x0) && (plVar6 = *(long **)(this + 0x180), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x98))(plVar6,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SunBank::Draw(Sexy::Graphics*) */

void __thiscall SunBank::Draw(SunBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBank::GetCenterPointOnScreen() */

void __thiscall SunBank::GetCenterPointOnScreen(SunBank *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetCenterPointOnScreen();
  iVar2 = FUN_0449a484(0xffffffd6);
  iVar3 = FUN_0449a484(0);
  Sexy::Point::Point(in_x8,local_10 + iVar2,local_c + iVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

