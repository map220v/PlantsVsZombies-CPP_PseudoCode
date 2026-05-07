// Class: PlantWarsMapTitleUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMapTitleUI::StaticClassInit() */

void PlantWarsMapTitleUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsMapTitleUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04da028c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsMapTitleUI::StaticGetClass() */

long * PlantWarsMapTitleUI::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsMapTitleUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsMapTitleUI::GetClass() const */

long * PlantWarsMapTitleUI::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsMapTitleUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMapTitleUI::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsMapTitleUI::Draw(PlantWarsMapTitleUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  GraphicsAutoState aGStack_58 [8];
  undefined1 auStack_50 [16];
  int local_40;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    TodStringTranslate(L"[PLANTWARS_WORLD_THEME_TITLE]");
    iVar2 = FUN_04d9f494(0);
    UIWidget::GetDrawRect();
    UIWidget::GetDrawRect();
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,local_40,local_2c);
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,4);
    WriteWordInRect(param_1,auStack_50,aIStack_28,uVar3,aCStack_18,3,1);
    FUN_05476c50(auStack_50);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantWarsMapTitleUI::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsMapTitleUI::Draw(PlantWarsMapTitleUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* PlantWarsMapTitleUI::~PlantWarsMapTitleUI() */

void __thiscall PlantWarsMapTitleUI::~PlantWarsMapTitleUI(PlantWarsMapTitleUI *this)

{
  *(undefined ***)this = &PTR_GetClass_069bd6f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantWarsMapTitleUI_069bd898;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to PlantWarsMapTitleUI::~PlantWarsMapTitleUI() */

void __thiscall PlantWarsMapTitleUI::~PlantWarsMapTitleUI(PlantWarsMapTitleUI *this)

{
  ~PlantWarsMapTitleUI(this + -0x10);
  return;
}


/* PlantWarsMapTitleUI::~PlantWarsMapTitleUI() */

void __thiscall PlantWarsMapTitleUI::~PlantWarsMapTitleUI(PlantWarsMapTitleUI *this)

{
  ~PlantWarsMapTitleUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsMapTitleUI::~PlantWarsMapTitleUI() */

void __thiscall PlantWarsMapTitleUI::~PlantWarsMapTitleUI(PlantWarsMapTitleUI *this)

{
  ~PlantWarsMapTitleUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMapTitleUI::PlantWarsMapTitleUI() */

void __thiscall PlantWarsMapTitleUI::PlantWarsMapTitleUI(PlantWarsMapTitleUI *this)

{
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069bd6f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantWarsMapTitleUI_069bd898;
  FUN_04d9f34c(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsMapTitleUI::StaticNew() */

PlantWarsMapTitleUI * PlantWarsMapTitleUI::StaticNew(void)

{
  PlantWarsMapTitleUI *this;
  
  this = ::operator_new(0x1d0);
  PlantWarsMapTitleUI(this);
  return this;
}

