// Class: WorldMap_CornucopiaButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CornucopiaButton::StaticClassInit() */

void WorldMap_CornucopiaButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_CornucopiaButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458e4e4,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CornucopiaButton::StaticGetClass() */

long * WorldMap_CornucopiaButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CornucopiaButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CornucopiaButton::GetClass() const */

long * WorldMap_CornucopiaButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CornucopiaButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CornucopiaButton::~WorldMap_CornucopiaButton() */

void __thiscall
WorldMap_CornucopiaButton::~WorldMap_CornucopiaButton(WorldMap_CornucopiaButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06863580;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CornucopiaButton_06863768;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_CornucopiaButton::~WorldMap_CornucopiaButton() */

void __thiscall
WorldMap_CornucopiaButton::~WorldMap_CornucopiaButton(WorldMap_CornucopiaButton *this)

{
  ~WorldMap_CornucopiaButton(this + -0x10);
  return;
}


/* WorldMap_CornucopiaButton::~WorldMap_CornucopiaButton() */

void __thiscall
WorldMap_CornucopiaButton::~WorldMap_CornucopiaButton(WorldMap_CornucopiaButton *this)

{
  ~WorldMap_CornucopiaButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_CornucopiaButton::~WorldMap_CornucopiaButton() */

void __thiscall
WorldMap_CornucopiaButton::~WorldMap_CornucopiaButton(WorldMap_CornucopiaButton *this)

{
  ~WorldMap_CornucopiaButton(this + -0x10);
  return;
}


/* WorldMap_CornucopiaButton::onButtonClicked() */

void __thiscall WorldMap_CornucopiaButton::onButtonClicked(WorldMap_CornucopiaButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a6f,true,0);
  this[0x1d0] = (WorldMap_CornucopiaButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CornucopiaButton::WorldMap_CornucopiaButton() */

void __thiscall
WorldMap_CornucopiaButton::WorldMap_CornucopiaButton(WorldMap_CornucopiaButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06863580;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CornucopiaButton_06863768;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_CORNUCOPIA");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CornucopiaButton::StaticNew() */

WorldMap_CornucopiaButton * WorldMap_CornucopiaButton::StaticNew(void)

{
  WorldMap_CornucopiaButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_CornucopiaButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CornucopiaButton::CheckActivated() */

void __thiscall WorldMap_CornucopiaButton::CheckActivated(WorldMap_CornucopiaButton *this)

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
/* WorldMap_CornucopiaButton::onNotifyRefreshActivityListReal(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_CornucopiaButton::onNotifyRefreshActivityListReal
          (WorldMap_CornucopiaButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CornucopiaMgr *this_00;
  int local_1dc;
  undefined8 local_1d8;
  ActiveItem aAStack_1d0 [8];
  undefined4 local_1c8;
  char local_1b8;
  undefined8 local_150 [41];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1dc = 0x2a6f;
    local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc);
    local_150[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
    if ((bVar1) && (this[0x1d0] != (WorldMap_CornucopiaButton)0x0)) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_0458c580(local_1c8);
      if ((cVar2 != '\0') && (local_1b8 != '\0')) {
        CornucopiaData::CornucopiaData((CornucopiaData *)local_150);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_1d0,(RtObject *)local_150);
        if (cVar2 != '\0') {
          this_00 = (CornucopiaMgr *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
          CornucopiaMgr::LoadData(this_00,(CornucopiaData *)local_150);
          UISingletonDialog<UICornucopia>::ShowDialog();
        }
        CornucopiaData::~CornucopiaData((CornucopiaData *)local_150);
      }
      ActiveItem::~ActiveItem(aAStack_1d0);
    }
  }
  this[0x1d0] = (WorldMap_CornucopiaButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

