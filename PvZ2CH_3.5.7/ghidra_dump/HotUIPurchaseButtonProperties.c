// Class: HotUIPurchaseButtonProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPurchaseButtonProperties::StaticClassInit() */

void HotUIPurchaseButtonProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPurchaseButtonProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0364b2f4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPurchaseButtonProperties::StaticGetClass() */

long * HotUIPurchaseButtonProperties::StaticGetClass(void)

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
  uVar2 = HotUIButtonProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPurchaseButtonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPurchaseButtonProperties::GetClass() const */

long * HotUIPurchaseButtonProperties::GetClass(void)

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
  uVar2 = HotUIButtonProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPurchaseButtonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPurchaseButtonProperties::GetWidgetClass() const */

long * HotUIPurchaseButtonProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIPurchaseButton::sClass != (long *)0x0) {
    return HotUIPurchaseButton::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIPurchaseButton::sClass = plVar1;
  uVar2 = HotUIButton::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPurchaseButton",uVar2,HotUIPurchaseButton::StaticNew);
  HotUIPurchaseButton::StaticClassInit();
  return HotUIPurchaseButton::sClass;
}


/* HotUIPurchaseButtonProperties::HotUIPurchaseButtonProperties() */

void __thiscall
HotUIPurchaseButtonProperties::HotUIPurchaseButtonProperties(HotUIPurchaseButtonProperties *this)

{
  HotUIButtonProperties::HotUIButtonProperties((HotUIButtonProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06670950;
  Set8BytesTo0(this + 0x1b8);
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c0) = 0x19;
  *(undefined4 *)(this + 0x1c8) = 0x32;
  return;
}


/* HotUIPurchaseButtonProperties::StaticNew() */

HotUIPurchaseButtonProperties * HotUIPurchaseButtonProperties::StaticNew(void)

{
  HotUIPurchaseButtonProperties *this;
  
  this = ::operator_new(0x1d0);
  HotUIPurchaseButtonProperties(this);
  return this;
}


/* HotUIPurchaseButtonProperties::~HotUIPurchaseButtonProperties() */

void __thiscall
HotUIPurchaseButtonProperties::~HotUIPurchaseButtonProperties(HotUIPurchaseButtonProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06670950;
  std::string::~string((string *)(this + 0x1b8));
  HotUIButtonProperties::~HotUIButtonProperties((HotUIButtonProperties *)this);
  return;
}


/* HotUIPurchaseButtonProperties::~HotUIPurchaseButtonProperties() */

void __thiscall
HotUIPurchaseButtonProperties::~HotUIPurchaseButtonProperties(HotUIPurchaseButtonProperties *this)

{
  ~HotUIPurchaseButtonProperties(this);
  AK::FreeHook(this);
  return;
}

