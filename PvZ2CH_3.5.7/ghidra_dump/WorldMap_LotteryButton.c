// Class: WorldMap_LotteryButton


/* WorldMap_LotteryButton::~WorldMap_LotteryButton() */

void __thiscall WorldMap_LotteryButton::~WorldMap_LotteryButton(WorldMap_LotteryButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685e2c0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LotteryButton_0685e468;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_LotteryButton::~WorldMap_LotteryButton() */

void __thiscall WorldMap_LotteryButton::~WorldMap_LotteryButton(WorldMap_LotteryButton *this)

{
  ~WorldMap_LotteryButton(this + -0x10);
  return;
}


/* WorldMap_LotteryButton::~WorldMap_LotteryButton() */

void __thiscall WorldMap_LotteryButton::~WorldMap_LotteryButton(WorldMap_LotteryButton *this)

{
  ~WorldMap_LotteryButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LotteryButton::~WorldMap_LotteryButton() */

void __thiscall WorldMap_LotteryButton::~WorldMap_LotteryButton(WorldMap_LotteryButton *this)

{
  ~WorldMap_LotteryButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LotteryButton::StaticClassInit() */

void WorldMap_LotteryButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LotteryButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04571d38,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LotteryButton::StaticGetClass() */

long * WorldMap_LotteryButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LotteryButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LotteryButton::GetClass() const */

long * WorldMap_LotteryButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LotteryButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LotteryButton::WorldMap_LotteryButton() */

void __thiscall WorldMap_LotteryButton::WorldMap_LotteryButton(WorldMap_LotteryButton *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685e2c0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LotteryButton_0685e468;
  return;
}


/* WorldMap_LotteryButton::StaticNew() */

WorldMap_LotteryButton * WorldMap_LotteryButton::StaticNew(void)

{
  WorldMap_LotteryButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_LotteryButton(this);
  return this;
}


/* WorldMap_LotteryButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_LotteryButton::updateButtonStates
          (WorldMap_LotteryButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  WorldMap *this_00;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_04571bf0(this + 0x160);
  }
  else {
    cVar1 = FUN_04571bf8(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Press");
      FUN_04571bf0(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Release");
    this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToLottery(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LotteryButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_LotteryButton::Draw(WorldMap_LotteryButton *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04571bf8(this[0x160]);
  if (cVar1 == '\0') {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b110b0);
  }
  else {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11060);
  }
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_LotteryButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_LotteryButton::Draw(WorldMap_LotteryButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

