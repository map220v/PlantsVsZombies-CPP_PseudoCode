// Class: HotUIImageNetConnectingProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImageNetConnectingProperties::StaticClassInit() */

void HotUIImageNetConnectingProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIImageNetConnectingProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034be654,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImageNetConnectingProperties::StaticGetClass() */

long * HotUIImageNetConnectingProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIImageNetConnectingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIImageNetConnectingProperties::GetClass() const */

long * HotUIImageNetConnectingProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIImageNetConnectingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIImageNetConnectingProperties::GetWidgetClass() const */

long * HotUIImageNetConnectingProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIImageNetConnecting::sClass != (long *)0x0) {
    return HotUIImageNetConnecting::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIImageNetConnecting::sClass = plVar1;
  uVar2 = HotUIImage::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIImageNetConnecting",uVar2,HotUIImageNetConnecting::StaticNew);
  HotUIImageNetConnecting::StaticClassInit();
  return HotUIImageNetConnecting::sClass;
}


/* HotUIImageNetConnectingProperties::HotUIImageNetConnectingProperties() */

void __thiscall
HotUIImageNetConnectingProperties::HotUIImageNetConnectingProperties
          (HotUIImageNetConnectingProperties *this)

{
  HotUIImageProperties::HotUIImageProperties((HotUIImageProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664b350;
  Set8BytesTo0(this + 0x1a0);
  Set8BytesTo0(this + 0x1a8);
  return;
}


/* HotUIImageNetConnectingProperties::StaticNew() */

HotUIImageNetConnectingProperties * HotUIImageNetConnectingProperties::StaticNew(void)

{
  HotUIImageNetConnectingProperties *this;
  
  this = ::operator_new(0x1b0);
  HotUIImageNetConnectingProperties(this);
  return this;
}


/* HotUIImageNetConnectingProperties::~HotUIImageNetConnectingProperties() */

void __thiscall
HotUIImageNetConnectingProperties::~HotUIImageNetConnectingProperties
          (HotUIImageNetConnectingProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664b350;
  std::string::~string((string *)(this + 0x1a8));
  std::string::~string((string *)(this + 0x1a0));
  HotUIImageProperties::~HotUIImageProperties((HotUIImageProperties *)this);
  return;
}


/* HotUIImageNetConnectingProperties::~HotUIImageNetConnectingProperties() */

void __thiscall
HotUIImageNetConnectingProperties::~HotUIImageNetConnectingProperties
          (HotUIImageNetConnectingProperties *this)

{
  ~HotUIImageNetConnectingProperties(this);
  AK::FreeHook(this);
  return;
}

