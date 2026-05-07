// Class: CardSettingProperty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSettingProperty::StaticClassInit() */

void CardSettingProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardSettingProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_035fdfb8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardSettingProperty::StaticGetClass() */

long * CardSettingProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardSettingProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardSettingProperty::GetClass() const */

long * CardSettingProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"CardSettingProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardSettingProperty::CardSettingProperty() */

void __thiscall CardSettingProperty::CardSettingProperty(CardSettingProperty *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06666350;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* CardSettingProperty::StaticNew() */

CardSettingProperty * CardSettingProperty::StaticNew(void)

{
  CardSettingProperty *this;
  
  this = ::operator_new(0x58);
  CardSettingProperty(this);
  return this;
}


/* CardSettingProperty::~CardSettingProperty() */

void __thiscall CardSettingProperty::~CardSettingProperty(CardSettingProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06666350;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* CardSettingProperty::~CardSettingProperty() */

void __thiscall CardSettingProperty::~CardSettingProperty(CardSettingProperty *this)

{
  ~CardSettingProperty(this);
  AK::FreeHook(this);
  return;
}

