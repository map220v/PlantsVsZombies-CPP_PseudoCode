// Class: UIMazeMiniGameCredit


/* UIMazeMiniGameCredit::~UIMazeMiniGameCredit() */

void __thiscall UIMazeMiniGameCredit::~UIMazeMiniGameCredit(UIMazeMiniGameCredit *this)

{
  *(undefined ***)this = &PTR_GetClass_067653d0;
  *(undefined ***)(this + 0x10) = &PTR__UIMazeMiniGameCredit_06765570;
  FUN_05476c50(this + 0x1a0);
  FUN_05476c50(this + 0x168);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UIMazeMiniGameCredit::~UIMazeMiniGameCredit() */

void __thiscall UIMazeMiniGameCredit::~UIMazeMiniGameCredit(UIMazeMiniGameCredit *this)

{
  ~UIMazeMiniGameCredit(this + -0x10);
  return;
}


/* UIMazeMiniGameCredit::~UIMazeMiniGameCredit() */

void __thiscall UIMazeMiniGameCredit::~UIMazeMiniGameCredit(UIMazeMiniGameCredit *this)

{
  ~UIMazeMiniGameCredit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIMazeMiniGameCredit::~UIMazeMiniGameCredit() */

void __thiscall UIMazeMiniGameCredit::~UIMazeMiniGameCredit(UIMazeMiniGameCredit *this)

{
  ~UIMazeMiniGameCredit(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMazeMiniGameCredit::StaticClassInit() */

void UIMazeMiniGameCredit::StaticClassInit(void)

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
    std::string::string(asStack_10,"UIMazeMiniGameCredit");
    (*pcVar2)(plVar1,asStack_10,FUN_03d1dae0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMazeMiniGameCredit::StaticGetClass() */

long * UIMazeMiniGameCredit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UIMazeMiniGameCredit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIMazeMiniGameCredit::GetClass() const */

long * UIMazeMiniGameCredit::GetClass(void)

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
  (*pcVar3)(plVar1,"UIMazeMiniGameCredit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIMazeMiniGameCredit::SetLeftTarget(int) */

void __thiscall UIMazeMiniGameCredit::SetLeftTarget(UIMazeMiniGameCredit *this,int param_1)

{
  *(int *)(this + 0x164) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMazeMiniGameCredit::UIMazeMiniGameCredit() */

void __thiscall UIMazeMiniGameCredit::UIMazeMiniGameCredit(UIMazeMiniGameCredit *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar9 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  ppuVar8 = &PTR_GetClass_067653d0;
  *(undefined ***)this = &PTR_GetClass_067653d0;
  *(undefined ***)(this + 0x10) = &PTR__UIMazeMiniGameCredit_06765570;
  FUN_05476574(this + 0x168);
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Color::Color((Color *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  auVar9 = FUN_05476574(this + 0x1a0);
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar9._0_8_,auVar9._8_8_,(LineBreakCategory *)ppuVar8,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = 0;
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_03d1d998(0xffffff1a);
    iVar3 = FUN_03d1d998(0x50);
  }
  iVar4 = FUN_03d1d998(0x1e);
  iVar5 = FUN_03d1d998(0xffffffec);
  iVar6 = FUN_03d1d998(0x14a);
  iVar7 = FUN_03d1d998(0x6e);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar2,iVar5 + iVar3,iVar6,iVar7);
  *(undefined8 *)(this + 400) = local_18;
  *(undefined8 *)(this + 0x198) = uStack_10;
  iVar4 = FUN_03d1d998(0x1e);
  iVar5 = FUN_03d1d998(0x14);
  iVar6 = FUN_03d1d998(0x14a);
  iVar7 = FUN_03d1d998(0x6e);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar2,iVar5 + iVar3,iVar6,iVar7);
  *(undefined8 *)(this + 0x170) = local_18;
  *(undefined8 *)(this + 0x178) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,2);
  *(undefined8 *)(this + 0x180) = local_18;
  *(undefined8 *)(this + 0x188) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMazeMiniGameCredit::StaticNew() */

UIMazeMiniGameCredit * UIMazeMiniGameCredit::StaticNew(void)

{
  UIMazeMiniGameCredit *this;
  
  this = ::operator_new(0x1b0);
  UIMazeMiniGameCredit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMazeMiniGameCredit::Draw(Sexy::Graphics*) */

void __thiscall UIMazeMiniGameCredit::Draw(UIMazeMiniGameCredit *this,Graphics *param_1)

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
  FUN_05478178(awStack_20,L"[MAZE_STATUE_SET_LABEL]",auStack_38);
  Sexy::StrFormat(L"%d/%d",awStack_28,(ulong)*(uint *)(this + 0x1a8),(ulong)*(uint *)(this + 0x1ac))
  ;
  TodReplaceString(awStack_20,L"{NUMBER}",awStack_28);
  FUN_054766c8(this + 0x1a0,aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_20);
  nop();
  FUN_05478178(awStack_20,L"[MAZE_STATUE_TARGET_LABEL]",auStack_38);
  Sexy::StrFormat(L"%d",awStack_28,(ulong)*(uint *)(this + 0x164));
  TodReplaceString(awStack_20,L"{NUMBER}",awStack_28);
  FUN_054766c8(this + 0x168,aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_20);
  nop();
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1a0,this + 400,uVar1,aIStack_18,5,1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_Outline);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x180));
  WriteWordInRect(param_1,this + 0x168,this + 0x170,uVar1,aIStack_18,5,1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIMazeMiniGameCredit::Draw(Sexy::Graphics*) */

void __thiscall UIMazeMiniGameCredit::Draw(UIMazeMiniGameCredit *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

