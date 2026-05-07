// Class: WorldMap_CommonButton


/* WorldMap_CommonButton::~WorldMap_CommonButton() */

void __thiscall WorldMap_CommonButton::~WorldMap_CommonButton(WorldMap_CommonButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685b440;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CommonButton_0685b5f0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_CommonButton::~WorldMap_CommonButton() */

void __thiscall WorldMap_CommonButton::~WorldMap_CommonButton(WorldMap_CommonButton *this)

{
  ~WorldMap_CommonButton(this + -0x10);
  return;
}


/* WorldMap_CommonButton::~WorldMap_CommonButton() */

void __thiscall WorldMap_CommonButton::~WorldMap_CommonButton(WorldMap_CommonButton *this)

{
  ~WorldMap_CommonButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_CommonButton::~WorldMap_CommonButton() */

void __thiscall WorldMap_CommonButton::~WorldMap_CommonButton(WorldMap_CommonButton *this)

{
  ~WorldMap_CommonButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CommonButton::StaticClassInit() */

void WorldMap_CommonButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_CommonButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045670c0,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CommonButton::StaticGetClass() */

long * WorldMap_CommonButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CommonButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CommonButton::GetClass() const */

long * WorldMap_CommonButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CommonButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CommonButton::WorldMap_CommonButton() */

void __thiscall WorldMap_CommonButton::WorldMap_CommonButton(WorldMap_CommonButton *this)

{
  WorldMap_CommonButton WVar1;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  UIWidget::UIWidget((UIWidget *)this);
  this[0x163] = (WorldMap_CommonButton)0x0;
  *(undefined ***)this = &PTR_GetClass_0685b440;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CommonButton_0685b5f0;
  WVar1 = (WorldMap_CommonButton)
          EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)this,(wchar16 *)&PTR__WorldMap_CommonButton_0685b5f0,
                     (LineBreakCategory *)&PTR_GetClass_0685b440,in_x3,in_x4);
  this[0x163] = WVar1;
  return;
}


/* WorldMap_CommonButton::StaticNew() */

WorldMap_CommonButton * WorldMap_CommonButton::StaticNew(void)

{
  WorldMap_CommonButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_CommonButton(this);
  return this;
}


/* WorldMap_CommonButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_CommonButton::updateButtonStates
          (WorldMap_CommonButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_04566f64(this + 0x160);
  }
  else {
    cVar1 = FUN_04566f6c(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Press");
      FUN_04566f64(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 400))(this);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Release");
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CommonButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_CommonButton::Draw(WorldMap_CommonButton *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  Image *pIVar3;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04566f6c(this[0x160]);
  if (cVar1 == '\0') {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10960);
  }
  else {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10ac0);
  }
  Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
  if (this[0x163] != (WorldMap_CommonButton)0x0) {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b109e8);
    iVar2 = FUN_04566f78();
    Sexy::Graphics::DrawImage(param_1,pIVar3,iVar2,5);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_CommonButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_CommonButton::Draw(WorldMap_CommonButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

