// Class: WorldMap_LimitedSummonButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitedSummonButton::StaticClassInit() */

void WorldMap_LimitedSummonButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LimitedSummonButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458dc94,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LimitedSummonButton::StaticGetClass() */

long * WorldMap_LimitedSummonButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LimitedSummonButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LimitedSummonButton::GetClass() const */

long * WorldMap_LimitedSummonButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LimitedSummonButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LimitedSummonButton::~WorldMap_LimitedSummonButton() */

void __thiscall
WorldMap_LimitedSummonButton::~WorldMap_LimitedSummonButton(WorldMap_LimitedSummonButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06862d00;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LimitedSummonButton_06862ee8;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_LimitedSummonButton::~WorldMap_LimitedSummonButton() */

void __thiscall
WorldMap_LimitedSummonButton::~WorldMap_LimitedSummonButton(WorldMap_LimitedSummonButton *this)

{
  ~WorldMap_LimitedSummonButton(this + -0x10);
  return;
}


/* WorldMap_LimitedSummonButton::~WorldMap_LimitedSummonButton() */

void __thiscall
WorldMap_LimitedSummonButton::~WorldMap_LimitedSummonButton(WorldMap_LimitedSummonButton *this)

{
  ~WorldMap_LimitedSummonButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LimitedSummonButton::~WorldMap_LimitedSummonButton() */

void __thiscall
WorldMap_LimitedSummonButton::~WorldMap_LimitedSummonButton(WorldMap_LimitedSummonButton *this)

{
  ~WorldMap_LimitedSummonButton(this + -0x10);
  return;
}


/* WorldMap_LimitedSummonButton::onButtonClicked() */

void __thiscall WorldMap_LimitedSummonButton::onButtonClicked(WorldMap_LimitedSummonButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a66,true,0);
  this[0x1d0] = (WorldMap_LimitedSummonButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitedSummonButton::WorldMap_LimitedSummonButton() */

void __thiscall
WorldMap_LimitedSummonButton::WorldMap_LimitedSummonButton(WorldMap_LimitedSummonButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06862d00;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LimitedSummonButton_06862ee8;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LIMITEDSUMMON");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LimitedSummonButton::StaticNew() */

WorldMap_LimitedSummonButton * WorldMap_LimitedSummonButton::StaticNew(void)

{
  WorldMap_LimitedSummonButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_LimitedSummonButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitedSummonButton::onNotifyRefreshActivityListReal(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_LimitedSummonButton::onNotifyRefreshActivityListReal
          (WorldMap_LimitedSummonButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a66;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (this[0x1d0] != (WorldMap_LimitedSummonButton)0x0)) {
      UISingletonDialog<UILimitedSummon>::ShowDialog();
    }
  }
  this[0x1d0] = (WorldMap_LimitedSummonButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LimitedSummonButton::CheckActivated() */

void __thiscall WorldMap_LimitedSummonButton::CheckActivated(WorldMap_LimitedSummonButton *this)

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

