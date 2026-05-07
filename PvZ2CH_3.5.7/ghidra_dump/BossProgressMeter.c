// Class: BossProgressMeter


/* BossProgressMeter::~BossProgressMeter() */

void __thiscall BossProgressMeter::~BossProgressMeter(BossProgressMeter *this)

{
  *(undefined ***)this = &PTR_GetClass_068cc8e0;
  *(undefined ***)(this + 0x10) = &PTR__BossProgressMeter_068cca90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x188));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x170));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to BossProgressMeter::~BossProgressMeter() */

void __thiscall BossProgressMeter::~BossProgressMeter(BossProgressMeter *this)

{
  ~BossProgressMeter(this + -0x10);
  return;
}


/* BossProgressMeter::~BossProgressMeter() */

void __thiscall BossProgressMeter::~BossProgressMeter(BossProgressMeter *this)

{
  ~BossProgressMeter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BossProgressMeter::~BossProgressMeter() */

void __thiscall BossProgressMeter::~BossProgressMeter(BossProgressMeter *this)

{
  ~BossProgressMeter(this + -0x10);
  return;
}


/* BossProgressMeter::SetEliminateModule(bool) */

void __thiscall BossProgressMeter::SetEliminateModule(BossProgressMeter *this,bool param_1)

{
  this[0x1c0] = (BossProgressMeter)param_1;
  return;
}


/* BossProgressMeter::onBossProgressMeterUnlimited(bool) */

void __thiscall
BossProgressMeter::onBossProgressMeterUnlimited(BossProgressMeter *this,bool param_1)

{
  this[0x1c2] = (BossProgressMeter)param_1;
  return;
}


/* BossProgressMeter::onGamePaused() */

void __thiscall BossProgressMeter::onGamePaused(BossProgressMeter *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,5);
  return;
}


/* BossProgressMeter::onGameUnpaused() */

void __thiscall BossProgressMeter::onGameUnpaused(BossProgressMeter *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* BossProgressMeter::drawCalcFillPercent(int, float) */

float __thiscall
BossProgressMeter::drawCalcFillPercent(BossProgressMeter *this,int param_1,float param_2)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = (float *)FUN_0475825c(*(undefined8 *)(this + 0x170),(long)param_1);
  fVar4 = *pfVar2;
  cVar1 = Sexy::IsNearZero(fVar4,0.001);
  fVar3 = 0.0;
  if (((cVar1 == '\0') && (fVar3 = fVar4, fVar4 < 100.0)) &&
     (cVar1 = Sexy::IsNearZero(param_2,0.001), cVar1 == '\0')) {
    fVar3 = 100.0;
  }
  return fVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::StaticClassInit() */

void BossProgressMeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossProgressMeter");
    (*pcVar2)(plVar1,asStack_10,FUN_04759918,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossProgressMeter::StaticGetClass() */

long * BossProgressMeter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossProgressMeter::GetClass() const */

long * BossProgressMeter::GetClass(void)

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
  (*pcVar3)(plVar1,"BossProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossProgressMeter::snapPhasePercentages() */

void __thiscall BossProgressMeter::snapPhasePercentages(BossProgressMeter *this)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x188);
  lVar1 = FUN_04758244(uVar5,*(undefined8 *)(this + 400));
  lVar4 = 0;
  while (lVar4 + 1 != lVar1 + 1) {
    puVar2 = (undefined4 *)FUN_0475825c(*(undefined8 *)(this + 0x170),lVar4);
    puVar3 = (undefined4 *)FUN_0475825c(uVar5,lVar4);
    *puVar2 = *puVar3;
    lVar4 = lVar4 + 1;
  }
  return;
}


/* BossProgressMeter::SetHeadIcon(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall BossProgressMeter::SetHeadIcon(BossProgressMeter *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 == '\0') {
    return;
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b8),(RtWeakPtr *)param_2);
  return;
}


/* BossProgressMeter::setSparkLocation(Sexy::SexyVector2) */

void BossProgressMeter::setSparkLocation(undefined4 param_1,undefined4 param_2,long param_3)

{
  StandaloneEffect *this;
  undefined8 local_8;
  
  local_8 = CONCAT44(param_2,param_1);
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x1a0));
  StandaloneEffect::SetScreenSpaceOrigin(this,(SexyVector2 *)&local_8,699999);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::setPhasePercentage(float) */

void __thiscall BossProgressMeter::setPhasePercentage(BossProgressMeter *this,float param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  lVar4 = (long)*(int *)(this + 0x164);
  if (this[0x1c2] != (BossProgressMeter)0x0) {
    lVar4 = 0;
  }
  local_8 = ___stack_chk_guard;
  local_14 = param_1;
  pfVar2 = (float *)FUN_0475825c(*(undefined8 *)(this + 0x188),lVar4);
  local_10 = 100.0;
  local_c = 0.0;
  pfVar3 = eastl::min_alt<float>(&local_10,&local_14);
  pfVar3 = eastl::max_alt<float>(&local_c,pfVar3);
  bVar1 = local_8 == ___stack_chk_guard;
  *pfVar2 = *pfVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::onSetPhasePercentage(float) */

void __thiscall BossProgressMeter::onSetPhasePercentage(BossProgressMeter *this,float param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  long lStack_8;
  
  lVar4 = (long)*(int *)(this + 0x164);
  if (this[0x1c2] != (BossProgressMeter)0x0) {
    lVar4 = 0;
  }
  lStack_8 = ___stack_chk_guard;
  fStack_14 = param_1;
  pfVar2 = (float *)FUN_0475825c(*(undefined8 *)(this + 0x188),lVar4);
  fStack_10 = 100.0;
  fStack_c = 0.0;
  pfVar3 = eastl::min_alt<float>(&fStack_10,&fStack_14);
  pfVar3 = eastl::max_alt<float>(&fStack_c,pfVar3);
  bVar1 = lStack_8 == ___stack_chk_guard;
  *pfVar2 = *pfVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::getStageCounterUI() */

void BossProgressMeter::getStageCounterUI(void)

{
  undefined8 extraout_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIBattlezBossStageCounter");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* BossProgressMeter::updatePhaseUI() */

void __thiscall BossProgressMeter::updatePhaseUI(BossProgressMeter *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ChallengeScoringUI *this_00;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  if (this[0x1c1] != (BossProgressMeter)0x0) {
    iVar2 = *(int *)(this + 0x16c);
    iVar3 = *(int *)(this + 0x164);
    if (iVar2 - iVar3 < 1) {
      lVar4 = getStageCounterUI();
      FUN_0475823c(lVar4 + 0x1b8,0);
    }
    else {
      lVar4 = getStageCounterUI();
      FUN_0475823c(lVar4 + 0x1b8,iVar2 - iVar3);
    }
    this_00 = (ChallengeScoringUI *)getStageCounterUI();
    ChallengeScoringUI::SetShowScoreValue(this_00,false,false);
    return;
  }
  if (this[0x1c2] == (BossProgressMeter)0x0) {
    iVar2 = *(int *)(this + 0x164);
    if (iVar2 != 0) {
      uVar6 = *(undefined8 *)(this + 0x188);
      lVar4 = 0;
      do {
        lVar1 = lVar4 + 1;
        puVar5 = (undefined4 *)FUN_0475825c(uVar6,lVar4);
        *puVar5 = 0;
        lVar4 = lVar1;
      } while (lVar1 != iVar2);
    }
    return;
  }
  lVar4 = getStageCounterUI();
  FUN_0475823c(lVar4 + 0x1b8,*(int *)(this + 0x164) + 1);
  lVar4 = getStageCounterUI();
  FUN_04758234(lVar4 + 0x1b0,(long)*(int *)(this + 0x168));
  return;
}


/* BossProgressMeter::setCurrentPhase(int) */

void __thiscall BossProgressMeter::setCurrentPhase(BossProgressMeter *this,int param_1)

{
  if (*(int *)(this + 0x164) != param_1) {
    *(int *)(this + 0x164) = param_1;
    updatePhaseUI(this);
    return;
  }
  return;
}


/* BossProgressMeter::onSetCurrentPhase(int, int) */

void __thiscall
BossProgressMeter::onSetCurrentPhase(BossProgressMeter *this,int param_1,int param_2)

{
  *(int *)(this + 0x168) = param_2;
  setCurrentPhase(this,param_1);
  return;
}


/* BossProgressMeter::onChangePhase() */

void __thiscall BossProgressMeter::onChangePhase(BossProgressMeter *this)

{
  setCurrentPhase(this,*(int *)(this + 0x164) + 1);
  return;
}


/* BossProgressMeter::onSetAbsoluteFillPercentage(float) */

void __thiscall
BossProgressMeter::onSetAbsoluteFillPercentage(BossProgressMeter *this,float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)*(int *)(this + 0x16c);
  iVar1 = *(int *)(this + 0x16c) + -1;
  fVar4 = 100.0 / fVar3;
  iVar2 = ClampInt((int)(param_1 / fVar4),0,iVar1);
  setCurrentPhase(this,iVar1 - iVar2);
  setPhasePercentage(this,(param_1 - fVar4 * (float)iVar2) * fVar3);
  snapPhasePercentages(this);
  return;
}


/* BossProgressMeter::onSetStageCountdown() */

void __thiscall BossProgressMeter::onSetStageCountdown(BossProgressMeter *this)

{
  this[0x1c1] = (BossProgressMeter)0x1;
  updatePhaseUI(this);
  return;
}


/* BossProgressMeter::SetSparkActive(bool) */

void __thiscall BossProgressMeter::SetSparkActive(BossProgressMeter *this,bool param_1)

{
  StandaloneEffect *this_00;
  undefined4 uVar1;
  
  if (this[0x1ac] != (BossProgressMeter)param_1) {
    this[0x1ac] = (BossProgressMeter)param_1;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x1a8) = uVar1;
    if (this[0x1ac] != (BossProgressMeter)0x0) {
      this_00 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
      StandaloneEffect::SetVisibility(this_00,true);
      return;
    }
  }
  return;
}


/* BossProgressMeter::FlashDamage() */

void __thiscall BossProgressMeter::FlashDamage(BossProgressMeter *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::updateState_Ready() */

void __thiscall BossProgressMeter::updateState_Ready(BossProgressMeter *this)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  long *plVar5;
  StandaloneEffect *this_00;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  lVar6 = 0;
  lVar2 = FUN_04758244(uVar7,*(undefined8 *)(this + 0x178));
  do {
    if (lVar6 == lVar2) {
      fVar8 = (float)PVZ_EOT();
      fVar12 = *(float *)(this + 0x1a8);
      if (fVar12 < fVar8) {
LAB_04758cd0:
        uVar9 = PVZ_T();
        local_c = 0x3f800000;
        local_10 = 0;
        fVar10 = CurveLerp<float>(fVar12,fVar12 + 1.0,uVar9,&local_10,&local_c,4);
        if (this[0x1ac] == (BossProgressMeter)0x0) {
          fVar10 = 1.0 - fVar10;
        }
        local_c = 0x3f800000;
        local_10 = 0;
        fVar10 = CurveEvaluate<float>(fVar10,&local_10,&local_c,3);
        local_10 = 0;
        local_c = 0x3f800000;
        fVar11 = CurveEvaluate<float>(&local_10,&local_c,8);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
        (**(code **)(*plVar5 + 0x80))(fVar11 + fVar10);
        fVar10 = (float)PVZ_T();
        if ((fVar12 + 1.0 < fVar10) &&
           (*(float *)(this + 0x1a8) = fVar8, this[0x1ac] == (BossProgressMeter)0x0)) {
          this_00 = (StandaloneEffect *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
          StandaloneEffect::SetVisibility(this_00,false);
        }
      }
LAB_04758c40:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pfVar3 = (float *)FUN_0475825c(uVar7,lVar6);
    pfVar4 = (float *)FUN_0475825c(*(undefined8 *)(this + 0x188),lVar6);
    cVar1 = Sexy::IsNear(*pfVar3,*pfVar4,0.001);
    if (cVar1 == '\0') {
      fVar8 = (float)PVZ_Dt();
      pfVar3 = (float *)FUN_0475825c(*(undefined8 *)(this + 0x170),lVar6);
      uVar7 = *(undefined8 *)(this + 0x188);
      *pfVar3 = *pfVar3 - fVar8 * 100.0;
      pfVar4 = (float *)FUN_0475825c(uVar7,lVar6);
      pfVar4 = eastl::max_alt<float>(pfVar3,pfVar4);
      *pfVar3 = *pfVar4;
      fVar8 = (float)PVZ_EOT();
      fVar12 = *(float *)(this + 0x1a8);
      if (fVar12 < fVar8) goto LAB_04758cd0;
      goto LAB_04758c40;
    }
    lVar6 = lVar6 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::createSparkEffect() */

void __thiscall BossProgressMeter::createSparkEffect(BossProgressMeter *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  StandaloneEffect *pSVar4;
  long *plVar5;
  code *pcVar6;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1a0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_20,"POPANIM_EFFECTS_POWER_UP_LIGHTNING");
    GetPAMByName(asStack_20);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetCentered(pEVar2,true);
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string((string *)aRStack_18,"animation");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,aRStack_18,2);
    std::string::~string((string *)aRStack_18);
    nop();
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetKeepAlive(pSVar4,true);
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetVisibility(pSVar4,false);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar6 = *(code **)(*plVar5 + 0x78);
    Sexy::Color::Color((Color *)aRStack_18,2);
    (*pcVar6)(plVar5,aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::AddToRenderQueue(RenderQueue*) */

void __thiscall BossProgressMeter::AddToRenderQueue(BossProgressMeter *this,RenderQueue *param_1)

{
  RtObject *this_00;
  UIWidgetSheet *pUVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantImitater::GetImitatedPlant();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  pUVar1 = Sexy::RtObject::Cast<UIWidgetSheet>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (this[0x1c0] == (BossProgressMeter)0x0) {
    iVar2 = *(short *)(pUVar1 + 0x5c) + 700000;
  }
  else {
    iVar2 = *(short *)(pUVar1 + 0x5c) + 1000000;
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x78);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<BossProgressMeter,void(BossProgressMeter::*)(Sexy::Graphics*)>(aDStack_38,aRStack_50);
  RenderQueue::Add(param_1,iVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::GetTotalPercent() */

void __thiscall BossProgressMeter::GetTotalPercent(BossProgressMeter *this)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  fVar3 = 0.0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x188));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x188));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pfVar2 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    fVar3 = fVar3 + *pfVar2;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::registerForEvents() */

void __thiscall BossProgressMeter::registerForEvents(BossProgressMeter *this)

{
  undefined *puVar1;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
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
            ((ReceivedDataCallback *)this,onSetAbsoluteFillPercentage);
  local_f0 = local_c8;
  uStack_e8 = uStack_c0;
  local_e0 = local_b8;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<BossProgressMeter,void(BossProgressMeter::*)(float)>>
            ((MessageRouter *)puVar1,Message::BossSetAbsoluteFillPercentage,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,showBossMeter);
  Sexy::Delegate0::Delegate0<BossProgressMeter,void(BossProgressMeter::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BossShowProgressMeter,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetPhaseCount);
  local_110 = local_b0;
  uStack_108 = uStack_a8;
  local_100 = local_a0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<BossProgressMeter,void(BossProgressMeter::*)(int)>>
            ((MessageRouter *)puVar1,Message::BossSetPhaseCount,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetCurrentPhase);
  local_120 = local_88;
  local_130 = local_98;
  uStack_128 = uStack_90;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<BossProgressMeter,void(BossProgressMeter::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::BossSetCurrentPhase,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetPhasePercentage);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<BossProgressMeter,void(BossProgressMeter::*)(float)>>
            ((MessageRouter *)puVar1,Message::BossSetPhasePercentage,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SetSparkActive);
  local_140 = local_58;
  local_150 = local_68;
  uStack_148 = uStack_60;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<BossProgressMeter,void(BossProgressMeter::*)(bool)>>
            ((MessageRouter *)puVar1,Message::BossShowFillSpark,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePaused);
  Sexy::Delegate0::Delegate0<BossProgressMeter,void(BossProgressMeter::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GamePaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameUnpaused);
  Sexy::Delegate0::Delegate0<BossProgressMeter,void(BossProgressMeter::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameUnpaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,FlashDamage);
  Sexy::Delegate0::Delegate0<BossProgressMeter,void(BossProgressMeter::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BossFlashDamage,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChangePhase);
  Sexy::Delegate0::Delegate0<BossProgressMeter,void(BossProgressMeter::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BossChangePhase,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetStageCountdown);
  Sexy::Delegate0::Delegate0<BossProgressMeter,void(BossProgressMeter::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::BossProgressMeterStageCountdown,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBossProgressMeterUnlimited);
  local_150 = local_50;
  uStack_148 = uStack_48;
  local_140 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<BossProgressMeter,void(BossProgressMeter::*)(bool)>>
            ((MessageRouter *)puVar1,Message::BossProgressMeterUnlimited,&local_150);
  createSparkEffect(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::showBossMeter() */

void __thiscall BossProgressMeter::showBossMeter(BossProgressMeter *this)

{
  char cVar1;
  UIWidget *this_00;
  undefined1 auStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1b8));
  if (cVar1 == '\0') {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b23358);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b8),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if ((cVar1 == '\0') &&
     ((UIWidget::SetVisible((UIWidget *)this,true), this[0x1c2] != (BossProgressMeter)0x0 ||
      (this[0x1c1] != (BossProgressMeter)0x0)))) {
    this_00 = (UIWidget *)getStageCounterUI();
    UIWidget::SetVisible(this_00,true);
    FUN_0475823c(this_00 + 0x1b8,1);
    FUN_04758234(this_00 + 0x1b0,(long)*(int *)(this + 0x168));
    ChallengeScoringUI::SetShowScoreValue
              ((ChallengeScoringUI *)this_00,(bool)((byte)this[0x1c1] ^ 1),false);
    FUN_05478178(aRStack_10,L"[ZOMBOSS_PHASE_SCORE]",auStack_18);
    ChallengeScoringUI::SetScoreFormatString(this_00,aRStack_10);
    FUN_05476c50(aRStack_10);
    nop();
    FUN_05478178(aRStack_10,L"[ZOMBOSS_PHASE]",auStack_18);
    ChallengeScoringUI::SetMultiplierFormatString(this_00,aRStack_10);
    FUN_05476c50(aRStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossProgressMeter::getMeterFillImage() */

void __thiscall BossProgressMeter::getMeterFillImage(BossProgressMeter *this)

{
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b23330);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::setPhaseCount(int) */

void __thiscall BossProgressMeter::setPhaseCount(BossProgressMeter *this,int param_1)

{
  long lVar1;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x16c) != param_1) {
    *(int *)(this + 0x16c) = param_1;
    *(undefined4 *)(this + 0x164) = 0;
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)(this + 0x170));
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)(this + 0x188));
    if ((long)param_1 != 0) {
      lVar1 = 0;
      do {
        local_c = 100.0;
        lVar1 = lVar1 + 1;
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)(this + 0x170),&local_c);
        local_c = 100.0;
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)(this + 0x188),&local_c);
      } while (lVar1 != param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossProgressMeter::BossProgressMeter() */

void __thiscall BossProgressMeter::BossProgressMeter(BossProgressMeter *this)

{
  undefined4 uVar1;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_068cc8e0;
  *(undefined ***)(this + 0x10) = &PTR__BossProgressMeter_068cca90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  this[0x1ac] = (BossProgressMeter)0x0;
  uVar1 = PVZ_EOT();
  this[0x1c0] = (BossProgressMeter)0x0;
  this[0x1c1] = (BossProgressMeter)0x0;
  this[0x1c2] = (BossProgressMeter)0x0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  setPhaseCount(this,1);
  return;
}


/* BossProgressMeter::StaticNew() */

BossProgressMeter * BossProgressMeter::StaticNew(void)

{
  BossProgressMeter *this;
  
  this = ::operator_new(0x1c8);
  BossProgressMeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeter::onSetPhaseCount(int) */

void __thiscall BossProgressMeter::onSetPhaseCount(BossProgressMeter *this,int param_1)

{
  long lVar1;
  float fStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x16c) != param_1) {
    *(int *)(this + 0x16c) = param_1;
    *(undefined4 *)(this + 0x164) = 0;
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)(this + 0x170));
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)(this + 0x188));
    if ((long)param_1 != 0) {
      lVar1 = 0;
      do {
        fStack_c = 100.0;
        lVar1 = lVar1 + 1;
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)(this + 0x170),&fStack_c);
        fStack_c = 100.0;
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)(this + 0x188),&fStack_c);
      } while (lVar1 != param_1);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0475a72c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* BossProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall BossProgressMeter::Draw(BossProgressMeter *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  RtMixedPtrBase *this_00;
  unkuint9 Var3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  int *piVar11;
  float *pfVar12;
  Image *pIVar13;
  undefined8 uVar14;
  ResourceInfo *pRVar15;
  Color *pCVar16;
  Board *this_01;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  int local_8c;
  float local_6c;
  GraphicsAutoState aGStack_68 [8];
  GraphicsAutoState aGStack_60 [8];
  Insets aIStack_58 [16];
  Insets aIStack_48 [8];
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_28;
  int local_24;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  long local_8;
  
  local_8c = *(int *)(this + 0x16c);
  local_8 = ___stack_chk_guard;
  if (this[0x1c1] == (BossProgressMeter)0x0) {
    fVar29 = (float)local_8c;
  }
  else {
    local_8c = 1;
    fVar29 = 1.0;
  }
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  fVar28 = *(float *)(this + 0x1b0);
  fVar22 = (float)PVZ_EOT();
  if (fVar28 < fVar22) {
    auVar27 = PVZ_T();
    local_18 = 0.0;
    local_28 = 1.0;
    fVar22 = CurveLerp<float>(auVar27,fVar28 + 0.25,auVar27._0_4_,&local_28,&local_18,3);
  }
  else {
    fVar22 = 0.0;
  }
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23380);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  fVar28 = (float)iVar5 * 0.33333334;
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23380);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  local_28 = (float)FUN_04758230(*(undefined4 *)(this + 0x38));
  local_18 = (float)(int)(fVar28 + fVar28);
  piVar11 = eastl::max_alt<int>((int *)&local_28,(int *)&local_18);
  iVar5 = *piVar11;
  Sexy::Insets::Insets(aIStack_58,0,0,(int)fVar28,iVar6);
  fVar28 = (float)iVar5;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23330);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23330);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar8 = FUN_04758598(3);
  iVar5 = iVar5 + iVar8;
  Sexy::Insets::Insets(aIStack_48,aIStack_58);
  local_40 = (int)(float)iVar7;
  local_3c = iVar5;
  fVar23 = (float)FUN_047585ac(0x40b00000);
  fVar24 = (float)FUN_047585ac(0x40e00000);
  fVar25 = (float)FUN_047585ac(0x3fc00000);
  iVar7 = (int)(fVar28 - fVar23 * 2.0);
  iVar8 = (int)((float)iVar7 / fVar29);
  fVar29 = fVar23;
  local_6c = fVar23;
  if (0 < local_8c) {
    fVar26 = 0.0;
    iVar21 = (int)(fVar24 - fVar25);
    iVar7 = iVar7 - iVar8;
    iVar17 = 0;
    do {
      iVar2 = iVar17 + 1;
      fVar26 = (float)(**(code **)(*(long *)this + 400))(fVar26,this,iVar17);
      local_28 = fVar26 * (float)iVar8 * 0.01;
      local_18 = 0.0;
      local_38 = (float)iVar8;
      pfVar12 = eastl::min_alt<float>(&local_38,&local_28);
      pfVar12 = eastl::max_alt<float>(&local_18,pfVar12);
      fVar29 = (float)iVar7;
      fVar24 = *pfVar12;
      iVar7 = iVar7 - iVar8;
      local_18 = fVar29 + fVar23 + fVar24;
      iVar17 = (int)(fVar29 + fVar23);
      pfVar12 = eastl::max_alt<float>(&local_18,&local_6c);
      fVar29 = *pfVar12;
      local_6c = fVar29;
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
      Sexy::Graphics::ClipRect(param_1,iVar17,iVar21,(int)fVar24,iVar5);
      (**(code **)(*(long *)this + 0x198))((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,this);
      pIVar13 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar17,iVar21,iVar8,iVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      pCVar16 = (Color *)0xff;
      Sexy::Insets::Insets((Insets *)&local_38,0xff,0xff,0xff,0x96);
      Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_38);
      local_1c = 0;
      Sexy::SexyMath::Lerp<Sexy::Color>((SexyMath *)&local_28,(Color *)&local_38,pCVar16,fVar22);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::FillRect(param_1,iVar17,iVar21,iVar8,iVar5);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
      iVar17 = iVar2;
    } while (iVar2 != local_8c);
  }
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23380);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23290);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  fVar22 = (fVar28 / (float)iVar5) * (float)iVar7;
  Sexy::Insets::Insets((Insets *)&local_18,(int)(fVar28 - fVar22),0,(int)fVar22,iVar6);
  uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23290);
  Draw3SliceImage(param_1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,uVar14);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_38,fVar29 + *(float *)(param_1 + 0x10),
             (float)(iVar6 / 2) + *(float *)(param_1 + 0x14));
  Sexy::Point::Point((Point *)&local_28,(int)local_38,(int)local_34);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  local_28 = (float)((int)local_28 - *(int *)(this_01 + 0x48));
  local_24 = local_24 - *(int *)(this_01 + 0x4c);
  Board::TranslateScreenPositionToBoardPosition(this_01,(Point *)&local_28);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)(int)local_28,(float)local_24);
  setSparkLocation(local_18,local_14,this);
  if (0 < local_8c) {
    uVar20 = (ulong)iVar8;
    iVar5 = FUN_04758598(0xffffffff);
    iVar7 = FUN_04758598(7);
    uVar18 = 1;
    uVar19 = uVar20;
    do {
      while (uVar18 - 1 < (ulong)(long)*(int *)(this + 0x164)) {
        uVar19 = uVar19 + uVar20;
        bVar1 = (ulong)(long)local_8c <= uVar18;
        uVar18 = uVar18 + 1;
        if (bVar1) goto LAB_0475a604;
      }
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b232b8);
      Var3 = (unkuint9)uVar19;
      uVar19 = uVar19 + uVar20;
      Sexy::Graphics::DrawImage
                (param_1,pIVar13,(int)(((fVar28 - fVar23) + (float)iVar5) - (float)(unkint9)Var3),
                 iVar7);
      bVar1 = uVar18 < (ulong)(long)local_8c;
      uVar18 = uVar18 + 1;
    } while (bVar1);
  }
LAB_0475a604:
  this_00 = (RtMixedPtrBase *)(this + 0x1b8);
  cVar4 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar4 != '\0') {
    iVar5 = FUN_04758598(0xfffffff9);
    iVar7 = FUN_04758598(0xfffffffb);
    pLVar9 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23380);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pSVar10 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar17 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    Sexy::Graphics::DrawImageF
              (param_1,(Image *)pRVar15,(float)((iVar5 + iVar7) - iVar6 / 2),
               (float)(iVar8 / 2 - iVar17 / 2));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BossProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall BossProgressMeter::Draw(BossProgressMeter *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

