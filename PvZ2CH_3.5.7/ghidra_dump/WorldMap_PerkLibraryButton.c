// Class: WorldMap_PerkLibraryButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PerkLibraryButton::initLoadingResourcesGroupList() */

void __thiscall
WorldMap_PerkLibraryButton::initLoadingResourcesGroupList(WorldMap_PerkLibraryButton *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_Perks");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_Rift_Common");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PerkLibraryButton::StaticClassInit() */

void WorldMap_PerkLibraryButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PerkLibraryButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0368a0d0,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PerkLibraryButton::StaticGetClass() */

long * WorldMap_PerkLibraryButton::StaticGetClass(void)

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
  uVar2 = UIButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PerkLibraryButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PerkLibraryButton::GetClass() const */

long * WorldMap_PerkLibraryButton::GetClass(void)

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
  uVar2 = UIButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PerkLibraryButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PerkLibraryButton::~WorldMap_PerkLibraryButton() */

void __thiscall
WorldMap_PerkLibraryButton::~WorldMap_PerkLibraryButton(WorldMap_PerkLibraryButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0667c290;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PerkLibraryButton_0667c440;
  UIButtonWidget::~UIButtonWidget((UIButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_PerkLibraryButton::~WorldMap_PerkLibraryButton() */

void __thiscall
WorldMap_PerkLibraryButton::~WorldMap_PerkLibraryButton(WorldMap_PerkLibraryButton *this)

{
  ~WorldMap_PerkLibraryButton(this + -0x10);
  return;
}


/* WorldMap_PerkLibraryButton::~WorldMap_PerkLibraryButton() */

void __thiscall
WorldMap_PerkLibraryButton::~WorldMap_PerkLibraryButton(WorldMap_PerkLibraryButton *this)

{
  ~WorldMap_PerkLibraryButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PerkLibraryButton::~WorldMap_PerkLibraryButton() */

void __thiscall
WorldMap_PerkLibraryButton::~WorldMap_PerkLibraryButton(WorldMap_PerkLibraryButton *this)

{
  ~WorldMap_PerkLibraryButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PerkLibraryButton::WorldMap_PerkLibraryButton() */

void __thiscall
WorldMap_PerkLibraryButton::WorldMap_PerkLibraryButton(WorldMap_PerkLibraryButton *this)

{
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIButtonWidget::UIButtonWidget((UIButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0667c290;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PerkLibraryButton_0667c440;
  std::string::string(asStack_30,"Play_UI_Menu_Button_Continue_Press");
  UIButtonWidget::SetSoundPressed(this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Rift_Perks_Panel_Open");
  UIButtonWidget::SetSoundReleased(this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,(CachedUIResourcePtr *)&DAT_06aab688);
  UIButtonWidget::SetImageNormal((UIButtonWidget *)this,asStack_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,(CachedUIResourcePtr *)&DAT_06aab640);
  UIButtonWidget::SetImagePressed((UIButtonWidget *)this,asStack_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
  *(undefined8 *)(this + 0x1f0) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PerkLibraryButton::StaticNew() */

WorldMap_PerkLibraryButton * WorldMap_PerkLibraryButton::StaticNew(void)

{
  WorldMap_PerkLibraryButton *this;
  
  this = ::operator_new(0x1f8);
  WorldMap_PerkLibraryButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PerkLibraryButton::performButtonAction() */

void __thiscall WorldMap_PerkLibraryButton::performButtonAction(WorldMap_PerkLibraryButton *this)

{
  AdaptorPerkLibraryTabbedDialog *this_00;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x198);
  AdaptorPerkLibraryTabbedDialog::AdaptorPerkLibraryTabbedDialog(this_00);
  *(AdaptorPerkLibraryTabbedDialog **)(this + 0x1f0) = this_00;
  FUN_03689edc(afStack_28,this);
  AdaptorTabbedInterface::SetOnCloseAction((AdaptorTabbedInterface *)this_00,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x1f0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PerkLibraryButton::onPerkLibraryClosed() */

void __thiscall WorldMap_PerkLibraryButton::onPerkLibraryClosed(WorldMap_PerkLibraryButton *this)

{
  *(undefined8 *)(this + 0x1f0) = 0;
  return;
}

