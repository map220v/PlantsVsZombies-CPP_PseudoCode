// Class: HotUIZPSMeter


/* HotUIZPSMeter::~HotUIZPSMeter() */

void __thiscall HotUIZPSMeter::~HotUIZPSMeter(HotUIZPSMeter *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0667d7e0;
  HotUIAnim::~HotUIAnim((HotUIAnim *)this);
  return;
}


/* HotUIZPSMeter::~HotUIZPSMeter() */

void __thiscall HotUIZPSMeter::~HotUIZPSMeter(HotUIZPSMeter *this)

{
  ~HotUIZPSMeter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIZPSMeter::StaticClassInit() */

void HotUIZPSMeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIZPSMeter");
    (*pcVar2)(plVar1,asStack_10,FUN_03696c88,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIZPSMeter::StaticGetClass() */

long * HotUIZPSMeter::StaticGetClass(void)

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
  uVar2 = HotUIAnim::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIZPSMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIZPSMeter::HotUIZPSMeter() */

void __thiscall HotUIZPSMeter::HotUIZPSMeter(HotUIZPSMeter *this)

{
  HotUIAnim::HotUIAnim((HotUIAnim *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0667d7e0;
  return;
}


/* HotUIZPSMeter::StaticNew() */

HotUIZPSMeter * HotUIZPSMeter::StaticNew(void)

{
  HotUIZPSMeter *this;
  
  this = ::operator_new(0x248);
  HotUIZPSMeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIZPSMeter::GetPopAnimName() */

void HotUIZPSMeter::GetPopAnimName(void)

{
  long lVar1;
  char cVar2;
  HotUIWidget *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  cVar2 = RiftUtils::IsSpecialBossEvent();
  if (cVar2 == '\0') {
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"POPANIM_UI_PENNY_PURSUITS_ZPS_ZPS_METER_SPECIAL");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

