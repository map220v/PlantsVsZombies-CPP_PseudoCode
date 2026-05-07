// Class: WorldMap_PlantCultivateButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantCultivateButton::StaticClassInit() */

void WorldMap_PlantCultivateButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PlantCultivateButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458e90c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantCultivateButton::StaticGetClass() */

long * WorldMap_PlantCultivateButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlantCultivateButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantCultivateButton::GetClass() const */

long * WorldMap_PlantCultivateButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlantCultivateButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantCultivateButton::~WorldMap_PlantCultivateButton() */

void __thiscall
WorldMap_PlantCultivateButton::~WorldMap_PlantCultivateButton(WorldMap_PlantCultivateButton *this)

{
  *(undefined ***)this = &PTR_GetClass_068639c0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantCultivateButton_06863ba8;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_PlantCultivateButton::~WorldMap_PlantCultivateButton() */

void __thiscall
WorldMap_PlantCultivateButton::~WorldMap_PlantCultivateButton(WorldMap_PlantCultivateButton *this)

{
  ~WorldMap_PlantCultivateButton(this + -0x10);
  return;
}


/* WorldMap_PlantCultivateButton::~WorldMap_PlantCultivateButton() */

void __thiscall
WorldMap_PlantCultivateButton::~WorldMap_PlantCultivateButton(WorldMap_PlantCultivateButton *this)

{
  ~WorldMap_PlantCultivateButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PlantCultivateButton::~WorldMap_PlantCultivateButton() */

void __thiscall
WorldMap_PlantCultivateButton::~WorldMap_PlantCultivateButton(WorldMap_PlantCultivateButton *this)

{
  ~WorldMap_PlantCultivateButton(this + -0x10);
  return;
}


/* WorldMap_PlantCultivateButton::onButtonClicked() */

void WorldMap_PlantCultivateButton::onButtonClicked(void)

{
  PlantCultivateManager *this;
  
  this = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  PlantCultivateManager::ShowDialog(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantCultivateButton::WorldMap_PlantCultivateButton() */

void __thiscall
WorldMap_PlantCultivateButton::WorldMap_PlantCultivateButton(WorldMap_PlantCultivateButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_068639c0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantCultivateButton_06863ba8;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PLANT_CULTIVATE");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantCultivateButton::StaticNew() */

WorldMap_PlantCultivateButton * WorldMap_PlantCultivateButton::StaticNew(void)

{
  WorldMap_PlantCultivateButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_PlantCultivateButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantCultivateButton::CheckActivated() */

void __thiscall WorldMap_PlantCultivateButton::CheckActivated(WorldMap_PlantCultivateButton *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantCultivateButton::onNotifyRefreshActivityListReal(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&) */

void __thiscall
WorldMap_PlantCultivateButton::onNotifyRefreshActivityListReal
          (WorldMap_PlantCultivateButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a77;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if ((bVar1) && (this[0x1d0] != (WorldMap_PlantCultivateButton)0x0)) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  this[0x1d0] = (WorldMap_PlantCultivateButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

