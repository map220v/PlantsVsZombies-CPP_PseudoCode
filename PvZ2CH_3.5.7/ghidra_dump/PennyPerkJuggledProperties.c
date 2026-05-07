// Class: PennyPerkJuggledProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggledProperties::GetDescriptionForLevel(int) */

void PennyPerkJuggledProperties::GetDescriptionForLevel(int param_1)

{
  ulong uVar1;
  float *pfVar2;
  int in_w1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(uVar1 + 0x20));
  if (in_w1 < 0) {
    in_w1 = 0;
  }
  pfVar2 = (float *)FUN_036c90a4(*(undefined8 *)(uVar1 + 0x60),(long)in_w1);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)(uint)(int)*pfVar2);
  TodReplaceString(awStack_18,L"{TIME}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  pfVar2 = (float *)FUN_036c90a4(*(undefined8 *)(uVar1 + 0x78),(long)in_w1);
  Sexy::StrFormat(L"%d",awStack_10,(ulong)(uint)(int)*pfVar2);
  TodReplaceString(awStack_20,L"{DURATION}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggledProperties::StaticClassInit() */

void PennyPerkJuggledProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkJuggledProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036c9820,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkJuggledProperties::StaticGetClass() */

long * PennyPerkJuggledProperties::StaticGetClass(void)

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
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkJuggledProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkJuggledProperties::GetClass() const */

long * PennyPerkJuggledProperties::GetClass(void)

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
  uVar2 = PennyPerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkJuggledProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkJuggledProperties::PennyPerkJuggledProperties() */

void __thiscall
PennyPerkJuggledProperties::PennyPerkJuggledProperties(PennyPerkJuggledProperties *this)

{
  PennyPerkProperties::PennyPerkProperties((PennyPerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066822a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  DVec3::DVec3((DVec3 *)(this + 0x90));
  DVec3::DVec3((DVec3 *)(this + 0x9c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  return;
}


/* PennyPerkJuggledProperties::StaticNew() */

PennyPerkJuggledProperties * PennyPerkJuggledProperties::StaticNew(void)

{
  PennyPerkJuggledProperties *this;
  
  this = ::operator_new(0x108);
  PennyPerkJuggledProperties(this);
  return this;
}


/* PennyPerkJuggledProperties::~PennyPerkJuggledProperties() */

void __thiscall
PennyPerkJuggledProperties::~PennyPerkJuggledProperties(PennyPerkJuggledProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066822a0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xc0));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x78));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  PennyPerkProperties::~PennyPerkProperties((PennyPerkProperties *)this);
  return;
}


/* PennyPerkJuggledProperties::~PennyPerkJuggledProperties() */

void __thiscall
PennyPerkJuggledProperties::~PennyPerkJuggledProperties(PennyPerkJuggledProperties *this)

{
  ~PennyPerkJuggledProperties(this);
  AK::FreeHook(this);
  return;
}

