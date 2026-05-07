// Class: SpeedUpTileModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedUpTileModuleProperties::StaticClassInit() */

void SpeedUpTileModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpeedUpTileModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03de03c8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpeedUpTileModuleProperties::StaticGetClass() */

long * SpeedUpTileModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpeedUpTileModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpeedUpTileModuleProperties::GetClass() const */

long * SpeedUpTileModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SpeedUpTileModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpeedUpTileModuleProperties::GetModuleClass() const */

long * SpeedUpTileModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpeedUpTileModule::sClass != (long *)0x0) {
    return SpeedUpTileModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpeedUpTileModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SpeedUpTileModule",uVar2,SpeedUpTileModule::StaticNew);
  SpeedUpTileModule::StaticClassInit();
  return SpeedUpTileModule::sClass;
}


/* SpeedUpTileModuleProperties::SpeedUpTileModuleProperties() */

void __thiscall
SpeedUpTileModuleProperties::SpeedUpTileModuleProperties(SpeedUpTileModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0677e4a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* SpeedUpTileModuleProperties::StaticNew() */

SpeedUpTileModuleProperties * SpeedUpTileModuleProperties::StaticNew(void)

{
  SpeedUpTileModuleProperties *this;
  
  this = ::operator_new(0x58);
  SpeedUpTileModuleProperties(this);
  return this;
}


/* SpeedUpTileModuleProperties::~SpeedUpTileModuleProperties() */

void __thiscall
SpeedUpTileModuleProperties::~SpeedUpTileModuleProperties(SpeedUpTileModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0677e4a0;
  std::vector<TowerDefendRoad,std::allocator<TowerDefendRoad>>::~vector
            ((vector<TowerDefendRoad,std::allocator<TowerDefendRoad>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SpeedUpTileModuleProperties::~SpeedUpTileModuleProperties() */

void __thiscall
SpeedUpTileModuleProperties::~SpeedUpTileModuleProperties(SpeedUpTileModuleProperties *this)

{
  ~SpeedUpTileModuleProperties(this);
  AK::FreeHook(this);
  return;
}

