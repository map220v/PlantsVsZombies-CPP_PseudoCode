// Class: BossChallengeTimer


/* BossChallengeTimer::GetTime() */

undefined4 __thiscall BossChallengeTimer::GetTime(BossChallengeTimer *this)

{
  return *(undefined4 *)(this + 0x16c);
}


/* BossChallengeTimer::~BossChallengeTimer() */

void __thiscall BossChallengeTimer::~BossChallengeTimer(BossChallengeTimer *this)

{
  *(undefined ***)this = &PTR_GetClass_06976c40;
  *(undefined ***)(this + 0x10) = &PTR__BossChallengeTimer_06976de0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to BossChallengeTimer::~BossChallengeTimer() */

void __thiscall BossChallengeTimer::~BossChallengeTimer(BossChallengeTimer *this)

{
  ~BossChallengeTimer(this + -0x10);
  return;
}


/* BossChallengeTimer::~BossChallengeTimer() */

void __thiscall BossChallengeTimer::~BossChallengeTimer(BossChallengeTimer *this)

{
  ~BossChallengeTimer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BossChallengeTimer::~BossChallengeTimer() */

void __thiscall BossChallengeTimer::~BossChallengeTimer(BossChallengeTimer *this)

{
  ~BossChallengeTimer(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeTimer::StaticClassInit() */

void BossChallengeTimer::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossChallengeTimer");
    (*pcVar2)(plVar1,asStack_10,FUN_04bb2a38,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallengeTimer::StaticGetClass() */

long * BossChallengeTimer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeTimer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeTimer::GetClass() const */

long * BossChallengeTimer::GetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeTimer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeTimer::BossChallengeTimer() */

void __thiscall BossChallengeTimer::BossChallengeTimer(BossChallengeTimer *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  this[0x163] = (BossChallengeTimer)0x0;
  *(undefined ***)this = &PTR_GetClass_06976c40;
  *(undefined ***)(this + 0x10) = &PTR__BossChallengeTimer_06976de0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  return;
}


/* BossChallengeTimer::StaticNew() */

BossChallengeTimer * BossChallengeTimer::StaticNew(void)

{
  BossChallengeTimer *this;
  
  this = ::operator_new(0x170);
  BossChallengeTimer(this);
  return this;
}


/* BossChallengeTimer::Reset() */

void __thiscall BossChallengeTimer::Reset(BossChallengeTimer *this)

{
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  return;
}


/* BossChallengeTimer::Start(bool) */

void __thiscall BossChallengeTimer::Start(BossChallengeTimer *this,bool param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  this[0x163] = (BossChallengeTimer)param_1;
  if (!param_1) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x168) = fVar1;
    *(float *)(this + 0x16c) = fVar1 - *(float *)(this + 0x164);
    return;
  }
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x164) = uVar2;
  *(undefined4 *)(this + 0x16c) = 0;
  return;
}


/* BossChallengeTimer::onUpdate() */

void __thiscall BossChallengeTimer::onUpdate(BossChallengeTimer *this)

{
  float fVar1;
  
  if (this[0x163] != (BossChallengeTimer)0x0) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x16c) = fVar1 - *(float *)(this + 0x164);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeTimer::Draw(Sexy::Graphics*) */

void __thiscall BossChallengeTimer::Draw(BossChallengeTimer *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int extraout_w1;
  undefined1 auStack_50 [8];
  GraphicsAutoState aGStack_48 [8];
  wstring awStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  wstring awStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  local_38 = 0;
  local_34 = 0;
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b89a38);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  uVar1 = 2;
  if (3600.0 <= *(float *)(this + 0x16c)) {
    uVar1 = 0;
  }
  StringHelper::ToTimeString((StringHelper *)(ulong)uVar1,*(float *)(this + 0x16c),extraout_w1);
  FUN_05478178(awStack_28,L"[BOSS_CHALLENGE_TIME]",auStack_50);
  TodReplaceString(awStack_28,L"{TIME}",awStack_40);
  FUN_054766c8(awStack_40,aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_28);
  nop();
  iVar2 = FUN_04bb28f0(5);
  iVar3 = FUN_04bb28f0(3);
  iVar4 = FUN_04bb28f0(100);
  Sexy::Insets::Insets((Insets *)awStack_28,iVar2,iVar3,local_30,iVar4);
  uVar5 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,awStack_40,awStack_28,uVar5,aIStack_18,0,1);
  FUN_05476c50(awStack_40);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BossChallengeTimer::Draw(Sexy::Graphics*) */

void __thiscall BossChallengeTimer::Draw(BossChallengeTimer *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

