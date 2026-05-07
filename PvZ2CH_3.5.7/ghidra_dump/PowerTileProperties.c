// Class: PowerTileProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileProperties::StaticClassInit() */

void PowerTileProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerTileEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_03ce96a0,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PowerTileProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03ce9c18,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileProperties::StaticGetClass() */

long * PowerTileProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerTileProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerTileProperties::GetClass() const */

long * PowerTileProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerTileProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerTileProperties::GetModuleClass() const */

long * PowerTileProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PowerTileModule::sClass != (long *)0x0) {
    return PowerTileModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PowerTileModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PowerTileModule",uVar2,PowerTileModule::StaticNew);
  return PowerTileModule::sClass;
}


/* PowerTileProperties::PowerTileProperties() */

void __thiscall PowerTileProperties::PowerTileProperties(PowerTileProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06761370;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PowerTileProperties::StaticNew() */

PowerTileProperties * PowerTileProperties::StaticNew(void)

{
  PowerTileProperties *this;
  
  this = ::operator_new(0x58);
  PowerTileProperties(this);
  return this;
}


/* PowerTileProperties::~PowerTileProperties() */

void __thiscall PowerTileProperties::~PowerTileProperties(PowerTileProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06761370;
  std::vector<PowerTileEntry,std::allocator<PowerTileEntry>>::~vector
            ((vector<PowerTileEntry,std::allocator<PowerTileEntry>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PowerTileProperties::~PowerTileProperties() */

void __thiscall PowerTileProperties::~PowerTileProperties(PowerTileProperties *this)

{
  ~PowerTileProperties(this);
  AK::FreeHook(this);
  return;
}

