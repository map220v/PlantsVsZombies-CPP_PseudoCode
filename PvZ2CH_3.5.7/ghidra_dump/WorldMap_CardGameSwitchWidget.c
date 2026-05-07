// Class: WorldMap_CardGameSwitchWidget


/* WorldMap_CardGameSwitchWidget::~WorldMap_CardGameSwitchWidget() */

void __thiscall
WorldMap_CardGameSwitchWidget::~WorldMap_CardGameSwitchWidget(WorldMap_CardGameSwitchWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0665aaa0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CardGameSwitchWidget_0665ac40;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_CardGameSwitchWidget::~WorldMap_CardGameSwitchWidget() */

void __thiscall
WorldMap_CardGameSwitchWidget::~WorldMap_CardGameSwitchWidget(WorldMap_CardGameSwitchWidget *this)

{
  ~WorldMap_CardGameSwitchWidget(this + -0x10);
  return;
}


/* WorldMap_CardGameSwitchWidget::~WorldMap_CardGameSwitchWidget() */

void __thiscall
WorldMap_CardGameSwitchWidget::~WorldMap_CardGameSwitchWidget(WorldMap_CardGameSwitchWidget *this)

{
  ~WorldMap_CardGameSwitchWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_CardGameSwitchWidget::~WorldMap_CardGameSwitchWidget() */

void __thiscall
WorldMap_CardGameSwitchWidget::~WorldMap_CardGameSwitchWidget(WorldMap_CardGameSwitchWidget *this)

{
  ~WorldMap_CardGameSwitchWidget(this + -0x10);
  return;
}


/* WorldMap_CardGameSwitchWidget::WorldMap_CardGameSwitchWidget() */

void __thiscall
WorldMap_CardGameSwitchWidget::WorldMap_CardGameSwitchWidget(WorldMap_CardGameSwitchWidget *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_0665aaa0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CardGameSwitchWidget_0665ac40;
  *(undefined8 *)(this + 0x170) = 0;
  this[0x178] = (WorldMap_CardGameSwitchWidget)0x1;
  this[0x179] = (WorldMap_CardGameSwitchWidget)0x0;
  return;
}


/* WorldMap_CardGameSwitchWidget::StaticNew() */

WorldMap_CardGameSwitchWidget * WorldMap_CardGameSwitchWidget::StaticNew(void)

{
  WorldMap_CardGameSwitchWidget *this;
  
  this = ::operator_new(0x180);
  WorldMap_CardGameSwitchWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardGameSwitchWidget::StaticClassInit() */

void WorldMap_CardGameSwitchWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_CardGameSwitchWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_03564d3c,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CardGameSwitchWidget::StaticGetClass() */

long * WorldMap_CardGameSwitchWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CardGameSwitchWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CardGameSwitchWidget::GetClass() const */

long * WorldMap_CardGameSwitchWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CardGameSwitchWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardGameSwitchWidget::onLoadComplete() */

void __thiscall WorldMap_CardGameSwitchWidget::onLoadComplete(WorldMap_CardGameSwitchWidget *this)

{
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UICardGameResetButton");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x168) = extraout_x0;
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::RtName(aRStack_18,L"UICardGamePreviewButton");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x170) = extraout_x0_00;
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardGameSwitchWidget::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_CardGameSwitchWidget::Draw(WorldMap_CardGameSwitchWidget *this,Graphics *param_1)

{
  long *plVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  plVar1 = *(long **)(this + 0x168);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_1);
  }
  plVar1 = *(long **)(this + 0x170);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_CardGameSwitchWidget::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_CardGameSwitchWidget::Draw(WorldMap_CardGameSwitchWidget *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

