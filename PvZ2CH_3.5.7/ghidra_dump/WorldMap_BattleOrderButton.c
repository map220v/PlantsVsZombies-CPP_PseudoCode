// Class: WorldMap_BattleOrderButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BattleOrderButton::StaticClassInit() */

void WorldMap_BattleOrderButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_BattleOrderButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458da80,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_BattleOrderButton::StaticGetClass() */

long * WorldMap_BattleOrderButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_BattleOrderButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_BattleOrderButton::GetClass() const */

long * WorldMap_BattleOrderButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_BattleOrderButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_BattleOrderButton::~WorldMap_BattleOrderButton() */

void __thiscall
WorldMap_BattleOrderButton::~WorldMap_BattleOrderButton(WorldMap_BattleOrderButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06862ae0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_BattleOrderButton_06862cc8;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_BattleOrderButton::~WorldMap_BattleOrderButton() */

void __thiscall
WorldMap_BattleOrderButton::~WorldMap_BattleOrderButton(WorldMap_BattleOrderButton *this)

{
  ~WorldMap_BattleOrderButton(this + -0x10);
  return;
}


/* WorldMap_BattleOrderButton::~WorldMap_BattleOrderButton() */

void __thiscall
WorldMap_BattleOrderButton::~WorldMap_BattleOrderButton(WorldMap_BattleOrderButton *this)

{
  ~WorldMap_BattleOrderButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_BattleOrderButton::~WorldMap_BattleOrderButton() */

void __thiscall
WorldMap_BattleOrderButton::~WorldMap_BattleOrderButton(WorldMap_BattleOrderButton *this)

{
  ~WorldMap_BattleOrderButton(this + -0x10);
  return;
}


/* WorldMap_BattleOrderButton::onButtonClicked() */

void __thiscall WorldMap_BattleOrderButton::onButtonClicked(WorldMap_BattleOrderButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a63,true,0);
  this[0x1d0] = (WorldMap_BattleOrderButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BattleOrderButton::CheckActivated() */

void __thiscall WorldMap_BattleOrderButton::CheckActivated(WorldMap_BattleOrderButton *this)

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
/* WorldMap_BattleOrderButton::CheckThemeVersion() */

void __thiscall WorldMap_BattleOrderButton::CheckThemeVersion(WorldMap_BattleOrderButton *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  string *extraout_x1;
  string asStack_208 [8];
  string asStack_200 [8];
  ActiveItem aAStack_1f8 [8];
  undefined4 local_1f0;
  char local_1e0;
  string asStack_178 [352];
  Sexy aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_0458c580(local_1f0);
  if ((cVar1 != '\0') && (local_1e0 != '\0')) {
    BattleOrderData::BattleOrderData((BattleOrderData *)asStack_178);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)asStack_178);
    if (cVar1 != '\0') {
      Sexy::StringToUpper(aSStack_18,extraout_x1);
      uVar3 = FUN_0547429c(asStack_200);
      Sexy::StrFormat("IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_BATTLEORDER_%s",asStack_208,uVar3);
      std::string::~string(asStack_200);
      lVar4 = StringHelper::ToImage(asStack_208,false);
      if (lVar4 != 0) {
        UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_208);
        std::string::~string(asStack_208);
        BattleOrderData::~BattleOrderData((BattleOrderData *)asStack_178);
        ActiveItem::~ActiveItem(aAStack_1f8);
        goto LAB_04594064;
      }
      std::string::~string(asStack_208);
    }
    BattleOrderData::~BattleOrderData((BattleOrderData *)asStack_178);
  }
  std::string::string(asStack_178,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_ENTRY");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_178);
  std::string::~string(asStack_178);
  nop();
  ActiveItem::~ActiveItem(aAStack_1f8);
LAB_04594064:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap_BattleOrderButton::WorldMap_BattleOrderButton() */

void __thiscall
WorldMap_BattleOrderButton::WorldMap_BattleOrderButton(WorldMap_BattleOrderButton *this)

{
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06862ae0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_BattleOrderButton_06862cc8;
  CheckThemeVersion(this);
  return;
}


/* WorldMap_BattleOrderButton::StaticNew() */

WorldMap_BattleOrderButton * WorldMap_BattleOrderButton::StaticNew(void)

{
  WorldMap_BattleOrderButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_BattleOrderButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_BattleOrderButton::onNotifyRefreshActivityListReal(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_BattleOrderButton::onNotifyRefreshActivityListReal
          (WorldMap_BattleOrderButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a63;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (CheckThemeVersion(this), this[0x1d0] != (WorldMap_BattleOrderButton)0x0)) {
      UISingletonDialog<UIBattleOrder>::ShowDialog();
    }
  }
  this[0x1d0] = (WorldMap_BattleOrderButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

