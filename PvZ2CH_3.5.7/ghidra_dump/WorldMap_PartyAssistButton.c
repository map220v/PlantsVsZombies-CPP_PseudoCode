// Class: WorldMap_PartyAssistButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PartyAssistButton::StaticClassInit() */

void WorldMap_PartyAssistButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PartyAssistButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458ed34,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PartyAssistButton::StaticGetClass() */

long * WorldMap_PartyAssistButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PartyAssistButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PartyAssistButton::GetClass() const */

long * WorldMap_PartyAssistButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PartyAssistButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PartyAssistButton::~WorldMap_PartyAssistButton() */

void __thiscall
WorldMap_PartyAssistButton::~WorldMap_PartyAssistButton(WorldMap_PartyAssistButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06863e00;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PartyAssistButton_06863fe8;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_PartyAssistButton::~WorldMap_PartyAssistButton() */

void __thiscall
WorldMap_PartyAssistButton::~WorldMap_PartyAssistButton(WorldMap_PartyAssistButton *this)

{
  ~WorldMap_PartyAssistButton(this + -0x10);
  return;
}


/* WorldMap_PartyAssistButton::~WorldMap_PartyAssistButton() */

void __thiscall
WorldMap_PartyAssistButton::~WorldMap_PartyAssistButton(WorldMap_PartyAssistButton *this)

{
  ~WorldMap_PartyAssistButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PartyAssistButton::~WorldMap_PartyAssistButton() */

void __thiscall
WorldMap_PartyAssistButton::~WorldMap_PartyAssistButton(WorldMap_PartyAssistButton *this)

{
  ~WorldMap_PartyAssistButton(this + -0x10);
  return;
}


/* WorldMap_PartyAssistButton::onButtonClicked() */

void __thiscall WorldMap_PartyAssistButton::onButtonClicked(WorldMap_PartyAssistButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a79,true,0);
  this[0x1d0] = (WorldMap_PartyAssistButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PartyAssistButton::WorldMap_PartyAssistButton() */

void __thiscall
WorldMap_PartyAssistButton::WorldMap_PartyAssistButton(WorldMap_PartyAssistButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06863e00;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PartyAssistButton_06863fe8;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PARTY_ASSIST");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PartyAssistButton::StaticNew() */

WorldMap_PartyAssistButton * WorldMap_PartyAssistButton::StaticNew(void)

{
  WorldMap_PartyAssistButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_PartyAssistButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PartyAssistButton::CheckActivated() */

void __thiscall WorldMap_PartyAssistButton::CheckActivated(WorldMap_PartyAssistButton *this)

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
/* WorldMap_PartyAssistButton::onNotifyRefreshActivityListReal(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_PartyAssistButton::onNotifyRefreshActivityListReal
          (WorldMap_PartyAssistButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PartyAssistMgr *this_00;
  int local_194;
  undefined8 local_190;
  ActiveItem aAStack_188 [8];
  undefined4 local_180;
  char local_170;
  undefined8 local_108 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_194 = 0x2a79;
    local_190 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_194);
    local_108[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_190,(rbtree_iterator *)local_108);
    if ((bVar1) && (this[0x1d0] != (WorldMap_PartyAssistButton)0x0)) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_0458c580(local_180);
      if ((cVar2 != '\0') && (local_170 != '\0')) {
        PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)local_108);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_188,(RtObject *)local_108);
        if (cVar2 != '\0') {
          this_00 = (PartyAssistMgr *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
          PartyAssistMgr::LoadData(this_00,(PartyAssistMainData *)local_108);
          UISingletonDialog<UIPartyAssist>::ShowDialog();
        }
        PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)local_108);
      }
      ActiveItem::~ActiveItem(aAStack_188);
    }
  }
  this[0x1d0] = (WorldMap_PartyAssistButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

