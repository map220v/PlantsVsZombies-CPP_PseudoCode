// Class: PlantWarsZombiesDeadWinConProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombiesDeadWinConProperties::StaticClassInit() */

void PlantWarsZombiesDeadWinConProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsZombiesDeadWinConProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_046d3088,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsZombiesDeadWinConProperties::StaticGetClass() */

long * PlantWarsZombiesDeadWinConProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsZombiesDeadWinConProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsZombiesDeadWinConProperties::GetClass() const */

long * PlantWarsZombiesDeadWinConProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsZombiesDeadWinConProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsZombiesDeadWinConProperties::GetModuleClass() const */

long * PlantWarsZombiesDeadWinConProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantWarsZombiesDeadWinCon::sClass != (long *)0x0) {
    return PlantWarsZombiesDeadWinCon::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantWarsZombiesDeadWinCon::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsZombiesDeadWinCon",uVar2,PlantWarsZombiesDeadWinCon::StaticNew);
  return PlantWarsZombiesDeadWinCon::sClass;
}


/* PlantWarsZombiesDeadWinConProperties::PlantWarsZombiesDeadWinConProperties() */

void __thiscall
PlantWarsZombiesDeadWinConProperties::PlantWarsZombiesDeadWinConProperties
          (PlantWarsZombiesDeadWinConProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068b44f0;
  return;
}


/* PlantWarsZombiesDeadWinConProperties::StaticNew() */

PlantWarsZombiesDeadWinConProperties * PlantWarsZombiesDeadWinConProperties::StaticNew(void)

{
  PlantWarsZombiesDeadWinConProperties *this;
  
  this = ::operator_new(0x40);
  PlantWarsZombiesDeadWinConProperties(this);
  return this;
}


/* PlantWarsZombiesDeadWinConProperties::~PlantWarsZombiesDeadWinConProperties() */

void __thiscall
PlantWarsZombiesDeadWinConProperties::~PlantWarsZombiesDeadWinConProperties
          (PlantWarsZombiesDeadWinConProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068b44f0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlantWarsZombiesDeadWinConProperties::~PlantWarsZombiesDeadWinConProperties() */

void __thiscall
PlantWarsZombiesDeadWinConProperties::~PlantWarsZombiesDeadWinConProperties
          (PlantWarsZombiesDeadWinConProperties *this)

{
  ~PlantWarsZombiesDeadWinConProperties(this);
  AK::FreeHook(this);
  return;
}

