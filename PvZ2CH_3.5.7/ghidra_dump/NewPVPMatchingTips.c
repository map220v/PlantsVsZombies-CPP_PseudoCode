// Class: NewPVPMatchingTips


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMatchingTips::StaticClassInit() */

void NewPVPMatchingTips::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPMatchingTips");
    (*pcVar2)(plVar1,asStack_10,FUN_034befa4,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMatchingTips::StaticGetClass() */

long * NewPVPMatchingTips::StaticGetClass(void)

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
  uVar2 = HotUILabel::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPMatchingTips",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPMatchingTips::GetTips() */

HotUIZPSMeterProperties * __thiscall NewPVPMatchingTips::GetTips(NewPVPMatchingTips *this)

{
  HotUIZPSMeterProperties *pHVar1;
  
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  return pHVar1 + 0x150;
}


/* NewPVPMatchingTips::NewPVPMatchingTips() */

void __thiscall NewPVPMatchingTips::NewPVPMatchingTips(NewPVPMatchingTips *this)

{
  HotUILabel::HotUILabel((HotUILabel *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0664bb70;
  return;
}


/* NewPVPMatchingTips::StaticNew() */

NewPVPMatchingTips * NewPVPMatchingTips::StaticNew(void)

{
  NewPVPMatchingTips *this;
  
  this = ::operator_new(0x240);
  NewPVPMatchingTips(this);
  return this;
}


/* NewPVPMatchingTips::~NewPVPMatchingTips() */

void __thiscall NewPVPMatchingTips::~NewPVPMatchingTips(NewPVPMatchingTips *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0664bb70;
  HotUILabel::~HotUILabel((HotUILabel *)this);
  return;
}


/* NewPVPMatchingTips::~NewPVPMatchingTips() */

void __thiscall NewPVPMatchingTips::~NewPVPMatchingTips(NewPVPMatchingTips *this)

{
  ~NewPVPMatchingTips(this);
  AK::FreeHook(this);
  return;
}

