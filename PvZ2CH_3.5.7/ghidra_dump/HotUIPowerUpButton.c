// Class: HotUIPowerUpButton


/* HotUIPowerUpButton::onLayoutFinalized() */

void __thiscall HotUIPowerUpButton::onLayoutFinalized(HotUIPowerUpButton *this)

{
  (**(code **)(**(long **)(this + 0x218) + 0x198))
            (*(long **)(this + 0x218),0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54))
  ;
  return;
}


/* HotUIPowerUpButton::onInitializeWidget() */

void __thiscall HotUIPowerUpButton::onInitializeWidget(HotUIPowerUpButton *this)

{
  long lVar1;
  string *psVar2;
  string *psVar3;
  PowerUpUIButton *this_00;
  
  lVar1 = ArcadePropertySheet::Get();
  psVar2 = (string *)FUN_03649464(*(undefined8 *)(lVar1 + 0x28));
  psVar3 = (string *)FUN_03649460(*(undefined8 *)(psVar2 + 8));
  this_00 = ::operator_new(800);
  PowerUpUIButton::PowerUpUIButton(this_00,0,psVar2,psVar3);
  *(PowerUpUIButton **)(this + 0x218) = this_00;
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPowerUpButton::StaticClassInit() */

void HotUIPowerUpButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPowerUpButton");
    (*pcVar2)(plVar1,asStack_10,FUN_03649820,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPowerUpButton::StaticGetClass() */

long * HotUIPowerUpButton::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPowerUpButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPowerUpButton::HotUIPowerUpButton() */

void __thiscall HotUIPowerUpButton::HotUIPowerUpButton(HotUIPowerUpButton *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x210));
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_06670070;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_066703e0;
  return;
}


/* HotUIPowerUpButton::StaticNew() */

HotUIPowerUpButton * HotUIPowerUpButton::StaticNew(void)

{
  HotUIPowerUpButton *this;
  
  this = ::operator_new(0x220);
  HotUIPowerUpButton(this);
  return this;
}


/* HotUIPowerUpButton::~HotUIPowerUpButton() */

void __thiscall HotUIPowerUpButton::~HotUIPowerUpButton(HotUIPowerUpButton *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06670070;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_066703e0;
  HotUIWidget::RemoveWidget((HotUIWidget *)this,*(Widget **)(this + 0x218));
  if (*(long **)(this + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x218) + 0x18))();
    *(undefined8 *)(this + 0x218) = 0;
  }
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIPowerUpButton::~HotUIPowerUpButton() */

void __thiscall HotUIPowerUpButton::~HotUIPowerUpButton(HotUIPowerUpButton *this)

{
  ~HotUIPowerUpButton(this);
  AK::FreeHook(this);
  return;
}

