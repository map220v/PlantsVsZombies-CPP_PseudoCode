// Class: WorldMap_LuckyChestShopButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckyChestShopButton::StaticClassInit() */

void WorldMap_LuckyChestShopButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LuckyChestShopButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458f9ac,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LuckyChestShopButton::StaticGetClass() */

long * WorldMap_LuckyChestShopButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LuckyChestShopButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LuckyChestShopButton::GetClass() const */

long * WorldMap_LuckyChestShopButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LuckyChestShopButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LuckyChestShopButton::~WorldMap_LuckyChestShopButton() */

void __thiscall
WorldMap_LuckyChestShopButton::~WorldMap_LuckyChestShopButton(WorldMap_LuckyChestShopButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06864ac0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LuckyChestShopButton_06864ca8;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_LuckyChestShopButton::~WorldMap_LuckyChestShopButton() */

void __thiscall
WorldMap_LuckyChestShopButton::~WorldMap_LuckyChestShopButton(WorldMap_LuckyChestShopButton *this)

{
  ~WorldMap_LuckyChestShopButton(this + -0x10);
  return;
}


/* WorldMap_LuckyChestShopButton::~WorldMap_LuckyChestShopButton() */

void __thiscall
WorldMap_LuckyChestShopButton::~WorldMap_LuckyChestShopButton(WorldMap_LuckyChestShopButton *this)

{
  ~WorldMap_LuckyChestShopButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LuckyChestShopButton::~WorldMap_LuckyChestShopButton() */

void __thiscall
WorldMap_LuckyChestShopButton::~WorldMap_LuckyChestShopButton(WorldMap_LuckyChestShopButton *this)

{
  ~WorldMap_LuckyChestShopButton(this + -0x10);
  return;
}


/* WorldMap_LuckyChestShopButton::onButtonClicked() */

void __thiscall WorldMap_LuckyChestShopButton::onButtonClicked(WorldMap_LuckyChestShopButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a89,true,0);
  this[0x1d0] = (WorldMap_LuckyChestShopButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckyChestShopButton::WorldMap_LuckyChestShopButton() */

void __thiscall
WorldMap_LuckyChestShopButton::WorldMap_LuckyChestShopButton(WorldMap_LuckyChestShopButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06864ac0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LuckyChestShopButton_06864ca8;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LUCKY_CHEST");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LuckyChestShopButton::StaticNew() */

WorldMap_LuckyChestShopButton * WorldMap_LuckyChestShopButton::StaticNew(void)

{
  WorldMap_LuckyChestShopButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_LuckyChestShopButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckyChestShopButton::onNotifyRefreshActivityListReal(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&) */

void __thiscall
WorldMap_LuckyChestShopButton::onNotifyRefreshActivityListReal
          (WorldMap_LuckyChestShopButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a89;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (this[0x1d0] != (WorldMap_LuckyChestShopButton)0x0)) {
      UISingletonDialog<UILuckyChest>::ShowDialog();
    }
  }
  this[0x1d0] = (WorldMap_LuckyChestShopButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckyChestShopButton::CheckActivated() */

void __thiscall WorldMap_LuckyChestShopButton::CheckActivated(WorldMap_LuckyChestShopButton *this)

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

