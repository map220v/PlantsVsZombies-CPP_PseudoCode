// Class: StarChallengeProtectPlantProps


/* StarChallengeProtectPlantProps::GetDescriptiveName() const */

void __thiscall
StarChallengeProtectPlantProps::GetDescriptiveName(StarChallengeProtectPlantProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PROTECT_PLANT]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlantProps::StaticClassInit() */

void StarChallengeProtectPlantProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeProtectPlantProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04485e60,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeProtectPlantProps::StaticGetClass() */

long * StarChallengeProtectPlantProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeProtectPlantProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeProtectPlantProps::GetClass() const */

long * StarChallengeProtectPlantProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeProtectPlantProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeProtectPlantProps::GetModuleClass() const */

long * StarChallengeProtectPlantProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeProtectPlant::sClass != (long *)0x0) {
    return StarChallengeProtectPlant::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeProtectPlant::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeProtectPlant",uVar2,StarChallengeProtectPlant::StaticNew);
  StarChallengeProtectPlant::StaticClassInit();
  return StarChallengeProtectPlant::sClass;
}


/* StarChallengeProtectPlantProps::StarChallengeProtectPlantProps() */

void __thiscall
StarChallengeProtectPlantProps::StarChallengeProtectPlantProps(StarChallengeProtectPlantProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684faa0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* StarChallengeProtectPlantProps::StaticNew() */

StarChallengeProtectPlantProps * StarChallengeProtectPlantProps::StaticNew(void)

{
  StarChallengeProtectPlantProps *this;
  
  this = ::operator_new(0x58);
  StarChallengeProtectPlantProps(this);
  return this;
}


/* StarChallengeProtectPlantProps::~StarChallengeProtectPlantProps() */

void __thiscall
StarChallengeProtectPlantProps::~StarChallengeProtectPlantProps
          (StarChallengeProtectPlantProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684faa0;
  std::vector<ProtectedPlantEntry,std::allocator<ProtectedPlantEntry>>::~vector
            ((vector<ProtectedPlantEntry,std::allocator<ProtectedPlantEntry>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeProtectPlantProps::~StarChallengeProtectPlantProps() */

void __thiscall
StarChallengeProtectPlantProps::~StarChallengeProtectPlantProps
          (StarChallengeProtectPlantProps *this)

{
  ~StarChallengeProtectPlantProps(this);
  AK::FreeHook(this);
  return;
}

