// Class: WorldMap_TopBar


/* WorldMap_TopBar::~WorldMap_TopBar() */

void __thiscall WorldMap_TopBar::~WorldMap_TopBar(WorldMap_TopBar *this)

{
  *(undefined ***)this = &PTR_GetClass_0685f5a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TopBar_0685f740;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_TopBar::~WorldMap_TopBar() */

void __thiscall WorldMap_TopBar::~WorldMap_TopBar(WorldMap_TopBar *this)

{
  ~WorldMap_TopBar(this + -0x10);
  return;
}


/* WorldMap_TopBar::~WorldMap_TopBar() */

void __thiscall WorldMap_TopBar::~WorldMap_TopBar(WorldMap_TopBar *this)

{
  ~WorldMap_TopBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_TopBar::~WorldMap_TopBar() */

void __thiscall WorldMap_TopBar::~WorldMap_TopBar(WorldMap_TopBar *this)

{
  ~WorldMap_TopBar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TopBar::StaticClassInit() */

void WorldMap_TopBar::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_TopBar");
    (*pcVar2)(plVar1,asStack_10,FUN_045773f8,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TopBar::StaticGetClass() */

long * WorldMap_TopBar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TopBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TopBar::GetClass() const */

long * WorldMap_TopBar::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TopBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TopBar::WorldMap_TopBar() */

void __thiscall WorldMap_TopBar::WorldMap_TopBar(WorldMap_TopBar *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685f5a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TopBar_0685f740;
  return;
}


/* WorldMap_TopBar::StaticNew() */

WorldMap_TopBar * WorldMap_TopBar::StaticNew(void)

{
  WorldMap_TopBar *this;
  
  this = ::operator_new(0x168);
  WorldMap_TopBar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TopBar::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_TopBar::Draw(WorldMap_TopBar *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_TopBar::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_TopBar::Draw(WorldMap_TopBar *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

