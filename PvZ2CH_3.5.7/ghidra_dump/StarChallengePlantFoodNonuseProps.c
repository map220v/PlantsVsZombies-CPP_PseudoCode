// Class: StarChallengePlantFoodNonuseProps


/* StarChallengePlantFoodNonuseProps::GetDescription() const */

void __thiscall
StarChallengePlantFoodNonuseProps::GetDescription(StarChallengePlantFoodNonuseProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PLANTFOOD_NONUSE]");
  return;
}


/* StarChallengePlantFoodNonuseProps::GetDescriptiveName() const */

void __thiscall
StarChallengePlantFoodNonuseProps::GetDescriptiveName(StarChallengePlantFoodNonuseProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PLANTFOOD_NONUSE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFoodNonuseProps::StaticClassInit() */

void StarChallengePlantFoodNonuseProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantFoodNonuseProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04484a04,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantFoodNonuseProps::StaticGetClass() */

long * StarChallengePlantFoodNonuseProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantFoodNonuseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantFoodNonuseProps::GetClass() const */

long * StarChallengePlantFoodNonuseProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantFoodNonuseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantFoodNonuseProps::GetModuleClass() const */

long * StarChallengePlantFoodNonuseProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengePlantFoodNonuse::sClass != (long *)0x0) {
    return StarChallengePlantFoodNonuse::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengePlantFoodNonuse::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengePlantFoodNonuse",uVar2,StarChallengePlantFoodNonuse::StaticNew);
  StarChallengePlantFoodNonuse::StaticClassInit();
  return StarChallengePlantFoodNonuse::sClass;
}


/* StarChallengePlantFoodNonuseProps::StarChallengePlantFoodNonuseProps() */

void __thiscall
StarChallengePlantFoodNonuseProps::StarChallengePlantFoodNonuseProps
          (StarChallengePlantFoodNonuseProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684f8f0;
  return;
}


/* StarChallengePlantFoodNonuseProps::StaticNew() */

StarChallengePlantFoodNonuseProps * StarChallengePlantFoodNonuseProps::StaticNew(void)

{
  StarChallengePlantFoodNonuseProps *this;
  
  this = ::operator_new(0x40);
  StarChallengePlantFoodNonuseProps(this);
  return this;
}


/* StarChallengePlantFoodNonuseProps::~StarChallengePlantFoodNonuseProps() */

void __thiscall
StarChallengePlantFoodNonuseProps::~StarChallengePlantFoodNonuseProps
          (StarChallengePlantFoodNonuseProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684f8f0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengePlantFoodNonuseProps::~StarChallengePlantFoodNonuseProps() */

void __thiscall
StarChallengePlantFoodNonuseProps::~StarChallengePlantFoodNonuseProps
          (StarChallengePlantFoodNonuseProps *this)

{
  ~StarChallengePlantFoodNonuseProps(this);
  AK::FreeHook(this);
  return;
}

