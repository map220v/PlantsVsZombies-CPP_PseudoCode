// Class: HotUIAnimPathProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnimPathProperties::StaticClassInit() */

void HotUIAnimPathProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIAnimPathProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0361f684,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAnimPathProperties::StaticGetClass() */

long * HotUIAnimPathProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIAnimPathProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIAnimPathProperties::GetClass() const */

long * HotUIAnimPathProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIAnimPathProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIAnimPathProperties::GetWidgetClass() const */

long * HotUIAnimPathProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIAnimPath::sClass != (long *)0x0) {
    return HotUIAnimPath::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIAnimPath::sClass = plVar1;
  uVar2 = HotUIAnim::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIAnimPath",uVar2,HotUIAnimPath::StaticNew);
  HotUIAnimPath::StaticClassInit();
  return HotUIAnimPath::sClass;
}


/* HotUIAnimPathProperties::HotUIAnimPathProperties() */

void __thiscall HotUIAnimPathProperties::HotUIAnimPathProperties(HotUIAnimPathProperties *this)

{
  HotUIAnimProperties::HotUIAnimProperties((HotUIAnimProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666abd0;
  return;
}


/* HotUIAnimPathProperties::StaticNew() */

HotUIAnimPathProperties * HotUIAnimPathProperties::StaticNew(void)

{
  HotUIAnimPathProperties *this;
  
  this = ::operator_new(0x170);
  HotUIAnimPathProperties(this);
  return this;
}


/* HotUIAnimPathProperties::~HotUIAnimPathProperties() */

void __thiscall HotUIAnimPathProperties::~HotUIAnimPathProperties(HotUIAnimPathProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666abd0;
  HotUIAnimProperties::~HotUIAnimProperties((HotUIAnimProperties *)this);
  return;
}


/* HotUIAnimPathProperties::~HotUIAnimPathProperties() */

void __thiscall HotUIAnimPathProperties::~HotUIAnimPathProperties(HotUIAnimPathProperties *this)

{
  ~HotUIAnimPathProperties(this);
  AK::FreeHook(this);
  return;
}

