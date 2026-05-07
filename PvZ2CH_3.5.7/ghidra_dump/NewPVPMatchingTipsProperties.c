// Class: NewPVPMatchingTipsProperties


/* NewPVPMatchingTipsProperties::GetWidgetClass() const */

long * NewPVPMatchingTipsProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewPVPMatchingTips::sClass != (long *)0x0) {
    return NewPVPMatchingTips::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewPVPMatchingTips::sClass = plVar1;
  uVar2 = HotUILabel::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPMatchingTips",uVar2,NewPVPMatchingTips::StaticNew);
  NewPVPMatchingTips::StaticClassInit();
  return NewPVPMatchingTips::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMatchingTipsProperties::StaticClassInit() */

void NewPVPMatchingTipsProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPMatchingTipsProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034c9968,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMatchingTipsProperties::StaticGetClass() */

long * NewPVPMatchingTipsProperties::StaticGetClass(void)

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
  uVar2 = HotUILabelProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPMatchingTipsProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPMatchingTipsProperties::GetClass() const */

long * NewPVPMatchingTipsProperties::GetClass(void)

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
  uVar2 = HotUILabelProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPMatchingTipsProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPMatchingTipsProperties::NewPVPMatchingTipsProperties() */

void __thiscall
NewPVPMatchingTipsProperties::NewPVPMatchingTipsProperties(NewPVPMatchingTipsProperties *this)

{
  HotUILabelProperties::HotUILabelProperties((HotUILabelProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664bef0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  return;
}


/* NewPVPMatchingTipsProperties::StaticNew() */

NewPVPMatchingTipsProperties * NewPVPMatchingTipsProperties::StaticNew(void)

{
  NewPVPMatchingTipsProperties *this;
  
  this = ::operator_new(0x168);
  NewPVPMatchingTipsProperties(this);
  return this;
}


/* NewPVPMatchingTipsProperties::~NewPVPMatchingTipsProperties() */

void __thiscall
NewPVPMatchingTipsProperties::~NewPVPMatchingTipsProperties(NewPVPMatchingTipsProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664bef0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x150));
  HotUILabelProperties::~HotUILabelProperties((HotUILabelProperties *)this);
  return;
}


/* NewPVPMatchingTipsProperties::~NewPVPMatchingTipsProperties() */

void __thiscall
NewPVPMatchingTipsProperties::~NewPVPMatchingTipsProperties(NewPVPMatchingTipsProperties *this)

{
  ~NewPVPMatchingTipsProperties(this);
  AK::FreeHook(this);
  return;
}

