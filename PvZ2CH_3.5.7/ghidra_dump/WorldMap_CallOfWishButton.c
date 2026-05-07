// Class: WorldMap_CallOfWishButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CallOfWishButton::StaticClassInit() */

void WorldMap_CallOfWishButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_CallOfWishButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458d230,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CallOfWishButton::StaticGetClass() */

long * WorldMap_CallOfWishButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CallOfWishButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CallOfWishButton::GetClass() const */

long * WorldMap_CallOfWishButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CallOfWishButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CallOfWishButton::~WorldMap_CallOfWishButton() */

void __thiscall
WorldMap_CallOfWishButton::~WorldMap_CallOfWishButton(WorldMap_CallOfWishButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06862260;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CallOfWishButton_06862448;
  WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_CallOfWishButton::~WorldMap_CallOfWishButton() */

void __thiscall
WorldMap_CallOfWishButton::~WorldMap_CallOfWishButton(WorldMap_CallOfWishButton *this)

{
  ~WorldMap_CallOfWishButton(this + -0x10);
  return;
}


/* WorldMap_CallOfWishButton::~WorldMap_CallOfWishButton() */

void __thiscall
WorldMap_CallOfWishButton::~WorldMap_CallOfWishButton(WorldMap_CallOfWishButton *this)

{
  ~WorldMap_CallOfWishButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_CallOfWishButton::~WorldMap_CallOfWishButton() */

void __thiscall
WorldMap_CallOfWishButton::~WorldMap_CallOfWishButton(WorldMap_CallOfWishButton *this)

{
  ~WorldMap_CallOfWishButton(this + -0x10);
  return;
}


/* WorldMap_CallOfWishButton::onButtonClicked() */

void __thiscall WorldMap_CallOfWishButton::onButtonClicked(WorldMap_CallOfWishButton *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a53,true,0);
  this[0x1d0] = (WorldMap_CallOfWishButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CallOfWishButton::WorldMap_CallOfWishButton() */

void __thiscall
WorldMap_CallOfWishButton::WorldMap_CallOfWishButton(WorldMap_CallOfWishButton *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_TurnChangeButton::WorldMap_TurnChangeButton((WorldMap_TurnChangeButton *)this);
  *(undefined ***)this = &PTR_GetClass_06862260;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CallOfWishButton_06862448;
  std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_CALL_OF_WISH");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CallOfWishButton::StaticNew() */

WorldMap_CallOfWishButton * WorldMap_CallOfWishButton::StaticNew(void)

{
  WorldMap_CallOfWishButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_CallOfWishButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CallOfWishButton::onNotifyRefreshActivityListReal(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_CallOfWishButton::onNotifyRefreshActivityListReal
          (WorldMap_CallOfWishButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a53;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (this[0x1d0] != (WorldMap_CallOfWishButton)0x0)) {
      LawnApp::ShowActivityCollection(gLawnApp);
    }
  }
  this[0x1d0] = (WorldMap_CallOfWishButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CallOfWishButton::CheckActivated() */

void __thiscall WorldMap_CallOfWishButton::CheckActivated(WorldMap_CallOfWishButton *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [24];
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 == '\0') {
    local_70 = false;
  }
  UIWidget::SetVisible((UIWidget *)this,(bool)local_70);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}

