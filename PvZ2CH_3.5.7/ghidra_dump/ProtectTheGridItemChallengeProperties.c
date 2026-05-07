// Class: ProtectTheGridItemChallengeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeProperties::GetDescriptiveName() const */

void ProtectTheGridItemChallengeProperties::GetDescriptiveName(void)

{
  long in_x0;
  wstring awStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)(in_x0 + 0x68),___stack_chk_guard);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeProperties::GetDescription() const */

void ProtectTheGridItemChallengeProperties::GetDescription(void)

{
  long in_x0;
  wstring awStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)(in_x0 + 0x60),___stack_chk_guard);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectTheGridItemChallengeProperties::StaticClassInit() */

void ProtectTheGridItemChallengeProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ProtectedGridItemEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_04c9a9d8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ProtectTheGridItemChallengeProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04c9bc84,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectTheGridItemChallengeProperties::StaticGetClass() */

long * ProtectTheGridItemChallengeProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ProtectTheGridItemChallengeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectTheGridItemChallengeProperties::GetClass() const */

long * ProtectTheGridItemChallengeProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ProtectTheGridItemChallengeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectTheGridItemChallengeProperties::GetModuleClass() const */

long * ProtectTheGridItemChallengeProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ProtectTheGridItemChallengeModule::sClass != (long *)0x0) {
    return ProtectTheGridItemChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ProtectTheGridItemChallengeModule::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"ProtectTheGridItemChallengeModule",uVar2,
            ProtectTheGridItemChallengeModule::StaticNew);
  ProtectTheGridItemChallengeModule::StaticClassInit();
  return ProtectTheGridItemChallengeModule::sClass;
}


/* ProtectTheGridItemChallengeProperties::ProtectTheGridItemChallengeProperties() */

void __thiscall
ProtectTheGridItemChallengeProperties::ProtectTheGridItemChallengeProperties
          (ProtectTheGridItemChallengeProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06996a50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  Set8BytesTo0((string *)(this + 0x60));
  Set8BytesTo0((string *)(this + 0x68));
  *(undefined4 *)(this + 0x58) = 0;
  std::string::append((string *)(this + 0x60),"Description",in_x2);
  std::string::append((string *)(this + 0x68),"DescriptiveName",in_x2);
  return;
}


/* ProtectTheGridItemChallengeProperties::StaticNew() */

ProtectTheGridItemChallengeProperties * ProtectTheGridItemChallengeProperties::StaticNew(void)

{
  ProtectTheGridItemChallengeProperties *this;
  
  this = ::operator_new(0x70);
  ProtectTheGridItemChallengeProperties(this);
  return this;
}


/* ProtectTheGridItemChallengeProperties::~ProtectTheGridItemChallengeProperties() */

void __thiscall
ProtectTheGridItemChallengeProperties::~ProtectTheGridItemChallengeProperties
          (ProtectTheGridItemChallengeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06996a50;
  std::string::~string((string *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  std::vector<ProtectedGridItemEntry,std::allocator<ProtectedGridItemEntry>>::~vector
            ((vector<ProtectedGridItemEntry,std::allocator<ProtectedGridItemEntry>> *)(this + 0x40))
  ;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ProtectTheGridItemChallengeProperties::~ProtectTheGridItemChallengeProperties() */

void __thiscall
ProtectTheGridItemChallengeProperties::~ProtectTheGridItemChallengeProperties
          (ProtectTheGridItemChallengeProperties *this)

{
  ~ProtectTheGridItemChallengeProperties(this);
  AK::FreeHook(this);
  return;
}

