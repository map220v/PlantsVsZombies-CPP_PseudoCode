// Class: UISteamMiniGameScore


/* UISteamMiniGameScore::~UISteamMiniGameScore() */

void __thiscall UISteamMiniGameScore::~UISteamMiniGameScore(UISteamMiniGameScore *this)

{
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_067339d0;
  *(undefined ***)(this + 0x10) = &PTR__UISteamMiniGameScore_06733b70;
  FUN_05476c50(this + 0x1b8);
  FUN_05476c50(this + 0x180);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UISteamMiniGameScore::~UISteamMiniGameScore() */

void __thiscall UISteamMiniGameScore::~UISteamMiniGameScore(UISteamMiniGameScore *this)

{
  ~UISteamMiniGameScore(this + -0x10);
  return;
}


/* UISteamMiniGameScore::~UISteamMiniGameScore() */

void __thiscall UISteamMiniGameScore::~UISteamMiniGameScore(UISteamMiniGameScore *this)

{
  ~UISteamMiniGameScore(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISteamMiniGameScore::~UISteamMiniGameScore() */

void __thiscall UISteamMiniGameScore::~UISteamMiniGameScore(UISteamMiniGameScore *this)

{
  ~UISteamMiniGameScore(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISteamMiniGameScore::StaticClassInit() */

void UISteamMiniGameScore::StaticClassInit(void)

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
    std::string::string(asStack_10,"UISteamMiniGameScore");
    (*pcVar2)(plVar1,asStack_10,FUN_03b5a5b8,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISteamMiniGameScore::StaticGetClass() */

long * UISteamMiniGameScore::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UISteamMiniGameScore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISteamMiniGameScore::GetClass() const */

long * UISteamMiniGameScore::GetClass(void)

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
  (*pcVar3)(plVar1,"UISteamMiniGameScore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISteamMiniGameScore::setTargetScore(unsigned int) */

void __thiscall UISteamMiniGameScore::setTargetScore(UISteamMiniGameScore *this,uint param_1)

{
  if (**(uint **)(this + 0x168) != param_1) {
    **(uint **)(this + 0x168) = param_1;
  }
  *(uint *)(this + 0x174) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISteamMiniGameScore::UISteamMiniGameScore() */

void __thiscall UISteamMiniGameScore::UISteamMiniGameScore(UISteamMiniGameScore *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar8 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  iVar2 = 0;
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  ppuVar7 = &PTR__UISteamMiniGameScore_06733b70;
  *(undefined ***)this = &PTR_GetClass_067339d0;
  *(undefined ***)(this + 0x10) = &PTR__UISteamMiniGameScore_06733b70;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  FUN_05476574(this + 0x180);
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Color::Color((Color *)(this + 0x198));
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  auVar8 = FUN_05476574(this + 0x1b8);
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar8._0_8_,auVar8._8_8_,(LineBreakCategory *)ppuVar7,in_x3,in_x4);
  if (cVar1 != '\0') {
    iVar2 = FUN_03b5a2c0(0xffffff6a);
  }
  iVar3 = FUN_03b5a2c0(0x1e);
  iVar4 = FUN_03b5a2c0(0xffffffec);
  iVar5 = FUN_03b5a2c0(0x14a);
  iVar6 = FUN_03b5a2c0(0x6e);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3 + iVar2,iVar4,iVar5,iVar6);
  *(undefined8 *)(this + 0x188) = local_18;
  *(undefined8 *)(this + 400) = uStack_10;
  iVar3 = FUN_03b5a2c0(0x1e);
  iVar4 = FUN_03b5a2c0(0x14);
  iVar5 = FUN_03b5a2c0(0x14a);
  iVar6 = FUN_03b5a2c0(0x6e);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3 + iVar2,iVar4,iVar5,iVar6);
  *(undefined8 *)(this + 0x1a8) = local_18;
  *(undefined8 *)(this + 0x1b0) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,2);
  *(undefined8 *)(this + 0x198) = local_18;
  *(undefined8 *)(this + 0x1a0) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISteamMiniGameScore::StaticNew() */

UISteamMiniGameScore * UISteamMiniGameScore::StaticNew(void)

{
  UISteamMiniGameScore *this;
  
  this = ::operator_new(0x1c0);
  UISteamMiniGameScore(this);
  return this;
}


/* UISteamMiniGameScore::updateScoreboard() */

void __thiscall UISteamMiniGameScore::updateScoreboard(UISteamMiniGameScore *this)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(this + 0x170);
  if (iVar1 != *(int *)(this + 0x174)) {
    if (*(int *)(this + 0x174) - iVar1 < 0) {
      *(int *)(this + 0x170) = iVar1 + -2;
      puVar2 = std::max<unsigned_int>((uint *)(this + 0x170),(uint *)(this + 0x174));
      *(uint *)(this + 0x170) = *puVar2;
      return;
    }
    *(int *)(this + 0x170) = iVar1 + 2;
    puVar2 = eastl::min_alt<unsigned_int>((uint *)(this + 0x170),(uint *)(this + 0x174));
    *(uint *)(this + 0x170) = *puVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISteamMiniGameScore::Draw(Sexy::Graphics*) */

void __thiscall UISteamMiniGameScore::Draw(UISteamMiniGameScore *this,Graphics *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  GraphicsAutoState aGStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  updateScoreboard(this);
  FUN_05478178(awStack_20,L"[CANNON_SCORE]",auStack_38);
  Sexy::StrFormat(L"%d",awStack_28,(ulong)*(uint *)(this + 0x170));
  TodReplaceString(awStack_20,L"{SCORE}",awStack_28);
  FUN_054766c8(this + 0x180,aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_20);
  nop();
  FUN_05478178(awStack_20,L"[STEAM_MINIGAME_GOAL]",auStack_38);
  Sexy::StrFormat(L"%d",awStack_28,(ulong)*(uint *)(this + 0x178));
  TodReplaceString(awStack_20,L"{NUMBER}",awStack_28);
  FUN_054766c8(this + 0x1b8,aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_20);
  nop();
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x180,this + 0x188,uVar1,aIStack_18,5,1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_Outline);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x198));
  WriteWordInRect(param_1,this + 0x1b8,this + 0x1a8,uVar1,aIStack_18,5,1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UISteamMiniGameScore::Draw(Sexy::Graphics*) */

void __thiscall UISteamMiniGameScore::Draw(UISteamMiniGameScore *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

