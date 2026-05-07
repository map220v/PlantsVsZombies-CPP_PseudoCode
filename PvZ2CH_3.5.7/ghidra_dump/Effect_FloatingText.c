// Class: Effect_FloatingText


/* Effect_FloatingText::SetFadeInDuration(float) */

void __thiscall Effect_FloatingText::SetFadeInDuration(Effect_FloatingText *this,float param_1)

{
  *(float *)(this + 0xac) = param_1;
  return;
}


/* Effect_FloatingText::SetColor(Sexy::Color const&) */

void __thiscall Effect_FloatingText::SetColor(Effect_FloatingText *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xc0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_FloatingText::StaticClassInit() */

void Effect_FloatingText::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_FloatingText");
    (*pcVar2)(plVar1,asStack_10,FUN_03ccd8fc,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_FloatingText::StaticGetClass() */

long * Effect_FloatingText::StaticGetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_FloatingText",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_FloatingText::GetClass() const */

long * Effect_FloatingText::GetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_FloatingText",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_FloatingText::SetText(std::string const&) */

void __thiscall Effect_FloatingText::SetText(Effect_FloatingText *this,string *param_1)

{
  undefined1 auStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)param_1,___stack_chk_guard);
  FUN_054766c8(this + 0xb0,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_FloatingText::SetText(std::wstring const&) */

void Effect_FloatingText::SetText(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0xb0);
  return;
}


/* Effect_FloatingText::SetStyle(FloatingTextStyle) */

void __thiscall Effect_FloatingText::SetStyle(Effect_FloatingText *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x134) = param_2;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_FloatingText::SetMotion(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&) */

void __thiscall
Effect_FloatingText::SetMotion(Effect_FloatingText *this,SexyVector3 *param_1,SexyVector3 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_03ccd35c(*(undefined4 *)param_1);
  fVar3 = (float)FUN_03ccd35c(*(float *)(param_1 + 4) - *(float *)(param_1 + 8));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar2,fVar3);
  uVar4 = *(undefined4 *)param_2;
  *(undefined8 *)(this + 0xf0) = local_10;
  fVar2 = (float)FUN_03ccd35c(uVar4);
  fVar3 = (float)FUN_03ccd35c(*(float *)(param_2 + 4) - *(float *)(param_2 + 8));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar2,fVar3);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf8) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_FloatingText::SetScale(Sexy::FPoint) */

void __thiscall Effect_FloatingText::SetScale(Effect_FloatingText *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0xd0) = *param_2;
  return;
}


/* Effect_FloatingText::SetFinalScale(Sexy::FPoint) */

void __thiscall Effect_FloatingText::SetFinalScale(Effect_FloatingText *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0xd8) = *param_2;
  this[0xe1] = (Effect_FloatingText)0x1;
  return;
}


/* Effect_FloatingText::ClearFinalScale() */

void __thiscall Effect_FloatingText::ClearFinalScale(Effect_FloatingText *this)

{
  this[0xe1] = (Effect_FloatingText)0x0;
  return;
}


/* Effect_FloatingText::SetInitScale(Sexy::FPoint) */

void __thiscall Effect_FloatingText::SetInitScale(Effect_FloatingText *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 200) = *param_2;
  this[0xe0] = (Effect_FloatingText)0x1;
  return;
}


/* Effect_FloatingText::ensureFontSetFromStyle() */

void __thiscall Effect_FloatingText::ensureFontSetFromStyle(Effect_FloatingText *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x138) == 0) {
    *(undefined8 *)(this + 0x140) = 0;
    switch(*(undefined4 *)(this + 0x134)) {
    case 1:
      uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZKaTong_42);
      *(undefined8 *)(this + 0x138) = uVar1;
      break;
    case 2:
      uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
      *(undefined8 *)(this + 0x138) = uVar1;
      break;
    case 3:
      uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_Outline);
      *(undefined8 *)(this + 0x138) = uVar1;
      break;
    case 4:
      uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
      *(undefined8 *)(this + 0x138) = uVar1;
      break;
    case 5:
    case 6:
    case 7:
      uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
      *(undefined8 *)(this + 0x138) = uVar1;
      break;
    case 8:
      uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
      *(undefined8 *)(this + 0x138) = uVar1;
      uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
      *(undefined8 *)(this + 0x140) = uVar1;
      break;
    case 9:
      uVar1 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
      *(undefined8 *)(this + 0x138) = uVar1;
      break;
    case 10:
      uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_46_HardShadow)
      ;
      *(undefined8 *)(this + 0x138) = uVar1;
      break;
    case 0xb:
      uVar1 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_32_ThickOutline);
      *(undefined8 *)(this + 0x138) = uVar1;
    }
  }
  return;
}


/* Effect_FloatingText::SetTextAsParagraph(Sexy::Point) */

void __thiscall
Effect_FloatingText::SetTextAsParagraph(Effect_FloatingText *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0xe4) = *param_2;
  this[0xec] = (Effect_FloatingText)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_FloatingText::SetScale(float) */

void __thiscall Effect_FloatingText::SetScale(Effect_FloatingText *this,float param_1)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec2::DVec2((DVec2 *)&local_10,param_1,param_1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xd0) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_FloatingText::onInitialized() */

void __thiscall Effect_FloatingText::onInitialized(Effect_FloatingText *this)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0xb8) = local_18;
  *(undefined8 *)(this + 0xc0) = uStack_10;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xa4) = uVar1;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  DVec2::DVec2((DVec2 *)&local_18,1.0,1.0);
  *(undefined8 *)(this + 0xd0) = local_18;
  DVec2::DVec2((DVec2 *)&local_18,1.0,1.0);
  *(undefined8 *)(this + 200) = local_18;
  DVec2::DVec2((DVec2 *)&local_18,1.0,1.0);
  this[0xe0] = (Effect_FloatingText)0x0;
  *(undefined8 *)(this + 0xd8) = local_18;
  this[0xe1] = (Effect_FloatingText)0x0;
  this[0xec] = (Effect_FloatingText)0x0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  this[0x130] = (Effect_FloatingText)0x0;
  *(undefined4 *)(this + 0xa0) = uVar1;
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_FloatingText::SetDuration(float) */

void __thiscall Effect_FloatingText::SetDuration(Effect_FloatingText *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  if (fVar1 != param_1) {
    fVar1 = (float)PVZ_T();
    fVar1 = fVar1 + param_1;
  }
  *(float *)(this + 0xa4) = fVar1;
  return;
}


/* Effect_FloatingText::Effect_FloatingText() */

void __thiscall Effect_FloatingText::Effect_FloatingText(Effect_FloatingText *this)

{
  undefined4 uVar1;
  
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675f520;
  FUN_05476574(this + 0xb0);
  Sexy::Color::Color((Color *)(this + 0xb8));
  PieceConfig::PieceConfig((PieceConfig *)(this + 200));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0xd0));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0xd8));
  Sexy::Point::Point((Point *)(this + 0xe4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xf0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xf8));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x100));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x118));
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  uVar1 = PVZ_EOT();
  this[0xe0] = (Effect_FloatingText)0x0;
  this[0xe1] = (Effect_FloatingText)0x0;
  this[0xec] = (Effect_FloatingText)0x0;
  this[0x130] = (Effect_FloatingText)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0xa0) = uVar1;
  *(undefined4 *)(this + 0xa4) = uVar1;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  return;
}


/* Effect_FloatingText::StaticNew() */

Effect_FloatingText * Effect_FloatingText::StaticNew(void)

{
  Effect_FloatingText *this;
  
  this = ::operator_new(0x148);
  Effect_FloatingText(this);
  return this;
}


/* Effect_FloatingText::~Effect_FloatingText() */

void __thiscall Effect_FloatingText::~Effect_FloatingText(Effect_FloatingText *this)

{
  *(undefined ***)this = &PTR_GetClass_0675f520;
  CurveSequence<Sexy::SexyVector3>::~CurveSequence
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x118));
  CurveSequence<Sexy::SexyVector3>::~CurveSequence
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x100));
  FUN_05476c50(this + 0xb0);
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_FloatingText::~Effect_FloatingText() */

void __thiscall Effect_FloatingText::~Effect_FloatingText(Effect_FloatingText *this)

{
  ~Effect_FloatingText(this);
  AK::FreeHook(this);
  return;
}


/* Effect_FloatingText::SetPositionCurve(CurveSequence<Sexy::SexyVector3> const&, bool) */

void __thiscall
Effect_FloatingText::SetPositionCurve(Effect_FloatingText *this,CurveSequence *param_1,bool param_2)

{
  CurveSequence<Sexy::SexyVector3>::operator=
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x100),param_1);
  this[0x130] = (Effect_FloatingText)param_2;
  return;
}


/* Effect_FloatingText::SetScaleCurve(CurveSequence<Sexy::SexyVector3> const&) */

void __thiscall Effect_FloatingText::SetScaleCurve(Effect_FloatingText *this,CurveSequence *param_1)

{
  CurveSequence<Sexy::SexyVector3>::operator=
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x118),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_FloatingText::onUpdate() */

void Effect_FloatingText::onUpdate(void)

{
  FPoint *this;
  char cVar1;
  int iVar2;
  StandaloneEffect *in_x0;
  SexyVector2 *this_00;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float in_s2;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  fVar5 = *(float *)(in_x0 + 0xa4);
  if (fVar5 < fVar3) {
    StandaloneEffect::triggerCompletion(in_x0);
  }
  this = (FPoint *)(in_x0 + 0xf0);
  fVar3 = (float)VectorNorm(this);
  if (0.0 < fVar3) {
    this_00 = (SexyVector2 *)StandaloneEffect::GetScreenSpaceOrigin(in_x0);
    fVar3 = (float)PVZ_Dt();
    local_18 = Sexy::SexyVector2::operator*((SexyVector2 *)this,fVar3);
    local_14 = fVar5;
    local_20 = Sexy::SexyVector2::operator+(this_00,(SexyVector2 *)&local_18);
    local_1c = fVar5;
    iVar2 = FUN_03ccd290(*(undefined4 *)(in_x0 + 0x1c),in_x0 + 0x20);
    StandaloneEffect::SetScreenSpaceOrigin(in_x0,(SexyVector2 *)&local_20,iVar2);
  }
  fVar3 = (float)PVZ_Dt();
  local_18 = Sexy::SexyVector2::operator*((SexyVector2 *)(in_x0 + 0xf8),fVar3);
  local_14 = fVar5;
  Sexy::TPoint<float>::operator+=((TPoint<float> *)this,(TPoint *)&local_18);
  fVar3 = (float)(**(code **)(*(long *)in_x0 + 0xa8))();
  cVar1 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence
                    ((CurveSequence<Sexy::SexyVector3> *)(in_x0 + 0x100),fVar3);
  if (cVar1 != '\0') {
    fVar3 = (float)(**(code **)(*(long *)in_x0 + 0xa8))();
    uVar4 = CurveSequence<Sexy::SexyVector3>::GetValueAt
                      ((CurveSequence<Sexy::SexyVector3> *)(in_x0 + 0x100),fVar3);
    local_18 = uVar4;
    local_14 = fVar5;
    local_10 = in_s2;
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_20);
    if (in_x0[0x130] == (StandaloneEffect)0x0) {
      local_20 = FUN_03ccd35c();
      fVar5 = (float)FUN_03ccd35c(fVar5 - local_10);
      uVar4 = local_20;
    }
    local_1c = fVar5;
    local_20 = uVar4;
    iVar2 = FUN_03ccd290(*(undefined4 *)(in_x0 + 0x1c),in_x0 + 0x20);
    StandaloneEffect::SetScreenSpaceOrigin(in_x0,(SexyVector2 *)&local_20,iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_FloatingText::DoEffectTimeline(char&, Sexy::FPoint&) */

void Effect_FloatingText::DoEffectTimeline(char *param_1,FPoint *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float *in_x2;
  float fVar4;
  float in_s1;
  float fVar5;
  float fVar6;
  undefined4 local_1c;
  float local_18;
  float fStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = (FPoint)0xff;
  lVar3 = *(long *)param_1;
  *(undefined8 *)in_x2 = *(undefined8 *)(param_1 + 0xd0);
  fVar4 = (float)(**(code **)(lVar3 + 0xa8))();
  cVar1 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence
                    ((CurveSequence<Sexy::SexyVector3> *)(param_1 + 0x118),fVar4);
  if (cVar1 != '\0') {
    fVar4 = (float)(**(code **)(*(long *)param_1 + 0xa8))(param_1);
    local_18 = (float)CurveSequence<Sexy::SexyVector3>::GetValueAt
                                ((CurveSequence<Sexy::SexyVector3> *)(param_1 + 0x118),fVar4);
    *in_x2 = *in_x2 * local_18;
    in_x2[1] = in_x2[1] * in_s1;
    fStack_14 = in_s1;
  }
  if (*(float *)(param_1 + 0xa8) != 0.0) {
    fVar5 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa8);
    fVar4 = (float)PVZ_T();
    if (fVar5 < fVar4) {
      fVar4 = (float)PVZ_T();
      local_18 = 0.0;
      fVar4 = (fVar4 - fVar5) / *(float *)(param_1 + 0xa8);
      local_1c = 0xff;
      iVar2 = CurveEvaluate<int>(fVar4,&local_1c,&local_18,4);
      *param_2 = SUB41(iVar2,0);
      if (param_1[0xe1] != '\0') {
        FUN_03cce494(&local_18,fVar4,param_1 + 0xd0,param_1 + 0xd8);
        *(ulong *)in_x2 = CONCAT44(fStack_14,local_18);
      }
      goto LAB_03cce7c0;
    }
  }
  fVar4 = *(float *)(param_1 + 0xac);
  fVar6 = *(float *)(param_1 + 0xa0);
  fVar5 = (float)PVZ_T();
  if (fVar5 < fVar4 + fVar6) {
    fVar4 = (float)PVZ_T();
    local_1c = 0;
    local_18 = 3.57331e-43;
    fVar4 = (fVar4 - *(float *)(param_1 + 0xa0)) / *(float *)(param_1 + 0xac);
    iVar2 = CurveEvaluate<int>(fVar4,&local_1c,&local_18,4);
    *param_2 = SUB41(iVar2,0);
    if (param_1[0xe0] != '\0') {
      FUN_03cce494(&local_18,fVar4,param_1 + 200,param_1 + 0xd0);
      *(ulong *)in_x2 = CONCAT44(fStack_14,local_18);
    }
  }
LAB_03cce7c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_FloatingText::onDraw(Sexy::Graphics*) */

void __thiscall Effect_FloatingText::onDraw(Effect_FloatingText *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  PrimeTypeface *pPVar7;
  Effect_FloatingText *local_58;
  FPoint local_49;
  GraphicsAutoState aGStack_48 [8];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [12];
  uint local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ensureFontSetFromStyle(this);
  if (*(long *)(this + 0x138) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
    PieceConfig::PieceConfig((PieceConfig *)&local_40);
    DoEffectTimeline((char *)this,&local_49);
    if (local_49 != (FPoint)0x0) {
      Sexy::Insets::Insets(aIStack_28,(Insets *)(this + 0xb8));
      local_1c = (uint)(byte)local_49;
      puVar3 = (undefined8 *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
                    /* WARNING: Load size is inaccurate */
      pPVar7._0_4_ = *puVar3;
      lVar5 = *(long *)(this + 0x140);
      fVar6 = *(float *)((long)puVar3 + 4);
      if (this[0xec] == (Effect_FloatingText)0x0) {
        Sexy::Graphics::SetScale(param_1,local_40,local_3c,(float)pPVar7._0_4_,fVar6);
        if (lVar5 != 0) {
          Sexy::Color::Color(aCStack_18,0);
          TodDrawString(param_1,this + 0xb0,(int)(float)pPVar7._0_4_,(int)fVar6,lVar5,aCStack_18,2);
        }
        local_58 = this + 0xb0;
        uVar4 = *(undefined8 *)(this + 0x138);
        Sexy::Insets::Insets((Insets *)aCStack_18,aIStack_28);
        TodDrawString(param_1,local_58,(int)(float)pPVar7._0_4_,(int)fVar6,uVar4,
                      (Insets *)aCStack_18,2);
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        Sexy::PrimeTextExtraParameters::PrimeTextExtraParameters
                  ((PrimeTextExtraParameters *)&local_38);
        iVar1 = *(int *)(this + 0xe4);
        iVar2 = *(int *)(this + 0xe8);
        uVar4 = *(undefined8 *)(this + 0x138);
        local_38 = local_40;
        local_34 = local_3c;
        FUN_05477b24(auStack_30,this + 0xb0);
        Sexy::Insets::Insets((Insets *)aCStack_18,aIStack_28);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  (pPVar7._0_4_,fVar6,(float)iVar1,(float)iVar2,uVar4,param_1,auStack_30,1,1,
                   (Insets *)aCStack_18,(PrimeTextExtraParameters *)&local_38);
        FUN_05476c50(auStack_30);
      }
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

