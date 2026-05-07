// Class: CannonMinigameProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonMinigameProperties::StaticClassInit() */

void CannonMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PirateLane");
    (*pcVar3)(plVar2,asStack_10,FUN_03bb79fc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComboBracket");
    (*pcVar3)(plVar2,asStack_10,FUN_03bb64f8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CannonMinigameProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03bb7c2c,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonMinigameProperties::StaticGetClass() */

long * CannonMinigameProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CannonMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonMinigameProperties::GetClass() const */

long * CannonMinigameProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CannonMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonMinigameProperties::GetModuleClass() const */

long * CannonMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CannonMinigameModule::sClass != (long *)0x0) {
    return CannonMinigameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CannonMinigameModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CannonMinigameModule",uVar2,CannonMinigameModule::StaticNew);
  return CannonMinigameModule::sClass;
}


/* CannonMinigameProperties::CannonMinigameProperties() */

void __thiscall CannonMinigameProperties::CannonMinigameProperties(CannonMinigameProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06737cf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xa4) = 10;
  *(undefined4 *)(this + 0xa8) = 300;
  *(undefined4 *)(this + 0xa0) = 0;
  this[0x80] = (CannonMinigameProperties)0x0;
  *(undefined4 *)(this + 0x40) = 0x42700000;
  *(undefined4 *)(this + 0x44) = 0x41a00000;
  *(undefined4 *)(this + 0x48) = 0x42480000;
  return;
}


/* CannonMinigameProperties::StaticNew() */

CannonMinigameProperties * CannonMinigameProperties::StaticNew(void)

{
  CannonMinigameProperties *this;
  
  this = ::operator_new(0xb0);
  CannonMinigameProperties(this);
  return this;
}


/* CannonMinigameProperties::~CannonMinigameProperties() */

void __thiscall CannonMinigameProperties::~CannonMinigameProperties(CannonMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06737cf0;
  std::vector<ComboBracket,std::allocator<ComboBracket>>::~vector
            ((vector<ComboBracket,std::allocator<ComboBracket>> *)(this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
  std::vector<PirateLane,std::allocator<PirateLane>>::~vector
            ((vector<PirateLane,std::allocator<PirateLane>> *)(this + 0x50));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CannonMinigameProperties::~CannonMinigameProperties() */

void __thiscall CannonMinigameProperties::~CannonMinigameProperties(CannonMinigameProperties *this)

{
  ~CannonMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

