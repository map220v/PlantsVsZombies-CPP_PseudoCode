// Class: WorldMap_AutumnHarvestButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AutumnHarvestButton::StaticClassInit() */

void WorldMap_AutumnHarvestButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_AutumnHarvestButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458fbc0,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AutumnHarvestButton::StaticGetClass() */

long * WorldMap_AutumnHarvestButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AutumnHarvestButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AutumnHarvestButton::GetClass() const */

long * WorldMap_AutumnHarvestButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AutumnHarvestButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AutumnHarvestButton::~WorldMap_AutumnHarvestButton() */

void __thiscall
WorldMap_AutumnHarvestButton::~WorldMap_AutumnHarvestButton(WorldMap_AutumnHarvestButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06864ce0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AutumnHarvestButton_06864ec8;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_AutumnHarvestButton::~WorldMap_AutumnHarvestButton() */

void __thiscall
WorldMap_AutumnHarvestButton::~WorldMap_AutumnHarvestButton(WorldMap_AutumnHarvestButton *this)

{
  ~WorldMap_AutumnHarvestButton(this + -0x10);
  return;
}


/* WorldMap_AutumnHarvestButton::~WorldMap_AutumnHarvestButton() */

void __thiscall
WorldMap_AutumnHarvestButton::~WorldMap_AutumnHarvestButton(WorldMap_AutumnHarvestButton *this)

{
  ~WorldMap_AutumnHarvestButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_AutumnHarvestButton::~WorldMap_AutumnHarvestButton() */

void __thiscall
WorldMap_AutumnHarvestButton::~WorldMap_AutumnHarvestButton(WorldMap_AutumnHarvestButton *this)

{
  ~WorldMap_AutumnHarvestButton(this + -0x10);
  return;
}


/* WorldMap_AutumnHarvestButton::onButtonClicked() */

void __thiscall WorldMap_AutumnHarvestButton::onButtonClicked(WorldMap_AutumnHarvestButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a8b,true,0);
  this[0x1d0] = (WorldMap_AutumnHarvestButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AutumnHarvestButton::WorldMap_AutumnHarvestButton() */

void __thiscall
WorldMap_AutumnHarvestButton::WorldMap_AutumnHarvestButton(WorldMap_AutumnHarvestButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06864ce0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AutumnHarvestButton_06864ec8;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_AUTUMN_HARVEST");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AutumnHarvestButton::StaticNew() */

WorldMap_AutumnHarvestButton * WorldMap_AutumnHarvestButton::StaticNew(void)

{
  WorldMap_AutumnHarvestButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_AutumnHarvestButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AutumnHarvestButton::CheckActivated() */

void __thiscall WorldMap_AutumnHarvestButton::CheckActivated(WorldMap_AutumnHarvestButton *this)

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
/* WorldMap_AutumnHarvestButton::onNotifyRefreshActivityListReal(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_AutumnHarvestButton::onNotifyRefreshActivityListReal
          (WorldMap_AutumnHarvestButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  AutumnHarvestMgr *this_00;
  int local_1b4;
  undefined8 local_1b0;
  ActiveItem aAStack_1a8 [128];
  undefined8 local_128 [36];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1b4 = 0x2a8b;
    local_1b0 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1b4);
    local_128[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1b0,(rbtree_iterator *)local_128);
    if ((bVar1) && (this[0x1d0] != (WorldMap_AutumnHarvestButton)0x0)) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)local_128);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_1a8,(RtObject *)local_128);
      if (cVar2 != '\0') {
        this_00 = (AutumnHarvestMgr *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
        AutumnHarvestMgr::LoadData(this_00,(AutumnHarvestNetworkData *)local_128);
        UISingletonDialog<UIAutumnHarvest>::ShowDialog();
      }
      AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)local_128);
      ActiveItem::~ActiveItem(aAStack_1a8);
    }
  }
  this[0x1d0] = (WorldMap_AutumnHarvestButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

