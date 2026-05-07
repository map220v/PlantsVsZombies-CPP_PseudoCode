// Class: HotUIJoustCrownCollectionEffectProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIJoustCrownCollectionEffectProperties::StaticClassInit() */

void HotUIJoustCrownCollectionEffectProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIJoustCrownCollectionEffectProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0362a214,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIJoustCrownCollectionEffectProperties::StaticGetClass() */

long * HotUIJoustCrownCollectionEffectProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIJoustCrownCollectionEffectProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIJoustCrownCollectionEffectProperties::GetClass() const */

long * HotUIJoustCrownCollectionEffectProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIJoustCrownCollectionEffectProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIJoustCrownCollectionEffectProperties::GetWidgetClass() const */

long * HotUIJoustCrownCollectionEffectProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIJoustCrownCollectionEffect::sClass != (long *)0x0) {
    return HotUIJoustCrownCollectionEffect::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIJoustCrownCollectionEffect::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIJoustCrownCollectionEffect",uVar2,
            HotUIJoustCrownCollectionEffect::StaticNew);
  HotUIJoustCrownCollectionEffect::StaticClassInit();
  return HotUIJoustCrownCollectionEffect::sClass;
}


/* HotUIJoustCrownCollectionEffectProperties::HotUIJoustCrownCollectionEffectProperties() */

void __thiscall
HotUIJoustCrownCollectionEffectProperties::HotUIJoustCrownCollectionEffectProperties
          (HotUIJoustCrownCollectionEffectProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666c750;
  Set8BytesTo0(this + 0x128);
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0x40c90fdb;
  return;
}


/* HotUIJoustCrownCollectionEffectProperties::StaticNew() */

HotUIJoustCrownCollectionEffectProperties *
HotUIJoustCrownCollectionEffectProperties::StaticNew(void)

{
  HotUIJoustCrownCollectionEffectProperties *this;
  
  this = ::operator_new(0x150);
  HotUIJoustCrownCollectionEffectProperties(this);
  return this;
}


/* HotUIJoustCrownCollectionEffectProperties::~HotUIJoustCrownCollectionEffectProperties() */

void __thiscall
HotUIJoustCrownCollectionEffectProperties::~HotUIJoustCrownCollectionEffectProperties
          (HotUIJoustCrownCollectionEffectProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666c750;
  std::string::~string((string *)(this + 0x128));
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* HotUIJoustCrownCollectionEffectProperties::~HotUIJoustCrownCollectionEffectProperties() */

void __thiscall
HotUIJoustCrownCollectionEffectProperties::~HotUIJoustCrownCollectionEffectProperties
          (HotUIJoustCrownCollectionEffectProperties *this)

{
  ~HotUIJoustCrownCollectionEffectProperties(this);
  AK::FreeHook(this);
  return;
}

