// Class: WorldMap_TWLoginRewardButton


/* WorldMap_TWLoginRewardButton::~WorldMap_TWLoginRewardButton() */

void __thiscall
WorldMap_TWLoginRewardButton::~WorldMap_TWLoginRewardButton(WorldMap_TWLoginRewardButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06867310;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TWLoginRewardButton_068674b8;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_TWLoginRewardButton::~WorldMap_TWLoginRewardButton() */

void __thiscall
WorldMap_TWLoginRewardButton::~WorldMap_TWLoginRewardButton(WorldMap_TWLoginRewardButton *this)

{
  ~WorldMap_TWLoginRewardButton(this + -0x10);
  return;
}


/* WorldMap_TWLoginRewardButton::~WorldMap_TWLoginRewardButton() */

void __thiscall
WorldMap_TWLoginRewardButton::~WorldMap_TWLoginRewardButton(WorldMap_TWLoginRewardButton *this)

{
  ~WorldMap_TWLoginRewardButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_TWLoginRewardButton::~WorldMap_TWLoginRewardButton() */

void __thiscall
WorldMap_TWLoginRewardButton::~WorldMap_TWLoginRewardButton(WorldMap_TWLoginRewardButton *this)

{
  ~WorldMap_TWLoginRewardButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TWLoginRewardButton::StaticClassInit() */

void WorldMap_TWLoginRewardButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_TWLoginRewardButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045a8e10,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TWLoginRewardButton::StaticGetClass() */

long * WorldMap_TWLoginRewardButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TWLoginRewardButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TWLoginRewardButton::GetClass() const */

long * WorldMap_TWLoginRewardButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TWLoginRewardButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TWLoginRewardButton::WorldMap_TWLoginRewardButton() */

void __thiscall
WorldMap_TWLoginRewardButton::WorldMap_TWLoginRewardButton(WorldMap_TWLoginRewardButton *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06867310;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TWLoginRewardButton_068674b8;
  return;
}


/* WorldMap_TWLoginRewardButton::StaticNew() */

WorldMap_TWLoginRewardButton * WorldMap_TWLoginRewardButton::StaticNew(void)

{
  WorldMap_TWLoginRewardButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_TWLoginRewardButton(this);
  return this;
}


/* WorldMap_TWLoginRewardButton::OnWorldMapWorldLoaded() */

void __thiscall
WorldMap_TWLoginRewardButton::OnWorldMapWorldLoaded(WorldMap_TWLoginRewardButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,false);
  return;
}


/* WorldMap_TWLoginRewardButton::ShowSignUI() */

void WorldMap_TWLoginRewardButton::ShowSignUI(void)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Release");
  cVar1 = LawnApp::CheckNetWork(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::ShowDailySignRewardWithTW(gLawnApp);
  return;
}


/* WorldMap_TWLoginRewardButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_TWLoginRewardButton::updateButtonStates
          (WorldMap_TWLoginRewardButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_045a8cb4(this + 0x160);
  }
  else {
    cVar1 = FUN_045a8cbc(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Press");
      FUN_045a8cb4(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    ShowSignUI();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TWLoginRewardButton::OnUniverseMapOpened() */

void __thiscall
WorldMap_TWLoginRewardButton::OnUniverseMapOpened(WorldMap_TWLoginRewardButton *this)

{
  int iVar1;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  if (local_70 != '\0') {
    UIWidget::SetVisible((UIWidget *)this,true);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TWLoginRewardButton::Draw(Sexy::Graphics*) */

void WorldMap_TWLoginRewardButton::Draw(Graphics *param_1)

{
  char cVar1;
  int iVar2;
  Image *pIVar3;
  long lVar4;
  Graphics *in_x1;
  wchar16 *extraout_x1;
  LineBreakCategory *pLVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x4;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw(param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,in_x1);
  UIWidget::translateToWidgetPosition((UIWidget *)param_1,in_x1);
  cVar1 = FUN_045a8cbc(param_1[0x160]);
  if (cVar1 == '\0') {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15328);
  }
  else {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15380);
  }
  pLVar5 = (LineBreakCategory *)0x0;
  pLVar6 = (LineBreakCategory *)0x0;
  Sexy::Graphics::DrawImage(in_x1,pIVar3,0,0);
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)param_1,extraout_x1,pLVar5,pLVar6,in_x4);
  if (cVar1 != '\0') {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15468);
    iVar2 = FUN_045a8cc8();
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15380);
    Sexy::Graphics::DrawImage(in_x1,pIVar3,iVar2,(int)((float)*(int *)(lVar4 + 0x3c) * 0.65));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_TWLoginRewardButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_TWLoginRewardButton::Draw(WorldMap_TWLoginRewardButton *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}

