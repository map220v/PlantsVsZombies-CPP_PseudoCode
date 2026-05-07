// Class: HotUITableViewCell


/* HotUITableViewCell::~HotUITableViewCell() */

void __thiscall HotUITableViewCell::~HotUITableViewCell(HotUITableViewCell *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066722b0;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_06672630;
  HotUIButton::~HotUIButton((HotUIButton *)this);
  return;
}


/* HotUITableViewCell::~HotUITableViewCell() */

void __thiscall HotUITableViewCell::~HotUITableViewCell(HotUITableViewCell *this)

{
  ~HotUITableViewCell(this);
  AK::FreeHook(this);
  return;
}


/* HotUITableViewCell::CalculateAnchorLocation() */

HotUITableViewCell __thiscall HotUITableViewCell::CalculateAnchorLocation(HotUITableViewCell *this)

{
  HotUITableViewCell HVar1;
  
  HVar1 = this[0xd1];
  if (HVar1 != (HotUITableViewCell)0x0) {
    this[0xd1] = (HotUITableViewCell)0x0;
    HotUIWidget::notifyAnchorListenersOfChange((HotUIWidget *)this);
  }
  return HVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITableViewCell::StaticClassInit() */

void HotUITableViewCell::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITableViewCell");
    (*pcVar2)(plVar1,asStack_10,FUN_03650c7c,0x290,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITableViewCell::StaticGetClass() */

long * HotUITableViewCell::StaticGetClass(void)

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
  uVar2 = HotUIButton::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITableViewCell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITableViewCell::HotUITableViewCell() */

void __thiscall HotUITableViewCell::HotUITableViewCell(HotUITableViewCell *this)

{
  HotUIWidget aHStack_218 [528];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIButton::HotUIButton((HotUIButton *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066722b0;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_06672630;
  HotUIWidget::HotUIWidget(aHStack_218);
  HotUIWidget::~HotUIWidget(aHStack_218);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITableViewCell::StaticNew() */

HotUITableViewCell * HotUITableViewCell::StaticNew(void)

{
  HotUITableViewCell *this;
  
  this = ::operator_new(0x290);
  HotUITableViewCell(this);
  return this;
}

