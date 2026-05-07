// Class: LevelScoringModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringModuleProperties::StaticClassInit() */

void LevelScoringModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelScoringPlantBonusTier");
    (*pcVar3)(plVar2,asStack_10,FUN_0384f840,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LevelScoringModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03851c64,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringModuleProperties::StaticGetClass() */

long * LevelScoringModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelScoringModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelScoringModuleProperties::GetClass() const */

long * LevelScoringModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelScoringModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelScoringModuleProperties::GetModuleClass() const */

long * LevelScoringModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelScoringModule::sClass != (long *)0x0) {
    return LevelScoringModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelScoringModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelScoringModule",uVar2,LevelScoringModule::StaticNew);
  LevelScoringModule::StaticClassInit();
  return LevelScoringModule::sClass;
}


/* LevelScoringModuleProperties::LevelScoringModuleProperties() */

void __thiscall
LevelScoringModuleProperties::LevelScoringModuleProperties(LevelScoringModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066a7c80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  Set8BytesTo0(this + 0x60);
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x58) = 0x3e800000;
  return;
}


/* LevelScoringModuleProperties::StaticNew() */

LevelScoringModuleProperties * LevelScoringModuleProperties::StaticNew(void)

{
  LevelScoringModuleProperties *this;
  
  this = ::operator_new(0x70);
  LevelScoringModuleProperties(this);
  return this;
}


/* LevelScoringModuleProperties::~LevelScoringModuleProperties() */

void __thiscall
LevelScoringModuleProperties::~LevelScoringModuleProperties(LevelScoringModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7c80;
  std::string::~string((string *)(this + 0x60));
  std::vector<LevelScoringPlantBonusTier,std::allocator<LevelScoringPlantBonusTier>>::~vector
            ((vector<LevelScoringPlantBonusTier,std::allocator<LevelScoringPlantBonusTier>> *)
             (this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelScoringModuleProperties::~LevelScoringModuleProperties() */

void __thiscall
LevelScoringModuleProperties::~LevelScoringModuleProperties(LevelScoringModuleProperties *this)

{
  ~LevelScoringModuleProperties(this);
  AK::FreeHook(this);
  return;
}

