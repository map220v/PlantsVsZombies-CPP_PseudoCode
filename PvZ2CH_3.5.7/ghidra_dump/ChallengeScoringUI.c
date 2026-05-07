// Class: ChallengeScoringUI


/* ChallengeScoringUI::~ChallengeScoringUI() */

void __thiscall ChallengeScoringUI::~ChallengeScoringUI(ChallengeScoringUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7420;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeScoringUI_066a75d0;
  if (*(long **)(this + 0x1d8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1d8) + 0x18))();
    *(undefined8 *)(this + 0x1d8) = 0;
  }
  FUN_05476c50(this + 0x1d0);
  FUN_05476c50(this + 0x1c8);
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengeScoringUI::~ChallengeScoringUI() */

void __thiscall ChallengeScoringUI::~ChallengeScoringUI(ChallengeScoringUI *this)

{
  ~ChallengeScoringUI(this + -0x10);
  return;
}


/* ChallengeScoringUI::~ChallengeScoringUI() */

void __thiscall ChallengeScoringUI::~ChallengeScoringUI(ChallengeScoringUI *this)

{
  ~ChallengeScoringUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeScoringUI::~ChallengeScoringUI() */

void __thiscall ChallengeScoringUI::~ChallengeScoringUI(ChallengeScoringUI *this)

{
  ~ChallengeScoringUI(this + -0x10);
  return;
}


/* ChallengeScoringUI::onScoreChallengeCompleted() */

void __thiscall ChallengeScoringUI::onScoreChallengeCompleted(ChallengeScoringUI *this)

{
  char cVar1;
  
  cVar1 = JoustUtils::IsPlayingJoustLevel();
  if (cVar1 == '\0') {
    this[0x1bf] = (ChallengeScoringUI)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeScoringUI::StaticClassInit() */

void ChallengeScoringUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeScoringUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03848014,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeScoringUI::StaticGetClass() */

long * ChallengeScoringUI::StaticGetClass(void)

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
  uVar2 = ChallengeUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeScoringUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeScoringUI::GetClass() const */

long * ChallengeScoringUI::GetClass(void)

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
  uVar2 = ChallengeUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeScoringUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeScoringUI::updateDrawBoxVisibility() */

void __thiscall ChallengeScoringUI::updateDrawBoxVisibility(ChallengeScoringUI *this)

{
  ChallengeScoringUI CVar1;
  
  CVar1 = (ChallengeScoringUI)0x0;
  if (this[0x1bd] != (ChallengeScoringUI)0x0) {
    CVar1 = this[0x1be];
  }
  FUN_03847c88(this + 0x1a4,CVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeScoringUI::drawScore(Sexy::Graphics*, Sexy::Color&) */

void __thiscall
ChallengeScoringUI::drawScore(ChallengeScoringUI *this,Graphics *param_1,Color *param_2)

{
  ChallengeScoringUI CVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::CommaSeparate64(*(long *)(this + 0x1b0));
  TodReplaceString((wstring *)(this + 0x1c8),L"{SCORE}",(wstring *)aIStack_18);
  FUN_05476c50(aIStack_18);
  CVar1 = this[0x1be];
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  iVar2 = FUN_03847ecc(10);
  iVar3 = FUN_03847ecc(1);
  iVar4 = FUN_03847ecc(0xe6);
  FUN_05477b24(auStack_20,auStack_28);
  Sexy::Insets::Insets(aIStack_18,(Insets *)param_2);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar2,(float)iVar3,(float)iVar4,uVar5,param_1,auStack_20,
             (byte)CVar1 ^ 1,aIStack_18,0);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeScoringUI::onUpdate() */

void __thiscall ChallengeScoringUI::onUpdate(ChallengeScoringUI *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x1d8);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_RealT();
    fVar2 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeScoringUI::ChallengeScoringUI() */

void __thiscall ChallengeScoringUI::ChallengeScoringUI(ChallengeScoringUI *this)

{
  undefined *this_00;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined ***)this = &PTR_GetClass_066a7420;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeScoringUI_066a75d0;
  FUN_05476574(this + 0x1c8);
  FUN_05476574(this + 0x1d0);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = 0x3f800000;
  Sexy::Point::Point((Point *)local_50,0,0);
  *(undefined8 *)(this + 0x164) = local_50[0];
  this[0x1bd] = (ChallengeScoringUI)0x1;
  *(undefined4 *)(this + 0x16c) = 5;
  this[0x1be] = (ChallengeScoringUI)0x1;
  this[0x1c0] = (ChallengeScoringUI)0x1;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  this[0x1c1] = (ChallengeScoringUI)0x0;
  this[0x1bc] = (ChallengeScoringUI)0x0;
  TodStringTranslate(L"[RIFT_CANNON_SCORE]");
  FUN_054766c8(this + 0x1c8,(Point *)local_50);
  FUN_05476c50((Point *)local_50);
  FUN_054772c4(this + 0x1d0,&DAT_05709fa0);
  this[0x1bf] = (ChallengeScoringUI)0x0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onScoreChallengeCompleted);
  Sexy::Delegate0::Delegate0<ChallengeScoringUI,void(ChallengeScoringUI::*)()>
            (aDStack_38,(Point *)local_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ScoreChallengeCompleted,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeScoringUI::StaticNew() */

ChallengeScoringUI * ChallengeScoringUI::StaticNew(void)

{
  ChallengeScoringUI *this;
  
  this = ::operator_new(0x1e0);
  ChallengeScoringUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeScoringUI::drawMultiplierArea(Sexy::Graphics*, Sexy::Color&) */

void __thiscall
ChallengeScoringUI::drawMultiplierArea(ChallengeScoringUI *this,Graphics *param_1,Color *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *this_00;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  wstring awStack_58 [8];
  GraphicsAutoState aGStack_50 [8];
  Insets local_48 [16];
  Insets local_38 [16];
  Insets aIStack_28 [4];
  int local_24;
  int local_1c;
  GraphicsAutoState local_18 [4];
  int iStack_14;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(local_48,100,100,100,0xff);
  Sexy::Insets::Insets(local_38,0xff,0xff,0xff,0xff);
  if (this[0x1bc] != (ChallengeScoringUI)0x0) {
    Sexy::Insets::Insets((Insets *)local_18,0x80,0x14,0x14,0xff);
    Sexy::Insets::Insets((Insets *)local_18,0xff,0x50,0x50,0xff);
  }
  iVar1 = FUN_03847c84(*(undefined4 *)(this + 0x38));
  iVar2 = FUN_03847ecc(0xffffffd6);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_03847ecc(0xfffffffa);
  if (this[0x1c1] == (ChallengeScoringUI)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab4268);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2);
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab4268);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab4268);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    fVar10 = *(float *)(this + 0x1ac);
    if (fVar10 == 0.0) {
      if (*(int *)(this + 0x1b8) < 2) {
        fVar9 = 1.0;
      }
      else {
        fVar9 = 0.0;
        fVar10 = 1.0;
      }
    }
    else {
      fVar9 = 1.0 - fVar10;
    }
    fVar11 = *(float *)(this + 0x1a8);
    Sexy::Insets::Insets((Insets *)local_18,aIStack_28);
    iStack_14 = (int)((float)local_24 + (float)local_1c * fVar9);
    local_c = local_1c - iStack_14;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
    Sexy::Graphics::SetClipRect(param_1,(TRect *)local_18);
    Sexy::Graphics::SetColor(param_1,(Color *)local_48);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab4240);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
    iStack_14 = (int)((1.0 - fVar11 * fVar10) * (float)local_1c);
    local_c = local_1c - iStack_14;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
    Sexy::Graphics::SetClipRect(param_1,(TRect *)local_18);
    Sexy::Graphics::SetColor(param_1,(Color *)local_38);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab4240);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
    if (this[0x1c1] == (ChallengeScoringUI)0x0) {
      Sexy::StrFormat(L"%d",awStack_58,(ulong)*(uint *)(this + 0x1b8));
      TodReplaceString((wstring *)(this + 0x1d0),L"{SCORE}",awStack_58);
      uVar8 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
      iVar3 = FUN_03847ecc(0);
      iVar4 = FUN_03847ecc(7);
      pLVar7 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab4268);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
      FUN_05477b24(aIStack_28,aGStack_50);
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)param_2);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)(iVar3 + iVar1),(float)(iVar4 + iVar2),(float)iVar5,uVar8,
                 param_1,aIStack_28,1,local_18,0);
      FUN_05476c50(aIStack_28);
      FUN_05476c50(aGStack_50);
      FUN_05476c50(awStack_58);
      goto LAB_03848ab0;
    }
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab4240);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2);
  Sexy::GraphicsAutoState::GraphicsAutoState(local_18,param_1);
  Sexy::Graphics::SetScale(param_1,2.0,2.0,0.0,0.0);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab4330);
  iVar3 = FUN_03847ecc(7);
  iVar4 = FUN_03847ecc(10);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar3 + iVar1) / 2,(iVar4 + iVar2) / 2);
  Sexy::GraphicsAutoState::~GraphicsAutoState(local_18);
LAB_03848ab0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeScoringUI::postDraw(Sexy::Graphics*) */

void __thiscall ChallengeScoringUI::postDraw(ChallengeScoringUI *this,Graphics *param_1)

{
  Insets local_38 [16];
  Insets local_28 [16];
  Insets local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(local_38,0xff,0xff,0xff,0xff);
  if (this[0x1bc] != (ChallengeScoringUI)0x0) {
    Sexy::Insets::Insets(local_18,0xff,200,200,0xff);
  }
  if (this[0x1c0] != (ChallengeScoringUI)0x0) {
    drawMultiplierArea(this,param_1,(Color *)local_38);
  }
  if (this[0x1bd] != (ChallengeScoringUI)0x0) {
    Sexy::Insets::Insets(local_28,local_38);
    if (this[0x1bf] != (ChallengeScoringUI)0x0) {
      Sexy::Insets::Insets(local_18,0,0xff,0,0xff);
    }
    drawScore(this,param_1,(Color *)local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeScoringUI::SetShowScoreValue(bool, bool) */

void __thiscall
ChallengeScoringUI::SetShowScoreValue(ChallengeScoringUI *this,bool param_1,bool param_2)

{
  this[0x1bd] = (ChallengeScoringUI)param_1;
  this[0x1be] = (ChallengeScoringUI)param_2;
  updateDrawBoxVisibility(this);
  return;
}


/* ChallengeScoringUI::SetScoreFormatString(std::wstring) */

void ChallengeScoringUI::SetScoreFormatString(ChallengeScoringUI *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x1c8);
  updateDrawBoxVisibility(param_1);
  return;
}


/* ChallengeScoringUI::SetMultiplierFormatString(std::wstring) */

void ChallengeScoringUI::SetMultiplierFormatString(ChallengeScoringUI *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x1d0);
  updateDrawBoxVisibility(param_1);
  return;
}

