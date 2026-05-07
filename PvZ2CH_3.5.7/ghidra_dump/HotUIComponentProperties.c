// Class: HotUIComponentProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIComponentProperties::StaticClassInit() */

void HotUIComponentProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIComponentProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03624538,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIComponentProperties::StaticGetClass() */

long * HotUIComponentProperties::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIComponentProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIComponentProperties::GetClass() const */

long * HotUIComponentProperties::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIComponentProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIComponentProperties::GetComponentClass() const */

long * HotUIComponentProperties::GetComponentClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIComponent::sClass != (long *)0x0) {
    return HotUIComponent::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIComponent::sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIComponent",uVar2,HotUIComponent::StaticNew);
  HotUIComponent::StaticClassInit();
  return HotUIComponent::sClass;
}


/* HotUIComponentProperties::HotUIComponentProperties() */

void __thiscall HotUIComponentProperties::HotUIComponentProperties(HotUIComponentProperties *this)

{
  size_t in_x2;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0666bd90;
  Set8BytesTo0((string *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* HotUIComponentProperties::StaticNew() */

HotUIComponentProperties * HotUIComponentProperties::StaticNew(void)

{
  HotUIComponentProperties *this;
  
  this = ::operator_new(0x30);
  HotUIComponentProperties(this);
  return this;
}


/* HotUIComponentProperties::~HotUIComponentProperties() */

void __thiscall HotUIComponentProperties::~HotUIComponentProperties(HotUIComponentProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666bd90;
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* HotUIComponentProperties::~HotUIComponentProperties() */

void __thiscall HotUIComponentProperties::~HotUIComponentProperties(HotUIComponentProperties *this)

{
  ~HotUIComponentProperties(this);
  AK::FreeHook(this);
  return;
}

