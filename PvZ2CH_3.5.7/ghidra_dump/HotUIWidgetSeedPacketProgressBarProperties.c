// Class: HotUIWidgetSeedPacketProgressBarProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetSeedPacketProgressBarProperties::StaticClassInit() */

void HotUIWidgetSeedPacketProgressBarProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetSeedPacketProgressBarProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_033bf1d0,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetSeedPacketProgressBarProperties::StaticGetClass() */

long * HotUIWidgetSeedPacketProgressBarProperties::StaticGetClass(void)

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
  uVar2 = HotUIWidgetProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetSeedPacketProgressBarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetSeedPacketProgressBarProperties::GetClass() const */

long * HotUIWidgetSeedPacketProgressBarProperties::GetClass(void)

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
  uVar2 = HotUIWidgetProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetSeedPacketProgressBarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetSeedPacketProgressBarProperties::GetWidgetClass() const */

long * HotUIWidgetSeedPacketProgressBarProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIWidgetSeedPacketProgressBar::sClass != (long *)0x0) {
    return HotUIWidgetSeedPacketProgressBar::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIWidgetSeedPacketProgressBar::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetSeedPacketProgressBar",uVar2,
            HotUIWidgetSeedPacketProgressBar::StaticNew);
  HotUIWidgetSeedPacketProgressBar::StaticClassInit();
  return HotUIWidgetSeedPacketProgressBar::sClass;
}


/* HotUIWidgetSeedPacketProgressBarProperties::HotUIWidgetSeedPacketProgressBarProperties() */

void __thiscall
HotUIWidgetSeedPacketProgressBarProperties::HotUIWidgetSeedPacketProgressBarProperties
          (HotUIWidgetSeedPacketProgressBarProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06617180;
  return;
}


/* HotUIWidgetSeedPacketProgressBarProperties::StaticNew() */

HotUIWidgetSeedPacketProgressBarProperties *
HotUIWidgetSeedPacketProgressBarProperties::StaticNew(void)

{
  HotUIWidgetSeedPacketProgressBarProperties *this;
  
  this = ::operator_new(0x128);
  HotUIWidgetSeedPacketProgressBarProperties(this);
  return this;
}


/* HotUIWidgetSeedPacketProgressBarProperties::~HotUIWidgetSeedPacketProgressBarProperties() */

void __thiscall
HotUIWidgetSeedPacketProgressBarProperties::~HotUIWidgetSeedPacketProgressBarProperties
          (HotUIWidgetSeedPacketProgressBarProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06617180;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIWidgetSeedPacketProgressBarProperties::~HotUIWidgetSeedPacketProgressBarProperties() */

void __thiscall
HotUIWidgetSeedPacketProgressBarProperties::~HotUIWidgetSeedPacketProgressBarProperties
          (HotUIWidgetSeedPacketProgressBarProperties *this)

{
  ~HotUIWidgetSeedPacketProgressBarProperties(this);
  AK::FreeHook(this);
  return;
}

