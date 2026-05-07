// Class: MiniGameCollectionModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionModuleProperties::StaticClassInit() */

void MiniGameCollectionModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameCollectionModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038b5cd4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionModuleProperties::StaticGetClass() */

long * MiniGameCollectionModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionModuleProperties::GetClass() const */

long * MiniGameCollectionModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionModuleProperties::GetModuleClass() const */

long * MiniGameCollectionModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MiniGameCollectionModule::sClass != (long *)0x0) {
    return MiniGameCollectionModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MiniGameCollectionModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameCollectionModule",uVar2,MiniGameCollectionModule::StaticNew);
  MiniGameCollectionModule::StaticClassInit();
  return MiniGameCollectionModule::sClass;
}


/* MiniGameCollectionModuleProperties::MiniGameCollectionModuleProperties() */

void __thiscall
MiniGameCollectionModuleProperties::MiniGameCollectionModuleProperties
          (MiniGameCollectionModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b5530;
  return;
}


/* MiniGameCollectionModuleProperties::StaticNew() */

MiniGameCollectionModuleProperties * MiniGameCollectionModuleProperties::StaticNew(void)

{
  MiniGameCollectionModuleProperties *this;
  
  this = ::operator_new(0x40);
  MiniGameCollectionModuleProperties(this);
  return this;
}


/* MiniGameCollectionModuleProperties::~MiniGameCollectionModuleProperties() */

void __thiscall
MiniGameCollectionModuleProperties::~MiniGameCollectionModuleProperties
          (MiniGameCollectionModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b5530;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* MiniGameCollectionModuleProperties::~MiniGameCollectionModuleProperties() */

void __thiscall
MiniGameCollectionModuleProperties::~MiniGameCollectionModuleProperties
          (MiniGameCollectionModuleProperties *this)

{
  ~MiniGameCollectionModuleProperties(this);
  AK::FreeHook(this);
  return;
}

