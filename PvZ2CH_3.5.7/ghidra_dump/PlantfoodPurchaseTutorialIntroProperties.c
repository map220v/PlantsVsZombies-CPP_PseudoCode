// Class: PlantfoodPurchaseTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodPurchaseTutorialIntroProperties::StaticClassInit() */

void PlantfoodPurchaseTutorialIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantfoodPurchaseTutorialIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f71594,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodPurchaseTutorialIntroProperties::StaticGetClass() */

long * PlantfoodPurchaseTutorialIntroProperties::StaticGetClass(void)

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
  uVar2 = PowerupCukeTutorialIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodPurchaseTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodPurchaseTutorialIntroProperties::GetClass() const */

long * PlantfoodPurchaseTutorialIntroProperties::GetClass(void)

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
  uVar2 = PowerupCukeTutorialIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodPurchaseTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodPurchaseTutorialIntroProperties::GetModuleClass() const */

long * PlantfoodPurchaseTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantfoodPurchaseTutorialIntro::sClass != (long *)0x0) {
    return PlantfoodPurchaseTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantfoodPurchaseTutorialIntro::sClass = plVar1;
  uVar2 = PowerupCukeTutorialIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodPurchaseTutorialIntro",uVar2,PlantfoodPurchaseTutorialIntro::StaticNew)
  ;
  PlantfoodPurchaseTutorialIntro::StaticClassInit();
  return PlantfoodPurchaseTutorialIntro::sClass;
}


/* PlantfoodPurchaseTutorialIntroProperties::PlantfoodPurchaseTutorialIntroProperties() */

void __thiscall
PlantfoodPurchaseTutorialIntroProperties::PlantfoodPurchaseTutorialIntroProperties
          (PlantfoodPurchaseTutorialIntroProperties *this)

{
  PowerupCukeTutorialIntroProperties::PowerupCukeTutorialIntroProperties
            ((PowerupCukeTutorialIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067a2360;
  return;
}


/* PlantfoodPurchaseTutorialIntroProperties::StaticNew() */

PlantfoodPurchaseTutorialIntroProperties * PlantfoodPurchaseTutorialIntroProperties::StaticNew(void)

{
  PlantfoodPurchaseTutorialIntroProperties *this;
  
  this = ::operator_new(0x98);
  PlantfoodPurchaseTutorialIntroProperties(this);
  return this;
}


/* PlantfoodPurchaseTutorialIntroProperties::~PlantfoodPurchaseTutorialIntroProperties() */

void __thiscall
PlantfoodPurchaseTutorialIntroProperties::~PlantfoodPurchaseTutorialIntroProperties
          (PlantfoodPurchaseTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067a2360;
  PowerupCukeTutorialIntroProperties::~PowerupCukeTutorialIntroProperties
            ((PowerupCukeTutorialIntroProperties *)this);
  return;
}


/* PlantfoodPurchaseTutorialIntroProperties::~PlantfoodPurchaseTutorialIntroProperties() */

void __thiscall
PlantfoodPurchaseTutorialIntroProperties::~PlantfoodPurchaseTutorialIntroProperties
          (PlantfoodPurchaseTutorialIntroProperties *this)

{
  ~PlantfoodPurchaseTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}

