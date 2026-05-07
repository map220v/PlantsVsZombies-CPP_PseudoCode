// Class: ArtifactBeehiveProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeehiveProperties::StaticClassInit() */

void ArtifactBeehiveProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactBeehiveProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03734840,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBeehiveProperties::StaticGetClass() */

long * ArtifactBeehiveProperties::StaticGetClass(void)

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
  uVar2 = ArtifactProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactBeehiveProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBeehiveProperties::GetClass() const */

long * ArtifactBeehiveProperties::GetClass(void)

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
  uVar2 = ArtifactProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactBeehiveProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBeehiveProperties::ArtifactBeehiveProperties() */

void __thiscall
ArtifactBeehiveProperties::ArtifactBeehiveProperties(ArtifactBeehiveProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066918d0;
  return;
}


/* ArtifactBeehiveProperties::StaticNew() */

ArtifactBeehiveProperties * ArtifactBeehiveProperties::StaticNew(void)

{
  ArtifactBeehiveProperties *this;
  
  this = ::operator_new(0x150);
  ArtifactBeehiveProperties(this);
  return this;
}


/* ArtifactBeehiveProperties::~ArtifactBeehiveProperties() */

void __thiscall
ArtifactBeehiveProperties::~ArtifactBeehiveProperties(ArtifactBeehiveProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066918d0;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactBeehiveProperties::~ArtifactBeehiveProperties() */

void __thiscall
ArtifactBeehiveProperties::~ArtifactBeehiveProperties(ArtifactBeehiveProperties *this)

{
  ~ArtifactBeehiveProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeehiveProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactBeehiveProperties::GatherResourceRequirements(ArtifactBeehiveProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantHorsebean");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"LevelCommon");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantPokraAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

