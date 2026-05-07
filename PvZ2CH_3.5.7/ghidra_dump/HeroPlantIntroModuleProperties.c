// Class: HeroPlantIntroModuleProperties


/* HeroPlantIntroModuleProperties::GetModuleClass() const */

long * HeroPlantIntroModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HeroPlantIntroModule::sClass != (long *)0x0) {
    return HeroPlantIntroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HeroPlantIntroModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"HeroPlantIntroModule",uVar2,HeroPlantIntroModule::StaticNew);
  HeroPlantIntroModule::StaticClassInit();
  return HeroPlantIntroModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantIntroModuleProperties::StaticClassInit() */

void HeroPlantIntroModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeroPlantIntroModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_042bb4e8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantIntroModuleProperties::StaticGetClass() */

long * HeroPlantIntroModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeroPlantIntroModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantIntroModuleProperties::GetClass() const */

long * HeroPlantIntroModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HeroPlantIntroModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantIntroModuleProperties::HeroPlantIntroModuleProperties() */

void __thiscall
HeroPlantIntroModuleProperties::HeroPlantIntroModuleProperties(HeroPlantIntroModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0682c120;
  return;
}


/* HeroPlantIntroModuleProperties::StaticNew() */

HeroPlantIntroModuleProperties * HeroPlantIntroModuleProperties::StaticNew(void)

{
  HeroPlantIntroModuleProperties *this;
  
  this = ::operator_new(0x40);
  HeroPlantIntroModuleProperties(this);
  return this;
}


/* HeroPlantIntroModuleProperties::~HeroPlantIntroModuleProperties() */

void __thiscall
HeroPlantIntroModuleProperties::~HeroPlantIntroModuleProperties
          (HeroPlantIntroModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0682c120;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* HeroPlantIntroModuleProperties::~HeroPlantIntroModuleProperties() */

void __thiscall
HeroPlantIntroModuleProperties::~HeroPlantIntroModuleProperties
          (HeroPlantIntroModuleProperties *this)

{
  ~HeroPlantIntroModuleProperties(this);
  AK::FreeHook(this);
  return;
}

