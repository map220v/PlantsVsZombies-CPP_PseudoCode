// Class: SeedRainProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainProperties::StaticClassInit() */

void SeedRainProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedRainContentProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04a08a68,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SeedRainProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04a09970,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedRainProperties::StaticGetClass() */

long * SeedRainProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedRainProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedRainProperties::GetClass() const */

long * SeedRainProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SeedRainProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedRainProperties::GetModuleClass() const */

long * SeedRainProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SeedRainModule::sClass != (long *)0x0) {
    return SeedRainModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SeedRainModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SeedRainModule",uVar2,SeedRainModule::StaticNew);
  SeedRainModule::StaticClassInit();
  return SeedRainModule::sClass;
}


/* SeedRainProperties::SeedRainProperties() */

void __thiscall SeedRainProperties::SeedRainProperties(SeedRainProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0692d9d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0x40a00000;
  return;
}


/* SeedRainProperties::StaticNew() */

SeedRainProperties * SeedRainProperties::StaticNew(void)

{
  SeedRainProperties *this;
  
  this = ::operator_new(0x60);
  SeedRainProperties(this);
  return this;
}


/* SeedRainProperties::~SeedRainProperties() */

void __thiscall SeedRainProperties::~SeedRainProperties(SeedRainProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0692d9d0;
  std::vector<SeedRainContentProperties,std::allocator<SeedRainContentProperties>>::~vector
            ((vector<SeedRainContentProperties,std::allocator<SeedRainContentProperties>> *)
             (this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SeedRainProperties::~SeedRainProperties() */

void __thiscall SeedRainProperties::~SeedRainProperties(SeedRainProperties *this)

{
  ~SeedRainProperties(this);
  AK::FreeHook(this);
  return;
}

