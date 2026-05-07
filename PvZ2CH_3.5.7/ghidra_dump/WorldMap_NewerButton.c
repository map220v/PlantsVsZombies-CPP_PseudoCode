// Class: WorldMap_NewerButton


/* WorldMap_NewerButton::~WorldMap_NewerButton() */

void __thiscall WorldMap_NewerButton::~WorldMap_NewerButton(WorldMap_NewerButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685e680;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_NewerButton_0685e828;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_NewerButton::~WorldMap_NewerButton() */

void __thiscall WorldMap_NewerButton::~WorldMap_NewerButton(WorldMap_NewerButton *this)

{
  ~WorldMap_NewerButton(this + -0x10);
  return;
}


/* WorldMap_NewerButton::~WorldMap_NewerButton() */

void __thiscall WorldMap_NewerButton::~WorldMap_NewerButton(WorldMap_NewerButton *this)

{
  ~WorldMap_NewerButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_NewerButton::~WorldMap_NewerButton() */

void __thiscall WorldMap_NewerButton::~WorldMap_NewerButton(WorldMap_NewerButton *this)

{
  ~WorldMap_NewerButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_NewerButton::StaticClassInit() */

void WorldMap_NewerButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_NewerButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04572808,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_NewerButton::StaticGetClass() */

long * WorldMap_NewerButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_NewerButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_NewerButton::GetClass() const */

long * WorldMap_NewerButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_NewerButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_NewerButton::WorldMap_NewerButton() */

void __thiscall WorldMap_NewerButton::WorldMap_NewerButton(WorldMap_NewerButton *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685e680;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_NewerButton_0685e828;
  return;
}


/* WorldMap_NewerButton::StaticNew() */

WorldMap_NewerButton * WorldMap_NewerButton::StaticNew(void)

{
  WorldMap_NewerButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_NewerButton(this);
  return this;
}


/* WorldMap_NewerButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_NewerButton::updateButtonStates
          (WorldMap_NewerButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_045726c0(this + 0x160);
  }
  else {
    cVar1 = FUN_045726c8(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Press");
      FUN_045726c0(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Release");
    LawnApp::ShowGetNewerBagUI(gLawnApp,false,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_NewerButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_NewerButton::Draw(WorldMap_NewerButton *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_045726c8(this[0x160]);
  if (cVar1 == '\0') {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b112a0);
  }
  else {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b112d8);
  }
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_NewerButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_NewerButton::Draw(WorldMap_NewerButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

