// Class: PVZ1InfoUI


/* PVZ1InfoUI::~PVZ1InfoUI() */

void __thiscall PVZ1InfoUI::~PVZ1InfoUI(PVZ1InfoUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06669870;
  *(undefined ***)(this + 0x10) = &PTR__PVZ1InfoUI_06669a10;
  FUN_05476c50(this + 0x170);
  FUN_05476c50(this + 0x168);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PVZ1InfoUI::~PVZ1InfoUI() */

void __thiscall PVZ1InfoUI::~PVZ1InfoUI(PVZ1InfoUI *this)

{
  ~PVZ1InfoUI(this + -0x10);
  return;
}


/* PVZ1InfoUI::~PVZ1InfoUI() */

void __thiscall PVZ1InfoUI::~PVZ1InfoUI(PVZ1InfoUI *this)

{
  ~PVZ1InfoUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1InfoUI::~PVZ1InfoUI() */

void __thiscall PVZ1InfoUI::~PVZ1InfoUI(PVZ1InfoUI *this)

{
  ~PVZ1InfoUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1InfoUI::StaticClassInit() */

void PVZ1InfoUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1InfoUI");
    (*pcVar2)(plVar1,asStack_10,FUN_0361bee0,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1InfoUI::StaticGetClass() */

long * PVZ1InfoUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1InfoUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1InfoUI::GetClass() const */

long * PVZ1InfoUI::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1InfoUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1InfoUI::onEnterState_Initializing(WidgetState) */

void PVZ1InfoUI::onEnterState_Initializing(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[RIFT_WORLD_THEME_TITLE]");
  iVar1 = FUN_0361bd98(10);
  iVar2 = FUN_0361bcb8(*(undefined4 *)(param_1 + 0x38));
  iVar3 = FUN_0361bd98(0x3c);
  Sexy::Insets::Insets((Insets *)&local_18,0,iVar1,iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x178) = local_18;
  *(undefined8 *)(param_1 + 0x180) = uStack_10;
  TodStringTranslate(L"[PVZ1MODE_INFO_BANNED_LIST]");
  FUN_054766c8(param_1 + 0x170,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  iVar1 = FUN_0361bd98(0x23);
  iVar2 = FUN_0361bcb8(*(undefined4 *)(param_1 + 0x38));
  iVar3 = FUN_0361bd98(0x3c);
  Sexy::Insets::Insets((Insets *)&local_18,0,iVar1,iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x188) = local_18;
  *(undefined8 *)(param_1 + 400) = uStack_10;
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1InfoUI::PVZ1InfoUI() */

void __thiscall PVZ1InfoUI::PVZ1InfoUI(PVZ1InfoUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06669870;
  *(undefined ***)(this + 0x10) = &PTR__PVZ1InfoUI_06669a10;
  FUN_05476574(this + 0x168);
  FUN_05476574(this + 0x170);
  Sexy::Insets::Insets((Insets *)(this + 0x178));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  return;
}


/* PVZ1InfoUI::StaticNew() */

PVZ1InfoUI * PVZ1InfoUI::StaticNew(void)

{
  PVZ1InfoUI *this;
  
  this = ::operator_new(0x198);
  PVZ1InfoUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1InfoUI::Draw(Sexy::Graphics*) */

void __thiscall PVZ1InfoUI::Draw(PVZ1InfoUI *this,Graphics *param_1)

{
  undefined8 uVar1;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x170,this + 0x188,uVar1,aCStack_18,0,1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ1InfoUI::Draw(Sexy::Graphics*) */

void __thiscall PVZ1InfoUI::Draw(PVZ1InfoUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

