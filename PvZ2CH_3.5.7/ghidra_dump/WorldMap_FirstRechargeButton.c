// Class: WorldMap_FirstRechargeButton


/* WorldMap_FirstRechargeButton::~WorldMap_FirstRechargeButton() */

void __thiscall
WorldMap_FirstRechargeButton::~WorldMap_FirstRechargeButton(WorldMap_FirstRechargeButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06867130;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_FirstRechargeButton_068672d8;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_FirstRechargeButton::~WorldMap_FirstRechargeButton() */

void __thiscall
WorldMap_FirstRechargeButton::~WorldMap_FirstRechargeButton(WorldMap_FirstRechargeButton *this)

{
  ~WorldMap_FirstRechargeButton(this + -0x10);
  return;
}


/* WorldMap_FirstRechargeButton::~WorldMap_FirstRechargeButton() */

void __thiscall
WorldMap_FirstRechargeButton::~WorldMap_FirstRechargeButton(WorldMap_FirstRechargeButton *this)

{
  ~WorldMap_FirstRechargeButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_FirstRechargeButton::~WorldMap_FirstRechargeButton() */

void __thiscall
WorldMap_FirstRechargeButton::~WorldMap_FirstRechargeButton(WorldMap_FirstRechargeButton *this)

{
  ~WorldMap_FirstRechargeButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_FirstRechargeButton::StaticClassInit() */

void WorldMap_FirstRechargeButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_FirstRechargeButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045a88f8,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_FirstRechargeButton::StaticGetClass() */

long * WorldMap_FirstRechargeButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_FirstRechargeButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_FirstRechargeButton::GetClass() const */

long * WorldMap_FirstRechargeButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_FirstRechargeButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_FirstRechargeButton::WorldMap_FirstRechargeButton() */

void __thiscall
WorldMap_FirstRechargeButton::WorldMap_FirstRechargeButton(WorldMap_FirstRechargeButton *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06867130;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_FirstRechargeButton_068672d8;
  return;
}


/* WorldMap_FirstRechargeButton::StaticNew() */

WorldMap_FirstRechargeButton * WorldMap_FirstRechargeButton::StaticNew(void)

{
  WorldMap_FirstRechargeButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_FirstRechargeButton(this);
  return this;
}


/* WorldMap_FirstRechargeButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_FirstRechargeButton::updateButtonStates
          (WorldMap_FirstRechargeButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_045a87b0(this + 0x160);
  }
  else {
    cVar1 = FUN_045a87b8(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Press");
      FUN_045a87b0(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Release");
    RechargeRewardUI::requestNetwork();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_FirstRechargeButton::CheckVisibility() */

void WorldMap_FirstRechargeButton::CheckVisibility(void)

{
  int iVar1;
  undefined1 uVar2;
  ActiveItem aAStack_108 [24];
  char local_f0;
  ActiveItem aAStack_88 [24];
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  uVar2 = 1;
  if (local_f0 == '\0') {
    iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar1);
    ActiveItem::~ActiveItem(aAStack_88);
    uVar2 = local_70;
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_FirstRechargeButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_FirstRechargeButton::Draw(WorldMap_FirstRechargeButton *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_045a87b8(this[0x160]);
  if (cVar1 == '\0') {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15230);
  }
  else {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15258);
  }
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_FirstRechargeButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_FirstRechargeButton::Draw(WorldMap_FirstRechargeButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

