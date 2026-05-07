// Class: PennyPerkProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkProperties::StaticClassInit() */

void PennyPerkProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c3200,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkProperties::StaticGetClass() */

long * PennyPerkProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkProperties::GetClass() const */

long * PennyPerkProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkProperties::TranslatePerkName() */

void PennyPerkProperties::TranslatePerkName(void)

{
  long in_x0;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)(in_x0 + 0x10),___stack_chk_guard);
  std::operator+("[PERK_NAME_",asStack_18);
  std::operator+(asStack_10,"]");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  Sexy::ToWString(asStack_20);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkProperties::PennyPerkProperties() */

void __thiscall PennyPerkProperties::PennyPerkProperties(PennyPerkProperties *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06680ed0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PennyPerkProperties::StaticNew() */

PennyPerkProperties * PennyPerkProperties::StaticNew(void)

{
  PennyPerkProperties *this;
  
  this = ::operator_new(0x60);
  PennyPerkProperties(this);
  return this;
}


/* PennyPerkProperties::~PennyPerkProperties() */

void __thiscall PennyPerkProperties::~PennyPerkProperties(PennyPerkProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06680ed0;
  std::vector<MapEventSubType,std::allocator<MapEventSubType>>::~vector
            ((vector<MapEventSubType,std::allocator<MapEventSubType>> *)(this + 0x48));
  std::vector<MapEventSubType,std::allocator<MapEventSubType>>::~vector
            ((vector<MapEventSubType,std::allocator<MapEventSubType>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PennyPerkProperties::~PennyPerkProperties() */

void __thiscall PennyPerkProperties::~PennyPerkProperties(PennyPerkProperties *this)

{
  ~PennyPerkProperties(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkProperties::PennyPerkProperties(PennyPerkProperties const&) */

void __thiscall
PennyPerkProperties::PennyPerkProperties(PennyPerkProperties *this,PennyPerkProperties *param_1)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  *(undefined ***)this = &PTR_GetClass_06680ed0;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  std::vector<MapEventSubType,std::allocator<MapEventSubType>>::vector
            ((vector<MapEventSubType,std::allocator<MapEventSubType>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<MapEventSubType,std::allocator<MapEventSubType>>::vector
            ((vector<MapEventSubType,std::allocator<MapEventSubType>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  return;
}

