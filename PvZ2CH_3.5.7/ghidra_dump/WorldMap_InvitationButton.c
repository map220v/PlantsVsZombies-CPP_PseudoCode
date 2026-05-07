// Class: WorldMap_InvitationButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_InvitationButton::StaticClassInit() */

void WorldMap_InvitationButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_InvitationButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458e6f8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_InvitationButton::StaticGetClass() */

long * WorldMap_InvitationButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_InvitationButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_InvitationButton::GetClass() const */

long * WorldMap_InvitationButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_InvitationButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_InvitationButton::~WorldMap_InvitationButton() */

void __thiscall
WorldMap_InvitationButton::~WorldMap_InvitationButton(WorldMap_InvitationButton *this)

{
  *(undefined ***)this = &PTR_GetClass_068637a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_InvitationButton_06863988;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_InvitationButton::~WorldMap_InvitationButton() */

void __thiscall
WorldMap_InvitationButton::~WorldMap_InvitationButton(WorldMap_InvitationButton *this)

{
  ~WorldMap_InvitationButton(this + -0x10);
  return;
}


/* WorldMap_InvitationButton::~WorldMap_InvitationButton() */

void __thiscall
WorldMap_InvitationButton::~WorldMap_InvitationButton(WorldMap_InvitationButton *this)

{
  ~WorldMap_InvitationButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_InvitationButton::~WorldMap_InvitationButton() */

void __thiscall
WorldMap_InvitationButton::~WorldMap_InvitationButton(WorldMap_InvitationButton *this)

{
  ~WorldMap_InvitationButton(this + -0x10);
  return;
}


/* WorldMap_InvitationButton::onButtonClicked() */

void __thiscall WorldMap_InvitationButton::onButtonClicked(WorldMap_InvitationButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a74,true,0);
  this[0x1d0] = (WorldMap_InvitationButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_InvitationButton::WorldMap_InvitationButton() */

void __thiscall
WorldMap_InvitationButton::WorldMap_InvitationButton(WorldMap_InvitationButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_068637a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_InvitationButton_06863988;
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


/* WorldMap_InvitationButton::StaticNew() */

WorldMap_InvitationButton * WorldMap_InvitationButton::StaticNew(void)

{
  WorldMap_InvitationButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_InvitationButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_InvitationButton::CheckActivated() */

void __thiscall WorldMap_InvitationButton::CheckActivated(WorldMap_InvitationButton *this)

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
/* WorldMap_InvitationButton::onNotifyRefreshActivityListReal(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_InvitationButton::onNotifyRefreshActivityListReal
          (WorldMap_InvitationButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_14c;
  undefined8 local_148;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  undefined8 local_c0 [23];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_14c = 0x2a74;
    local_148 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_14c);
    local_c0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_148,(rbtree_iterator *)local_c0);
    if ((bVar1) && (this[0x1d0] != (WorldMap_InvitationButton)0x0)) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_0458c580(local_138);
      if ((cVar2 != '\0') && (local_128 != '\0')) {
        InvitationData::InvitationData((InvitationData *)local_c0);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)local_c0);
        if (cVar2 != '\0') {
          UISingletonDialog<UIInvitation>::ShowDialog();
        }
        InvitationData::~InvitationData((InvitationData *)local_c0);
      }
      ActiveItem::~ActiveItem(aAStack_140);
    }
  }
  this[0x1d0] = (WorldMap_InvitationButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

