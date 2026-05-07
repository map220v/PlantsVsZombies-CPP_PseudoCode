// Class: PlantfoodTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodTutorialIntroProperties::StaticClassInit() */

void PlantfoodTutorialIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantfoodTutorialIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f747a0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodTutorialIntroProperties::StaticGetClass() */

long * PlantfoodTutorialIntroProperties::StaticGetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodTutorialIntroProperties::GetClass() const */

long * PlantfoodTutorialIntroProperties::GetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodTutorialIntroProperties::GetModuleClass() const */

long * PlantfoodTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantfoodTutorialIntro::sClass != (long *)0x0) {
    return PlantfoodTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantfoodTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodTutorialIntro",uVar2,PlantfoodTutorialIntro::StaticNew);
  PlantfoodTutorialIntro::StaticClassInit();
  return PlantfoodTutorialIntro::sClass;
}


/* PlantfoodTutorialIntroProperties::PlantfoodTutorialIntroProperties() */

void __thiscall
PlantfoodTutorialIntroProperties::PlantfoodTutorialIntroProperties
          (PlantfoodTutorialIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067a2670;
  return;
}


/* PlantfoodTutorialIntroProperties::StaticNew() */

PlantfoodTutorialIntroProperties * PlantfoodTutorialIntroProperties::StaticNew(void)

{
  PlantfoodTutorialIntroProperties *this;
  
  this = ::operator_new(0x78);
  PlantfoodTutorialIntroProperties(this);
  return this;
}


/* PlantfoodTutorialIntroProperties::~PlantfoodTutorialIntroProperties() */

void __thiscall
PlantfoodTutorialIntroProperties::~PlantfoodTutorialIntroProperties
          (PlantfoodTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067a2670;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* PlantfoodTutorialIntroProperties::~PlantfoodTutorialIntroProperties() */

void __thiscall
PlantfoodTutorialIntroProperties::~PlantfoodTutorialIntroProperties
          (PlantfoodTutorialIntroProperties *this)

{
  ~PlantfoodTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}

