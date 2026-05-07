// Class: Effect_ChallengeFailedMessage


/* Effect_ChallengeFailedMessage::Effect_ChallengeFailedMessage() */

void __thiscall
Effect_ChallengeFailedMessage::Effect_ChallengeFailedMessage(Effect_ChallengeFailedMessage *this)

{
  undefined4 uVar1;
  
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675f450;
  FUN_05476574(this + 0xa0);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xa8) = uVar1;
  return;
}


/* Effect_ChallengeFailedMessage::StaticNew() */

Effect_ChallengeFailedMessage * Effect_ChallengeFailedMessage::StaticNew(void)

{
  Effect_ChallengeFailedMessage *this;
  
  this = ::operator_new(0xb0);
  Effect_ChallengeFailedMessage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ChallengeFailedMessage::StaticClassInit() */

void Effect_ChallengeFailedMessage::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_ChallengeFailedMessage");
    (*pcVar2)(plVar1,asStack_10,FUN_03cccb1c,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ChallengeFailedMessage::StaticGetClass() */

long * Effect_ChallengeFailedMessage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ChallengeFailedMessage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ChallengeFailedMessage::GetClass() const */

long * Effect_ChallengeFailedMessage::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ChallengeFailedMessage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ChallengeFailedMessage::SetMessage(std::wstring const&) */

void Effect_ChallengeFailedMessage::SetMessage(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0xa0);
  return;
}


/* Effect_ChallengeFailedMessage::~Effect_ChallengeFailedMessage() */

void __thiscall
Effect_ChallengeFailedMessage::~Effect_ChallengeFailedMessage(Effect_ChallengeFailedMessage *this)

{
  *(undefined ***)this = &PTR_GetClass_0675f450;
  FUN_05476c50(this + 0xa0);
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_ChallengeFailedMessage::~Effect_ChallengeFailedMessage() */

void __thiscall
Effect_ChallengeFailedMessage::~Effect_ChallengeFailedMessage(Effect_ChallengeFailedMessage *this)

{
  ~Effect_ChallengeFailedMessage(this);
  AK::FreeHook(this);
  return;
}


/* Effect_ChallengeFailedMessage::onInitialized() */

void __thiscall Effect_ChallengeFailedMessage::onInitialized(Effect_ChallengeFailedMessage *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xa8) = uVar1;
  return;
}


/* Effect_ChallengeFailedMessage::onUpdate() */

void __thiscall Effect_ChallengeFailedMessage::onUpdate(Effect_ChallengeFailedMessage *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 - *(float *)(this + 0xa8) <= 4.75) {
    return;
  }
  StandaloneEffect::triggerCompletion((StandaloneEffect *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ChallengeFailedMessage::onDraw(Sexy::Graphics*) */

void __thiscall
Effect_ChallengeFailedMessage::onDraw(Effect_ChallengeFailedMessage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  PrimeTypeface *pPVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  GraphicsAutoState aGStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  Color aCStack_38 [16];
  float local_28 [4];
  float local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  pfVar3 = (float *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  FUN_05477b24((Insets *)&local_18,this + 0xa0);
  iVar1 = Sexy::PrimeTypeface::SizeString_Line(pPVar4,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  fVar6 = (float)Sexy::PrimeTypeface::GetHeight(pPVar4);
  Sexy::Insets::Insets
            ((Insets *)&local_58,(int)(*pfVar3 - (float)(iVar1 / 2)),
             (int)(pfVar3[1] - (float)((int)fVar6 / 2)),iVar1,(int)fVar6);
  Sexy::Color::Color((Color *)&local_48,2);
  fVar6 = (float)PVZ_T();
  fVar6 = fVar6 - *(float *)(this + 0xa8);
  if (fVar6 < 0.5) {
    Sexy::Color::Color((Color *)&local_18,1);
    local_48 = CONCAT44(uStack_14,local_18);
    uStack_40 = uStack_10;
    iVar1 = FUN_03ccc968(100);
    local_28[0] = (float)-iVar1;
    local_18 = 0.0;
    fVar7 = CurveLerp<float>(0,0x3f000000,fVar6,local_28,(Insets *)&local_18,3);
    local_28[0] = 0.0;
    local_18 = 1.0;
    fVar6 = CurveLerp<float>(0,0x3f000000,fVar6,local_28,(Insets *)&local_18,3);
    iVar1 = (int)(fVar6 * 255.0);
    local_54 = (int)(fVar7 + (float)local_54);
  }
  else if (fVar6 < 3.5) {
    fVar6 = (float)PVZ_T();
    local_28[0] = 0.0;
    local_18 = 1.0;
    fVar6 = CurveLerp<float>(0,0x40400000,(fVar6 - *(float *)(this + 0xa8)) - 0.5,(Color *)local_28,
                             (Insets *)&local_18,4);
    Sexy::Color::Color(aCStack_38,1);
    Sexy::Color::Color((Color *)local_28,2);
    Sexy::ColorLerp((Sexy *)&local_18,fVar6,aCStack_38,(Color *)local_28);
    local_48 = CONCAT44(uStack_14,local_18);
    uStack_40 = uStack_10;
    iVar1 = 0xff;
  }
  else {
    Sexy::Color::Color((Color *)&local_18,2);
    local_48 = CONCAT44(uStack_14,local_18);
    uStack_40 = uStack_10;
    fVar6 = (float)PVZ_T();
    local_28[0] = 0.0;
    fVar9 = (fVar6 - *(float *)(this + 0xa8)) - 3.5;
    iVar1 = FUN_03ccc968(100);
    local_18 = (float)iVar1;
    fVar6 = CurveLerp<float>(0,0x3fa00000,fVar9,local_28,(Insets *)&local_18,2);
    local_28[0] = 1.0;
    local_18 = 0.0;
    fVar7 = CurveLerp<float>(0,0x3fa00000,fVar9,local_28,(Insets *)&local_18,3);
    local_18 = 1.0;
    local_28[0] = 0.0;
    local_54 = (int)(fVar6 + (float)local_54);
    fVar6 = CurveEvaluate<float>(fVar9 * 0.8,local_28,(Insets *)&local_18,2);
    dVar8 = cos((double)(fVar9 * 12.566371));
    iVar2 = FUN_03ccc968(0x19);
    iVar1 = (int)(fVar7 * 255.0);
    local_58 = (int)((double)local_58 + dVar8 * (double)fVar6 * (double)iVar2);
  }
  uStack_40 = CONCAT44(iVar1,(undefined4)uStack_40);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  pPVar4 = (PrimeTypeface *)(float)local_58;
  fVar6 = (float)local_54;
  FUN_05477b24(local_28,this + 0xa0);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_48);
  Sexy::PrimeTypeface::DrawString_Line
            (pPVar4,fVar6,(float)local_50,uVar5,param_1,local_28,1,(Insets *)&local_18,0);
  FUN_05476c50(local_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

