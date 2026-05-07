// Class: HotUIImageBorderProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImageBorderProperties::StaticClassInit() */

void HotUIImageBorderProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIImageBorderProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036294c4,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImageBorderProperties::StaticGetClass() */

long * HotUIImageBorderProperties::StaticGetClass(void)

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
  uVar2 = HotUIImageProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIImageBorderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIImageBorderProperties::GetClass() const */

long * HotUIImageBorderProperties::GetClass(void)

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
  uVar2 = HotUIImageProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIImageBorderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIImageBorderProperties::GetWidgetClass() const */

long * HotUIImageBorderProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIImageBorder::sClass != (long *)0x0) {
    return HotUIImageBorder::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIImageBorder::sClass = plVar1;
  uVar2 = HotUIImage::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIImageBorder",uVar2,HotUIImageBorder::StaticNew);
  HotUIImageBorder::StaticClassInit();
  return HotUIImageBorder::sClass;
}


/* HotUIImageBorderProperties::HotUIImageBorderProperties() */

void __thiscall
HotUIImageBorderProperties::HotUIImageBorderProperties(HotUIImageBorderProperties *this)

{
  HotUIImageProperties::HotUIImageProperties((HotUIImageProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666c340;
  Set8BytesTo0(this + 0x1a8);
  DynamicPadding::DynamicPadding((DynamicPadding *)(this + 0x1b0));
  return;
}


/* HotUIImageBorderProperties::StaticNew() */

HotUIImageBorderProperties * HotUIImageBorderProperties::StaticNew(void)

{
  HotUIImageBorderProperties *this;
  
  this = ::operator_new(0x1f0);
  HotUIImageBorderProperties(this);
  return this;
}


/* HotUIImageBorderProperties::~HotUIImageBorderProperties() */

void __thiscall
HotUIImageBorderProperties::~HotUIImageBorderProperties(HotUIImageBorderProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666c340;
  DynamicPadding::~DynamicPadding((DynamicPadding *)(this + 0x1b0));
  std::string::~string((string *)(this + 0x1a8));
  HotUIImageProperties::~HotUIImageProperties((HotUIImageProperties *)this);
  return;
}


/* HotUIImageBorderProperties::~HotUIImageBorderProperties() */

void __thiscall
HotUIImageBorderProperties::~HotUIImageBorderProperties(HotUIImageBorderProperties *this)

{
  ~HotUIImageBorderProperties(this);
  AK::FreeHook(this);
  return;
}

