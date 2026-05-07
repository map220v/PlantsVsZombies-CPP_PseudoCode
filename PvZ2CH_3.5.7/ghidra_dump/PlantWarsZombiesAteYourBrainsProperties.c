// Class: PlantWarsZombiesAteYourBrainsProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombiesAteYourBrainsProperties::StaticClassInit() */

void PlantWarsZombiesAteYourBrainsProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsZombiesAteYourBrainsProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_046cecfc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsZombiesAteYourBrainsProperties::StaticGetClass() */

long * PlantWarsZombiesAteYourBrainsProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsZombiesAteYourBrainsProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsZombiesAteYourBrainsProperties::GetClass() const */

long * PlantWarsZombiesAteYourBrainsProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsZombiesAteYourBrainsProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsZombiesAteYourBrainsProperties::GetModuleClass() const */

long * PlantWarsZombiesAteYourBrainsProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantWarsZombiesAteYourBrainsModule::sClass != (long *)0x0) {
    return PlantWarsZombiesAteYourBrainsModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantWarsZombiesAteYourBrainsModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsZombiesAteYourBrainsModule",uVar2,
            PlantWarsZombiesAteYourBrainsModule::StaticNew);
  PlantWarsZombiesAteYourBrainsModule::StaticClassInit();
  return PlantWarsZombiesAteYourBrainsModule::sClass;
}


/* PlantWarsZombiesAteYourBrainsProperties::PlantWarsZombiesAteYourBrainsProperties() */

void __thiscall
PlantWarsZombiesAteYourBrainsProperties::PlantWarsZombiesAteYourBrainsProperties
          (PlantWarsZombiesAteYourBrainsProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068b3f70;
  *(undefined4 *)(this + 0x40) = 0xc2a00000;
  return;
}


/* PlantWarsZombiesAteYourBrainsProperties::StaticNew() */

PlantWarsZombiesAteYourBrainsProperties * PlantWarsZombiesAteYourBrainsProperties::StaticNew(void)

{
  PlantWarsZombiesAteYourBrainsProperties *this;
  
  this = ::operator_new(0x48);
  PlantWarsZombiesAteYourBrainsProperties(this);
  return this;
}


/* PlantWarsZombiesAteYourBrainsProperties::~PlantWarsZombiesAteYourBrainsProperties() */

void __thiscall
PlantWarsZombiesAteYourBrainsProperties::~PlantWarsZombiesAteYourBrainsProperties
          (PlantWarsZombiesAteYourBrainsProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068b3f70;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlantWarsZombiesAteYourBrainsProperties::~PlantWarsZombiesAteYourBrainsProperties() */

void __thiscall
PlantWarsZombiesAteYourBrainsProperties::~PlantWarsZombiesAteYourBrainsProperties
          (PlantWarsZombiesAteYourBrainsProperties *this)

{
  ~PlantWarsZombiesAteYourBrainsProperties(this);
  AK::FreeHook(this);
  return;
}

