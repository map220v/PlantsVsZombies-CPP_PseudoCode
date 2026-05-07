// Class: MusicalJamProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MusicalJamProperties::StaticClassInit() */

void MusicalJamProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MusicalJamProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0484e118,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MusicalJamProperties::StaticGetClass() */

long * MusicalJamProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MusicalJamProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MusicalJamProperties::GetClass() const */

long * MusicalJamProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MusicalJamProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MusicalJamProperties::MusicalJamProperties() */

void __thiscall MusicalJamProperties::MusicalJamProperties(MusicalJamProperties *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0690b610;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x70));
  return;
}


/* MusicalJamProperties::StaticNew() */

MusicalJamProperties * MusicalJamProperties::StaticNew(void)

{
  MusicalJamProperties *this;
  
  this = ::operator_new(0xa0);
  MusicalJamProperties(this);
  return this;
}


/* MusicalJamProperties::~MusicalJamProperties() */

void __thiscall MusicalJamProperties::~MusicalJamProperties(MusicalJamProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0690b610;
  std::
  map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
  ::~map((map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
          *)(this + 0x70));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(this + 0x40));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* MusicalJamProperties::~MusicalJamProperties() */

void __thiscall MusicalJamProperties::~MusicalJamProperties(MusicalJamProperties *this)

{
  ~MusicalJamProperties(this);
  AK::FreeHook(this);
  return;
}

