// Class: WorldMap_CarnivalButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CarnivalButton::StaticClassInit() */

void WorldMap_CarnivalButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_CarnivalButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458e0bc,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CarnivalButton::StaticGetClass() */

long * WorldMap_CarnivalButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CarnivalButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CarnivalButton::GetClass() const */

long * WorldMap_CarnivalButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CarnivalButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CarnivalButton::~WorldMap_CarnivalButton() */

void __thiscall WorldMap_CarnivalButton::~WorldMap_CarnivalButton(WorldMap_CarnivalButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06863140;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CarnivalButton_06863328;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_CarnivalButton::~WorldMap_CarnivalButton() */

void __thiscall WorldMap_CarnivalButton::~WorldMap_CarnivalButton(WorldMap_CarnivalButton *this)

{
  ~WorldMap_CarnivalButton(this + -0x10);
  return;
}


/* WorldMap_CarnivalButton::~WorldMap_CarnivalButton() */

void __thiscall WorldMap_CarnivalButton::~WorldMap_CarnivalButton(WorldMap_CarnivalButton *this)

{
  ~WorldMap_CarnivalButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_CarnivalButton::~WorldMap_CarnivalButton() */

void __thiscall WorldMap_CarnivalButton::~WorldMap_CarnivalButton(WorldMap_CarnivalButton *this)

{
  ~WorldMap_CarnivalButton(this + -0x10);
  return;
}


/* WorldMap_CarnivalButton::onButtonClicked() */

void __thiscall WorldMap_CarnivalButton::onButtonClicked(WorldMap_CarnivalButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a6a,true,0);
  this[0x1d0] = (WorldMap_CarnivalButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CarnivalButton::WorldMap_CarnivalButton() */

void __thiscall WorldMap_CarnivalButton::WorldMap_CarnivalButton(WorldMap_CarnivalButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06863140;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CarnivalButton_06863328;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_CARNIVAL");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CarnivalButton::StaticNew() */

WorldMap_CarnivalButton * WorldMap_CarnivalButton::StaticNew(void)

{
  WorldMap_CarnivalButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_CarnivalButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CarnivalButton::onNotifyRefreshActivityListReal(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_CarnivalButton::onNotifyRefreshActivityListReal
          (WorldMap_CarnivalButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a6a;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (this[0x1d0] != (WorldMap_CarnivalButton)0x0)) {
      UISingletonDialog<UICarnival>::ShowDialog();
    }
  }
  this[0x1d0] = (WorldMap_CarnivalButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CarnivalButton::CheckActivated() */

void __thiscall WorldMap_CarnivalButton::CheckActivated(WorldMap_CarnivalButton *this)

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

