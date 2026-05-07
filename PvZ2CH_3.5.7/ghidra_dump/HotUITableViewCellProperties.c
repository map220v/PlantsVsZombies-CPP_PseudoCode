// Class: HotUITableViewCellProperties


/* HotUITableViewCellProperties::GetWidgetClass() const */

long * HotUITableViewCellProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUITableViewCell::sClass != (long *)0x0) {
    return HotUITableViewCell::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUITableViewCell::sClass = plVar1;
  uVar2 = HotUIButton::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITableViewCell",uVar2,HotUITableViewCell::StaticNew);
  HotUITableViewCell::StaticClassInit();
  return HotUITableViewCell::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITableViewCellProperties::StaticClassInit() */

void HotUITableViewCellProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITableViewCellProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03650e90,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITableViewCellProperties::StaticGetClass() */

long * HotUITableViewCellProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUITableViewCellProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITableViewCellProperties::GetClass() const */

long * HotUITableViewCellProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUITableViewCellProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITableViewCellProperties::HotUITableViewCellProperties() */

void __thiscall
HotUITableViewCellProperties::HotUITableViewCellProperties(HotUITableViewCellProperties *this)

{
  HotUIButtonProperties::HotUIButtonProperties((HotUIButtonProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06672680;
  return;
}


/* HotUITableViewCellProperties::StaticNew() */

HotUITableViewCellProperties * HotUITableViewCellProperties::StaticNew(void)

{
  HotUITableViewCellProperties *this;
  
  this = ::operator_new(0x1b8);
  HotUITableViewCellProperties(this);
  return this;
}


/* HotUITableViewCellProperties::~HotUITableViewCellProperties() */

void __thiscall
HotUITableViewCellProperties::~HotUITableViewCellProperties(HotUITableViewCellProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06672680;
  HotUIButtonProperties::~HotUIButtonProperties((HotUIButtonProperties *)this);
  return;
}


/* HotUITableViewCellProperties::~HotUITableViewCellProperties() */

void __thiscall
HotUITableViewCellProperties::~HotUITableViewCellProperties(HotUITableViewCellProperties *this)

{
  ~HotUITableViewCellProperties(this);
  AK::FreeHook(this);
  return;
}

