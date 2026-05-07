// Class: RocketZombieFlickModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RocketZombieFlickModuleProperties::StaticClassInit() */

void RocketZombieFlickModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RocketZombieFlickModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_047069dc,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RocketZombieFlickModuleProperties::StaticGetClass() */

long * RocketZombieFlickModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RocketZombieFlickModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RocketZombieFlickModuleProperties::GetClass() const */

long * RocketZombieFlickModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RocketZombieFlickModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RocketZombieFlickModuleProperties::GetModuleClass() const */

long * RocketZombieFlickModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RocketZombieFlickModule::sClass != (long *)0x0) {
    return RocketZombieFlickModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RocketZombieFlickModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RocketZombieFlickModule",uVar2,RocketZombieFlickModule::StaticNew);
  RocketZombieFlickModule::StaticClassInit();
  return RocketZombieFlickModule::sClass;
}


/* RocketZombieFlickModuleProperties::RocketZombieFlickModuleProperties() */

void __thiscall
RocketZombieFlickModuleProperties::RocketZombieFlickModuleProperties
          (RocketZombieFlickModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068bd370;
  return;
}


/* RocketZombieFlickModuleProperties::StaticNew() */

RocketZombieFlickModuleProperties * RocketZombieFlickModuleProperties::StaticNew(void)

{
  RocketZombieFlickModuleProperties *this;
  
  this = ::operator_new(0x40);
  RocketZombieFlickModuleProperties(this);
  return this;
}


/* RocketZombieFlickModuleProperties::~RocketZombieFlickModuleProperties() */

void __thiscall
RocketZombieFlickModuleProperties::~RocketZombieFlickModuleProperties
          (RocketZombieFlickModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068bd370;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RocketZombieFlickModuleProperties::~RocketZombieFlickModuleProperties() */

void __thiscall
RocketZombieFlickModuleProperties::~RocketZombieFlickModuleProperties
          (RocketZombieFlickModuleProperties *this)

{
  ~RocketZombieFlickModuleProperties(this);
  AK::FreeHook(this);
  return;
}

