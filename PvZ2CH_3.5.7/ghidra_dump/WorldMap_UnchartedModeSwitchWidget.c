// Class: WorldMap_UnchartedModeSwitchWidget


/* WorldMap_UnchartedModeSwitchWidget::~WorldMap_UnchartedModeSwitchWidget() */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::~WorldMap_UnchartedModeSwitchWidget
          (WorldMap_UnchartedModeSwitchWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0685db60;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_UnchartedModeSwitchWidget_0685dd00;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_UnchartedModeSwitchWidget::~WorldMap_UnchartedModeSwitchWidget() */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::~WorldMap_UnchartedModeSwitchWidget
          (WorldMap_UnchartedModeSwitchWidget *this)

{
  ~WorldMap_UnchartedModeSwitchWidget(this + -0x10);
  return;
}


/* WorldMap_UnchartedModeSwitchWidget::~WorldMap_UnchartedModeSwitchWidget() */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::~WorldMap_UnchartedModeSwitchWidget
          (WorldMap_UnchartedModeSwitchWidget *this)

{
  ~WorldMap_UnchartedModeSwitchWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_UnchartedModeSwitchWidget::~WorldMap_UnchartedModeSwitchWidget() */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::~WorldMap_UnchartedModeSwitchWidget
          (WorldMap_UnchartedModeSwitchWidget *this)

{
  ~WorldMap_UnchartedModeSwitchWidget(this + -0x10);
  return;
}


/* WorldMap_UnchartedModeSwitchWidget::WorldMap_UnchartedModeSwitchWidget() */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::WorldMap_UnchartedModeSwitchWidget
          (WorldMap_UnchartedModeSwitchWidget *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_0685db60;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_UnchartedModeSwitchWidget_0685dd00;
  *(undefined8 *)(this + 0x170) = 0;
  this[0x178] = (WorldMap_UnchartedModeSwitchWidget)0x1;
  this[0x179] = (WorldMap_UnchartedModeSwitchWidget)0x0;
  return;
}


/* WorldMap_UnchartedModeSwitchWidget::StaticNew() */

WorldMap_UnchartedModeSwitchWidget * WorldMap_UnchartedModeSwitchWidget::StaticNew(void)

{
  WorldMap_UnchartedModeSwitchWidget *this;
  
  this = ::operator_new(0x180);
  WorldMap_UnchartedModeSwitchWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UnchartedModeSwitchWidget::StaticClassInit() */

void WorldMap_UnchartedModeSwitchWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_UnchartedModeSwitchWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04570ba8,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_UnchartedModeSwitchWidget::StaticGetClass() */

long * WorldMap_UnchartedModeSwitchWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_UnchartedModeSwitchWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_UnchartedModeSwitchWidget::GetClass() const */

long * WorldMap_UnchartedModeSwitchWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_UnchartedModeSwitchWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_UnchartedModeSwitchWidget::setIsOnHardMode(bool) */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::setIsOnHardMode
          (WorldMap_UnchartedModeSwitchWidget *this,bool param_1)

{
  char cVar1;
  string *psVar2;
  
  cVar1 = PVZ2UnchartedModeUtils::IsHardMode();
  if (param_1 != (bool)cVar1) {
    this[0x179] = (WorldMap_UnchartedModeSwitchWidget)param_1;
    psVar2 = (string *)PVZ2UnchartedModeUtils::GetCurrentWorldPrefix(param_1);
    PVZ2UnchartedModeUtils::GoToUnchartedModeWorldMap(psVar2,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UnchartedModeSwitchWidget::onLoadComplete() */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::onLoadComplete(WorldMap_UnchartedModeSwitchWidget *this)

{
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIUnchartedModeNormalButton");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x168) = extraout_x0;
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::RtName(aRStack_18,L"UIUnchartedModeHardButton");
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


/* WorldMap_UnchartedModeSwitchWidget::onUpdate() */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::onUpdate(WorldMap_UnchartedModeSwitchWidget *this)

{
  WorldMap_UnchartedModeSwitchWidget WVar1;
  UnchartedModeNetworkMgr *this_00;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  string *psVar2;
  
  this_00 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  psVar2 = (string *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_01);
  WVar1 = (WorldMap_UnchartedModeSwitchWidget)
          UnchartedModeNetworkMgr::IsHardLevelUnlocked(this_00,psVar2);
  this[0x178] = WVar1;
  WVar1 = (WorldMap_UnchartedModeSwitchWidget)PVZ2UnchartedModeUtils::IsHardMode();
  this[0x179] = WVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_UnchartedModeSwitchWidget::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::Draw(WorldMap_UnchartedModeSwitchWidget *this,Graphics *param_1)

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


/* non-virtual thunk to WorldMap_UnchartedModeSwitchWidget::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_UnchartedModeSwitchWidget::Draw(WorldMap_UnchartedModeSwitchWidget *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

