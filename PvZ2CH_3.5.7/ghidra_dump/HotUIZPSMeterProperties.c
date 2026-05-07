// Class: HotUIZPSMeterProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIZPSMeterProperties::StaticClassInit() */

void HotUIZPSMeterProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIZPSMeterProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03696a74,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIZPSMeterProperties::StaticGetClass() */

long * HotUIZPSMeterProperties::StaticGetClass(void)

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
  uVar2 = HotUIAnimProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIZPSMeterProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIZPSMeterProperties::GetClass() const */

long * HotUIZPSMeterProperties::GetClass(void)

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
  uVar2 = HotUIAnimProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIZPSMeterProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIZPSMeterProperties::GetWidgetClass() const */

long * HotUIZPSMeterProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIZPSMeter::sClass != (long *)0x0) {
    return HotUIZPSMeter::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIZPSMeter::sClass = plVar1;
  uVar2 = HotUIAnim::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIZPSMeter",uVar2,HotUIZPSMeter::StaticNew);
  HotUIZPSMeter::StaticClassInit();
  return HotUIZPSMeter::sClass;
}


/* HotUIZPSMeterProperties::HotUIZPSMeterProperties() */

void __thiscall HotUIZPSMeterProperties::HotUIZPSMeterProperties(HotUIZPSMeterProperties *this)

{
  HotUIAnimProperties::HotUIAnimProperties((HotUIAnimProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667d740;
  return;
}


/* HotUIZPSMeterProperties::StaticNew() */

HotUIZPSMeterProperties * HotUIZPSMeterProperties::StaticNew(void)

{
  HotUIZPSMeterProperties *this;
  
  this = ::operator_new(0x170);
  HotUIZPSMeterProperties(this);
  return this;
}


/* HotUIZPSMeterProperties::~HotUIZPSMeterProperties() */

void __thiscall HotUIZPSMeterProperties::~HotUIZPSMeterProperties(HotUIZPSMeterProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0667d740;
  HotUIAnimProperties::~HotUIAnimProperties((HotUIAnimProperties *)this);
  return;
}


/* HotUIZPSMeterProperties::~HotUIZPSMeterProperties() */

void __thiscall HotUIZPSMeterProperties::~HotUIZPSMeterProperties(HotUIZPSMeterProperties *this)

{
  ~HotUIZPSMeterProperties(this);
  AK::FreeHook(this);
  return;
}

