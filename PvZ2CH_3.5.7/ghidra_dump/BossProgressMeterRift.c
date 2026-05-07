// Class: BossProgressMeterRift


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0475a72c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* BossProgressMeterRift::Draw(Sexy::Graphics*) */

void __thiscall BossProgressMeterRift::Draw(BossProgressMeterRift *this,Graphics *param_1)

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
  int iStack_8c;
  float fStack_6c;
  GraphicsAutoState aGStack_68 [8];
  GraphicsAutoState aGStack_60 [8];
  Insets aIStack_58 [16];
  Insets aIStack_48 [8];
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  long lStack_8;
  
  iStack_8c = *(int *)(this + 0x16c);
  lStack_8 = ___stack_chk_guard;
  if (this[0x1c1] == (BossProgressMeterRift)0x0) {
    fVar29 = (float)iStack_8c;
  }
  else {
    iStack_8c = 1;
    fVar29 = 1.0;
  }
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  fVar28 = *(float *)(this + 0x1b0);
  fVar22 = (float)PVZ_EOT();
  if (fVar28 < fVar22) {
    auVar27 = PVZ_T();
    fStack_18 = 0.0;
    fStack_28 = 1.0;
    fVar22 = CurveLerp<float>(auVar27,fVar28 + 0.25,auVar27._0_4_,&fStack_28,&fStack_18,3);
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
  fStack_28 = (float)FUN_04758230(*(undefined4 *)(this + 0x38));
  fStack_18 = (float)(int)(fVar28 + fVar28);
  piVar11 = eastl::max_alt<int>((int *)&fStack_28,(int *)&fStack_18);
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
  iStack_40 = (int)(float)iVar7;
  iStack_3c = iVar5;
  fVar23 = (float)FUN_047585ac(0x40b00000);
  fVar24 = (float)FUN_047585ac(0x40e00000);
  fVar25 = (float)FUN_047585ac(0x3fc00000);
  iVar7 = (int)(fVar28 - fVar23 * 2.0);
  iVar8 = (int)((float)iVar7 / fVar29);
  fVar29 = fVar23;
  fStack_6c = fVar23;
  if (0 < iStack_8c) {
    fVar26 = 0.0;
    iVar21 = (int)(fVar24 - fVar25);
    iVar7 = iVar7 - iVar8;
    iVar17 = 0;
    do {
      iVar2 = iVar17 + 1;
      fVar26 = (float)(**(code **)(*(long *)this + 400))(fVar26,this,iVar17);
      fStack_28 = fVar26 * (float)iVar8 * 0.01;
      fStack_18 = 0.0;
      fStack_38 = (float)iVar8;
      pfVar12 = eastl::min_alt<float>(&fStack_38,&fStack_28);
      pfVar12 = eastl::max_alt<float>(&fStack_18,pfVar12);
      fVar29 = (float)iVar7;
      fVar24 = *pfVar12;
      iVar7 = iVar7 - iVar8;
      fStack_18 = fVar29 + fVar23 + fVar24;
      iVar17 = (int)(fVar29 + fVar23);
      pfVar12 = eastl::max_alt<float>(&fStack_18,&fStack_6c);
      fVar29 = *pfVar12;
      fStack_6c = fVar29;
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
      Sexy::Graphics::ClipRect(param_1,iVar17,iVar21,(int)fVar24,iVar5);
      (**(code **)(*(long *)this + 0x198))((RtWeakPtr<Sexy::ResourceInfo> *)&fStack_18,this);
      pIVar13 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&fStack_18);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar17,iVar21,iVar8,iVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&fStack_18);
      pCVar16 = (Color *)0xff;
      Sexy::Insets::Insets((Insets *)&fStack_38,0xff,0xff,0xff,0x96);
      Sexy::Insets::Insets((Insets *)&fStack_28,(Insets *)&fStack_38);
      uStack_1c = 0;
      Sexy::SexyMath::Lerp<Sexy::Color>((SexyMath *)&fStack_28,(Color *)&fStack_38,pCVar16,fVar22);
      Sexy::Graphics::SetColor(param_1,(Color *)&fStack_18);
      Sexy::Graphics::FillRect(param_1,iVar17,iVar21,iVar8,iVar5);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
      iVar17 = iVar2;
    } while (iVar2 != iStack_8c);
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
  Sexy::Insets::Insets((Insets *)&fStack_18,(int)(fVar28 - fVar22),0,(int)fVar22,iVar6);
  uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23290);
  Draw3SliceImage(param_1,(RtWeakPtr<Sexy::ResourceInfo> *)&fStack_18,uVar14);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&fStack_38,fVar29 + *(float *)(param_1 + 0x10),
             (float)(iVar6 / 2) + *(float *)(param_1 + 0x14));
  Sexy::Point::Point((Point *)&fStack_28,(int)fStack_38,(int)fStack_34);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  fStack_28 = (float)((int)fStack_28 - *(int *)(this_01 + 0x48));
  iStack_24 = iStack_24 - *(int *)(this_01 + 0x4c);
  Board::TranslateScreenPositionToBoardPosition(this_01,(Point *)&fStack_28);
  Sexy::FastCurve::SetOutRange((FastCurve *)&fStack_18,(float)(int)fStack_28,(float)iStack_24);
  BossProgressMeter::setSparkLocation(fStack_18,uStack_14,this);
  if (0 < iStack_8c) {
    uVar20 = (ulong)iVar8;
    iVar5 = FUN_04758598(0xffffffff);
    iVar7 = FUN_04758598(7);
    uVar18 = 1;
    uVar19 = uVar20;
    do {
      while (uVar18 - 1 < (ulong)(long)*(int *)(this + 0x164)) {
        uVar19 = uVar19 + uVar20;
        bVar1 = (ulong)(long)iStack_8c <= uVar18;
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
      bVar1 = uVar18 < (ulong)(long)iStack_8c;
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
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BossProgressMeterRift::Draw(Sexy::Graphics*) */

void __thiscall BossProgressMeterRift::Draw(BossProgressMeterRift *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* BossProgressMeterRift::drawCalcFillPercent(int, float) */

undefined1  [16] __thiscall
BossProgressMeterRift::drawCalcFillPercent(BossProgressMeterRift *this,int param_1,float param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (this[0x1c3] != (BossProgressMeterRift)0x0) {
    return ZEXT416(0x42c80000);
  }
  BossProgressMeter::drawCalcFillPercent((BossProgressMeter *)this,param_1,param_2);
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}


/* BossProgressMeterRift::onEnterLootPhase() */

void __thiscall BossProgressMeterRift::onEnterLootPhase(BossProgressMeterRift *this)

{
  long lVar1;
  
  lVar1 = BossProgressMeter::getStageCounterUI();
  FUN_0368b1f0(lVar1 + 0x1c1);
  this[0x1c3] = (BossProgressMeterRift)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeterRift::StaticClassInit() */

void BossProgressMeterRift::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossProgressMeterRift");
    (*pcVar2)(plVar1,asStack_10,FUN_0368b3c8,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossProgressMeterRift::StaticGetClass() */

long * BossProgressMeterRift::StaticGetClass(void)

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
  uVar2 = BossProgressMeter::StaticGetClass();
  (*pcVar3)(plVar1,"BossProgressMeterRift",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossProgressMeterRift::GetClass() const */

long * BossProgressMeterRift::GetClass(void)

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
  uVar2 = BossProgressMeter::StaticGetClass();
  (*pcVar3)(plVar1,"BossProgressMeterRift",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossProgressMeterRift::BossProgressMeterRift() */

void __thiscall BossProgressMeterRift::BossProgressMeterRift(BossProgressMeterRift *this)

{
  BossProgressMeter::BossProgressMeter((BossProgressMeter *)this);
  this[0x1c3] = (BossProgressMeterRift)0x0;
  *(undefined ***)this = &PTR_GetClass_0667c830;
  *(undefined ***)(this + 0x10) = &PTR__BossProgressMeterRift_0667c9e0;
  return;
}


/* BossProgressMeterRift::StaticNew() */

BossProgressMeterRift * BossProgressMeterRift::StaticNew(void)

{
  BossProgressMeterRift *this;
  
  this = ::operator_new(0x1c8);
  BossProgressMeterRift(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossProgressMeterRift::registerForEvents() */

void __thiscall BossProgressMeterRift::registerForEvents(BossProgressMeterRift *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BossProgressMeter::registerForEvents((BossProgressMeter *)this);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEnterLootPhase);
  Sexy::Delegate0::Delegate0<BossProgressMeterRift,void(BossProgressMeterRift::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::BossRiftEnterLootPhase,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossProgressMeterRift::getMeterFillImage() */

void BossProgressMeterRift::getMeterFillImage(void)

{
  BossProgressMeter *in_x0;
  
  if (in_x0[0x1c3] == (BossProgressMeter)0x0) {
    BossProgressMeter::getMeterFillImage(in_x0);
    return;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aab818);
  return;
}


/* BossProgressMeterRift::~BossProgressMeterRift() */

void __thiscall BossProgressMeterRift::~BossProgressMeterRift(BossProgressMeterRift *this)

{
  *(undefined ***)this = &PTR_GetClass_0667c830;
  *(undefined ***)(this + 0x10) = &PTR__BossProgressMeterRift_0667c9e0;
  BossProgressMeter::~BossProgressMeter((BossProgressMeter *)this);
  return;
}


/* non-virtual thunk to BossProgressMeterRift::~BossProgressMeterRift() */

void __thiscall BossProgressMeterRift::~BossProgressMeterRift(BossProgressMeterRift *this)

{
  ~BossProgressMeterRift(this + -0x10);
  return;
}


/* BossProgressMeterRift::~BossProgressMeterRift() */

void __thiscall BossProgressMeterRift::~BossProgressMeterRift(BossProgressMeterRift *this)

{
  ~BossProgressMeterRift(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BossProgressMeterRift::~BossProgressMeterRift() */

void __thiscall BossProgressMeterRift::~BossProgressMeterRift(BossProgressMeterRift *this)

{
  ~BossProgressMeterRift(this + -0x10);
  return;
}

