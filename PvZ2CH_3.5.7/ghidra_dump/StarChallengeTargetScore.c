// Class: StarChallengeTargetScore


/* StarChallengeTargetScore::onScoreCalculated(int, std::string const&, float) */

void StarChallengeTargetScore::onScoreCalculated(int param_1,string *param_2,float param_3)

{
  *(float *)((ulong)(uint)param_1 + 0x24) = param_3;
  *(float *)((ulong)(uint)param_1 + 0x20) = (float)(int)param_2;
  return;
}


/* StarChallengeTargetScore::gameplayEnded() */

void __thiscall StarChallengeTargetScore::gameplayEnded(StarChallengeTargetScore *this)

{
  char cVar1;
  
  cVar1 = FUN_038773b8(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTargetScore::StaticClassInit() */

void StarChallengeTargetScore::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeTargetScore");
    (*pcVar2)(plVar1,asStack_10,FUN_03877b2c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeTargetScore::StaticGetClass() */

long * StarChallengeTargetScore::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeTargetScore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeTargetScore::StarChallengeTargetScore() */

void __thiscall StarChallengeTargetScore::StarChallengeTargetScore(StarChallengeTargetScore *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066adc30;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* StarChallengeTargetScore::StaticNew() */

StarChallengeTargetScore * StarChallengeTargetScore::StaticNew(void)

{
  StarChallengeTargetScore *this;
  
  this = ::operator_new(0x28);
  StarChallengeTargetScore(this);
  return this;
}


/* StarChallengeTargetScore::~StarChallengeTargetScore() */

void __thiscall StarChallengeTargetScore::~StarChallengeTargetScore(StarChallengeTargetScore *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066adc30;
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeTargetScore::~StarChallengeTargetScore() */

void __thiscall StarChallengeTargetScore::~StarChallengeTargetScore(StarChallengeTargetScore *this)

{
  ~StarChallengeTargetScore(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeTargetScore::onScoreUpdated(int, float) */

void __thiscall
StarChallengeTargetScore::onScoreUpdated(StarChallengeTargetScore *this,int param_1,float param_2)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  *(float *)(this + 0x24) = param_2;
  *(float *)(this + 0x20) = (float)param_1;
  cVar1 = FUN_038773b8(*(undefined4 *)(this + 0x1c));
  if ((cVar1 != '\0') &&
     (pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this),
     *(float *)(pRVar2 + 0x40) <= (float)param_1)) {
    Challenge::Complete((Challenge *)this);
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTargetScore::GetProgressDescription() const */

void StarChallengeTargetScore::GetProgressDescription(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::CommaSeparate((int)*(float *)(pRVar1 + 0x40));
  Sexy::CommaSeparate((int)*(float *)(in_x0 + 0x20));
  Sexy::StrFormat(L"[ %.1f / %.1f ]",(double)*(float *)(in_x0 + 0x20),
                  (double)*(float *)(pRVar1 + 0x40));
  FUN_05476c50(auStack_10);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTargetScore::GetDescription() const */

void StarChallengeTargetScore::GetDescription(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::CommaSeparate((int)*(float *)(pRVar1 + 0x40));
  Sexy::ToWString((string *)(pRVar1 + 0x48));
  TodReplaceString(awStack_10,L"{NUMBER}",awStack_50);
  FUN_05476c50(awStack_10);
  Sexy::CommaSeparate((int)*(float *)(in_x0 + 0x20));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_TARGET_SCORE_PLAYER_SCORE]",awStack_18);
  TodReplaceString(awStack_10,L"{NUMBER}",awStack_40);
  FUN_05476c50(awStack_10);
  nop();
  if (1.0 < *(float *)(in_x0 + 0x24)) {
    Sexy::StrFormat("%.2f",awStack_10,(double)*(float *)(in_x0 + 0x24));
    Sexy::ToWString((string *)awStack_10);
    std::string::~string((string *)awStack_10);
    FUN_05478178(awStack_28,L"[STARCHALLENGE_TARGET_SCORE_BONUS_PLANTS]",auStack_58);
    TodReplaceString(awStack_28,L"{NUMBER}",awStack_30);
    std::operator+(awStack_20,L"\n");
    std::operator+(awStack_18,awStack_38);
    FUN_054766c8(awStack_38,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
    nop();
    FUN_05476c50(awStack_30);
  }
  if (*(float *)(in_x0 + 0x20) <= 0.0) {
    FUN_05478178(awStack_10,&DAT_056f11a8,awStack_18);
    std::operator+(awStack_10,awStack_48);
    FUN_05476c50(awStack_10);
    nop();
  }
  else {
    std::operator+(awStack_38,L"\n");
    std::operator+(awStack_10,awStack_48);
    FUN_05476c50(awStack_10);
  }
  FUN_05476c50(awStack_38);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_48);
  FUN_05476c50(awStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTargetScore::registerForEvents() */

void __thiscall StarChallengeTargetScore::registerForEvents(StarChallengeTargetScore *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeTargetScore,void(StarChallengeTargetScore::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayWinConditionMet,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onScoreUpdated);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<int,float,Sexy::CBMemberTranslatorX<StarChallengeTargetScore,void(StarChallengeTargetScore::*)(int,float)>>
            ((MessageRouter *)puVar1,Message::ScoreUpdated,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onScoreCalculated);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<int,std::string_const&,float,Sexy::CBMemberTranslatorX<StarChallengeTargetScore,void(StarChallengeTargetScore::*)(int,std::string_const&,float)>>
            ((MessageRouter *)puVar1,Message::ScoreCalculated,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

