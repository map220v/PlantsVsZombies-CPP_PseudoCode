// Class: WorldMap_TreasurePavilionButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TreasurePavilionButton::StaticClassInit() */

void WorldMap_TreasurePavilionButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_TreasurePavilionButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458f15c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TreasurePavilionButton::StaticGetClass() */

long * WorldMap_TreasurePavilionButton::StaticGetClass(void)

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
  uVar2 = WorldMap_TurnChangeButton::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_TreasurePavilionButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TreasurePavilionButton::GetClass() const */

long * WorldMap_TreasurePavilionButton::GetClass(void)

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
  uVar2 = WorldMap_TurnChangeButton::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_TreasurePavilionButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TreasurePavilionButton::~WorldMap_TreasurePavilionButton() */

void __thiscall
WorldMap_TreasurePavilionButton::~WorldMap_TreasurePavilionButton
          (WorldMap_TreasurePavilionButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06864240;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TreasurePavilionButton_06864428;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_TreasurePavilionButton::~WorldMap_TreasurePavilionButton() */

void __thiscall
WorldMap_TreasurePavilionButton::~WorldMap_TreasurePavilionButton
          (WorldMap_TreasurePavilionButton *this)

{
  ~WorldMap_TreasurePavilionButton(this + -0x10);
  return;
}


/* WorldMap_TreasurePavilionButton::~WorldMap_TreasurePavilionButton() */

void __thiscall
WorldMap_TreasurePavilionButton::~WorldMap_TreasurePavilionButton
          (WorldMap_TreasurePavilionButton *this)

{
  ~WorldMap_TreasurePavilionButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_TreasurePavilionButton::~WorldMap_TreasurePavilionButton() */

void __thiscall
WorldMap_TreasurePavilionButton::~WorldMap_TreasurePavilionButton
          (WorldMap_TreasurePavilionButton *this)

{
  ~WorldMap_TreasurePavilionButton(this + -0x10);
  return;
}


/* WorldMap_TreasurePavilionButton::onButtonClicked() */

void __thiscall
WorldMap_TreasurePavilionButton::onButtonClicked(WorldMap_TreasurePavilionButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a81,true,0);
  this[0x1d0] = (WorldMap_TreasurePavilionButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TreasurePavilionButton::WorldMap_TreasurePavilionButton() */

void __thiscall
WorldMap_TreasurePavilionButton::WorldMap_TreasurePavilionButton
          (WorldMap_TreasurePavilionButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06864240;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TreasurePavilionButton_06864428;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_TREASUREPAVILION");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TreasurePavilionButton::StaticNew() */

WorldMap_TreasurePavilionButton * WorldMap_TreasurePavilionButton::StaticNew(void)

{
  WorldMap_TreasurePavilionButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_TreasurePavilionButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TreasurePavilionButton::onNotifyRefreshActivityListReal(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&) */

void __thiscall
WorldMap_TreasurePavilionButton::onNotifyRefreshActivityListReal
          (WorldMap_TreasurePavilionButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a81;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (this[0x1d0] != (WorldMap_TreasurePavilionButton)0x0)) {
      LawnApp::ShowLinkageActivityCollection(gLawnApp);
    }
  }
  this[0x1d0] = (WorldMap_TreasurePavilionButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TreasurePavilionButton::CheckActivated() */

void __thiscall
WorldMap_TreasurePavilionButton::CheckActivated(WorldMap_TreasurePavilionButton *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [24];
  bool local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 == '\0') {
    UIWidget::SetVisible((UIWidget *)this,false);
    local_70 = false;
  }
  else {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    UIWidget::SetVisible((UIWidget *)this,local_70);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}

